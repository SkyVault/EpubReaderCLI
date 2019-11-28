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
  macros,
  html_renderer

macro `|>`*(lhs, rhs: untyped): untyped =
  case rhs.kind:
  of nnkIdent: # single-parameter functions
    result = newCall(rhs, lhs)
  else:
    result = rhs
    result.insert(1, lhs)

type
  Metdata = ref object
    title, language, creator: string
    
  Book = ref object
    metadata: Metdata
    currentPage: string
    pages: TableRef[string, XmlNode]
    tableOfContents: seq[(string, string)]

type
  ApplicationState = enum
    appTableOfContents,
    appReadingPage,
    appNoBook

  Coord = object
    x, y : int

  App = ref object
    state : ApplicationState
    running : bool
    cursor : Coord
    offset : Coord
    scroll : int

var filename = "tests/books/Tom_Sawyer.epub"

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
proc printTableOfContents(toc: var seq[(string, string)], cursor, offset: Coord)=
  let (tw, _) = terminalSize()

  #let selection_w = (tw.float * (30.0 / 100.0)).int

  for i, item in toc.pairs:
    let slen = item[0].len
    let pos = (tw / 2) - slen / 2
    setCursorPos(pos.int, offset.y + i)

    if cursor.y == i:
      setForegroundColor(fgBlack)
      setBackgroundColor(bgWhite)
    else:
      resetAttributes()

    writeLine(stdout, item[0])

proc printTitle(offset: Coord): Coord =
  let tlen = book.metadata.title.len
  let (tw, _) = terminalSize()
  setCursorPos((tw/2-tlen/2).int,offset.y)

  setStyle({styleBright})
  writeStyled(book.metadata.title)
  resetAttributes()

  setCursorPos((tw/2-tlen/2).int,offset.y + 1)
  writeLine(stdout, "-".repeat(tlen))
  setCursorPos((tw/2-tlen/2).int,offset.y + 3)
  writeLine(stdout, "Chapters:")
  return Coord(x : offset.x, y : offset.y + 5)

var theLines = newSeq[string]()

proc renderPage(app : App, offset, maxSize: (int, int))=
  if app.scroll < 0: app.scroll = 0

  var cursor = 0 
  setCursorPos(offset[0], offset[1])

  for i in 0..maxSize[1]:
    if cursor + i + app.scroll < theLines.len - 1:
      let line = theLines[app.scroll + i + cursor]
      if line == "<BOLD>":
        setStyle({styleBright})
        write(stdout, "")
        continue
      if line == "":
        resetAttributes()
        
      write(stdout, line)
      cursorDown()
      setCursorXPos(offset[0])

proc render(app : App) : App =
  result = app
  setCursorPos(0, 1)
  app.offset = Coord(x : 0, y : 1)

  case app.state:
  of appTableOfContents:
    app.offset = app.offset |> printTitle
    printTableOfContents(book.tableOfContents, app.cursor, app.offset)
   
    var index = 0
    for i, v in book.tableOfContents.pairs:
      if index == app.cursor.y:
        book.currentPage = v[1]
        break
      index+=1
  of appReadingPage:
    #setcursorpos(1, 1)
    #echo book.currentpage
   
    app |> renderPage((20, 2), (terminalWidth() - 1 - 20, terminalHeight() - 1))

  of appNoBook:
    discard

proc update(app : App, key: char) : App =
  result = app
  case app.state:
  of appTableOfContents:
    case key:
    of 'q': app.running = false
    of 'j': app.cursor.y += 1
    of 'k': app.cursor.y -= 1
    else: discard
  
    if key == 'l':
      app.state = appReadingPage

      # Render to lines
      let page = book.pages[book.currentPage]
      theLines.setLen 0
      renderHtml((20, 2), (terminalWidth() - 1 - 20, terminalHeight() - 1), page, theLines, app.scroll)

      eraseScreen()
      resetAttributes()
  of appReadingPage:
    case key:
    of 'j': app.scroll += 1; eraseScreen()
    of 'k': app.scroll -= 1; eraseScreen()
    of 'q': 
      eraseScreen()
      app.scroll = 0
      app.state = appTableOfContents
    else: discard
  of appNoBook:
    discard

proc run () =
  let app = App(state : appTableOfContents,
                running : true,
                cursor : Coord(x : 0, y : 0),
                offset : Coord(x : 0, y : 2),
                scroll : 0)

  eraseScreen()

  hideCursor()
  enableTrueColors()
  
  resetAttributes()
  discard render app

  while app.running:
    let key = getch()

    discard app |> update(key) |> render

run()
resetAttributes()
