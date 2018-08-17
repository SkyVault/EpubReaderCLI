import
  zip/[libzip, zipfiles],
  terminal,
  tables,
  os,
  colors,
  osproc,
  ospaths,
  system,
  strutils,
  streams,
  strformat,
  parsexml,
  xmlparser,
  xmltree,
  html_renderer

type
  Metdata = ref object
    title, language, creator: string
    
  Book = ref object
    metadata: Metdata
    currentPage: string
    pages: TableRef[string, XmlNode]
    tableOfContents: seq[(string, string)]

var filename = splitPath(currentSourcePath()).head & "/../../Writing/Books/Classics/Tom_Sawyer.epub"

doAssert(fileExists filename, "Wat")

var zip: ZipArchive
if not zip.open(filename):
  echo fmt"Failed to open {extractFilename filename}"
  quit(1)

const TEMP_DIR = splitPath(currentSourcePath()).head & "/tmp"
removeDir TEMP_DIR
createDir TEMP_DIR

zip.extractAll(TEMP_DIR)
zip.close()

block:
  let mimetype_content = readFile TEMP_DIR & "/mimetype"

  let m = mimetype_content.split('/')
  #let app = m[0]
  let theType = m[1]

  doAssert(theType != "xhtml+xml", "We dont support xhtml+xml yet")

proc parseOpf(opfPath: string): (seq[(string, string)], Metdata)=
    let theXml = readFile(opfPath)
        .newStringStream()
        .parseXml()

    doAssert(theXml.attr("version") == "2.0", "Error, the reader only suports epub v2.0")

    # id: href
    result = (@[], Metdata(title: "", creator: "", language: ""))
    var itemTable = newTable[string, string]()
    var foundManifest = false

    for subXml in theXml:
      case subXml.tag:
      of "manifest":
        foundManifest = true
        for item in subXml:
          if item.kind != xnElement: continue
          
          let id = item.attr("id")
          let href = item.attr("href")
          itemTable.add(id, href)
      of "metadata":
        #try: result[1].title = subXml.attr("title") except: discard
        #try: result[1].creator = subXml.attr("creator") except: discard
        #try: result[1].language = subXml.attr("language") except: discard
        for meta in subXml:
          if meta.tag == "dc:title":
            try: result[1].title = meta.innerText except: discard
          elif meta.tag == "dc:creator":
            try: result[1].creator = meta.innerText except: discard
          elif meta.tag == "dc:language":
            try: result[1].language = meta.innerText except: discard

      else: discard

    doAssert(foundManifest, "Error, Epub content is missing a manifest")

    for subXml in theXml:
      case subXml.tag:
      of "spine":
        foundManifest = true
        for item in subXml:
          if item.kind != xnElement: continue
          if item.attr("linear") != "yes": continue

          result[0].add((item.attr("idref"), itemTable[item.attr("idref")]))
      else: discard

# Generate table of contents and pages
#var pages = newTable[string, XmlNode]()
#var tableOfContents: seq[(string, string)]

# Check mimetype
var book = Book(
  pages: newTable[string, XmlNode](),
  tableOfContents: @[]
)

var xmlFiles = newSeq[string]()

let OEBPS =
  if dirExists TEMP_DIR & "/OEBPS": TEMP_DIR & "/OEBPS"
  elif dirExists TEMP_DIR & "/OPS": TEMP_DIR & "/OPS"
  elif dirExists TEMP_DIR & "/Content": TEMP_DIR & "/Content"
  else: ""

doAssert(OEBPS != "", "Cannot find OEBPS/OPS/Content folder")

for filePath in walkDirRec TEMP_DIR:
  let splits = extractFilename(filePath).split('.')
  if splits.len > 1:
    let ext = splits[splits.len - 1]
    case ext
    of "opf":
      (book.tableOfContents, book.metadata) = parseOpf(filePath)

    of "html", "xhtml", "xml":
      xmlFiles.add filePath

    else: discard

doAssert(book.tableOfContents.len > 0, "Failed to generate the table of contents")

proc contains(tab: var seq[(string, string)], file: string): auto=
  result = false
  for item in tab:
    if item[1] == file:
      return true

for xmlFile in xmlFiles:
  let name = extractFilename xmlFile
  if contains(book.tableOfContents, name):
    book.pages.add(
      name,
      readFile(xmlFile)
        .newStringStream()
        .parseXml())

# Application starts
proc printTableOfContents(toc: var seq[(string, string)], cursor, offset: (int, int))=
  let (tw, _) = terminalSize()

  #let selection_w = (tw.float * (30.0 / 100.0)).int

  for i, item in toc.pairs:
    let slen = item[0].len
    let pos = (tw / 2) - slen / 2
    setCursorPos(pos.int, offset[1] + i)

    if cursor[1] == i:
      setForegroundColor(fgBlack)
      setBackgroundColor(bgWhite)
    else:
      resetAttributes()

    writeLine(stdout, item[0])

proc printTitle(offset: (int, int)): (int, int)=
  let tlen = book.metadata.title.len
  let (tw, _) = terminalSize()
  setCursorPos((tw/2-tlen/2).int,offset[1])

  setStyle({styleBright})
  writeStyled(book.metadata.title)
  resetAttributes()

  setCursorPos((tw/2-tlen/2).int,offset[1]+1)
  writeLine(stdout, "-".repeat(tlen))
  setCursorPos((tw/2-tlen/2).int,offset[1]+3)
  writeLine(stdout, "Chapters:")
  return (offset[0],offset[1]+5)

type
  ApplicationState = enum
    appTableOfContents,
    appReadingPage,
    appNoBook

var applicationState = appTableOfContents
var cursor = (0, 0)
var offset = (0, 2)
var scroll = 0
var theLines = newSeq[string]()
var running = true

proc renderPage(offset, maxSize: (int, int))=
  if scroll < 0: scroll = 0

  var cursor = 0 
  setCursorPos(offset[0], offset[1])
  for i in 0..maxSize[1]:
    if cursor + i + scroll < theLines.len - 1:
      let line = theLines[scroll + i + cursor]
      if line == "<BOLD>":
        setStyle({styleBright})
        write(stdout, "")
        continue
      if line == "":
        resetAttributes()
        
      write(stdout, line)
      cursorDown()
      setCursorXPos(offset[0])

proc render()=
  setCursorPos(0, 1)
  offset = (0, 1)

  case applicationState:
  of appTableOfContents:
    offset = printTitle(offset)
    printTableOfContents(book.tableOfContents, cursor, offset)
   
    var index = 0
    for i, v in book.tableOfContents.pairs:
      if index == cursor[1]:
        book.currentPage = v[1]
        break
      index+=1
  of appReadingPage:
    #setcursorpos(1, 1)
    #echo book.currentpage
   
    renderPage((20, 2), (terminalWidth() - 1 - 20, terminalHeight() - 1))

  of appNoBook:
    discard

proc update(key: char)=
  case applicationState:
  of appTableOfContents:
    case key:
    of 'q': running = false
    of 'j': cursor = (cursor[0], cursor[1] + 1)
    of 'k': cursor = (cursor[0], cursor[1] - 1)
    else: discard
  
    if key == 'l':
      applicationState = appReadingPage

      # Render to lines
      let page = book.pages[book.currentPage]
      theLines.setLen 0
      renderHtml((20, 2), (terminalWidth() - 1 - 20, terminalHeight() - 1), page, theLines, scroll)

      eraseScreen()
      resetAttributes()
  of appReadingPage:
    case key:
    of 'j': scroll += 1; eraseScreen()
    of 'k': scroll -= 1; eraseScreen()
    of 'q': 
      eraseScreen()
      scroll = 0
      applicationState = appTableOfContents
    else: discard
  of appNoBook:
    discard

proc run=
  eraseScreen()

  hideCursor()
  enableTrueColors()
  
  resetAttributes()
  render()
  while running:
    let key = getch()

    update(key)
    render()

run()
resetAttributes()
