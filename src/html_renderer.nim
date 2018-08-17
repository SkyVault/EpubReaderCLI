
import
  parsexml,
  xmlparser,
  xmltree,
  terminal,
  strutils

proc renderHtml* (offset, maxSize: (int, int), html: XmlNode, theLines: var seq[string], scroll = 0)=
  proc renderElement(body: XmlNode, theLines: var seq[string])=
    if body.kind !=  xnElement: return
    if body.tag == "body" or body.tag == "div" or body.tag == "span":
      for sub in body:
        renderElement(sub, theLines)
    elif body.tag == "br": 
      theLines.add ""
    elif body.tag == "p" or body.tag == "i":
      let splits = body.innerText.split ' '
      var line = ""
      for split in splits:
        if len(line & split & " ") > maxSize[0] - offset[1]:
          theLines.add(line)
          setCursorXPos(offset[0])
          line = ""
        line &= split & " "

    elif body.tag.contains("h") or body.tag == "small" or body.tag == "big":
      theLines.add "<BOLD>"
      theLines.add body.innerText
      theLines.add ""

      for sub in body: renderElement(sub, theLines)
    else: discard
  for part in html:
    if part.tag == "head":
      # Handle header
      discard
    else:
      if part.tag == "body":
        renderElement(part, theLines)
  
