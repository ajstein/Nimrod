#
#
#            Nimrod Tester
#        (c) Copyright 2014 Andreas Rumpf
#
#    See the file "copying.txt", included in this
#    distribution, for details about the copyright.
#

## Include for the tester that contains test suites that test special features
## of the compiler.

# included from tester.nim
# ---------------- ROD file tests ---------------------------------------------

const
  rodfilesDir = "tests/rodfiles"
  nimcacheDir = rodfilesDir / "nimcache"

proc delNimCache() =
  try:
    removeDir(nimcacheDir)
  except EOS:
    echo "[Warning] could not delete: ", nimcacheDir
    
proc runRodFiles(r: var TResults, cat: Category, options: string) =
  template test(filename: expr): stmt =
    testSpec r, makeTest(rodfilesDir / filename, options, cat, actionRun)
  
  delNimCache()
  
  # test basic recompilation scheme:
  test "hallo"
  test "hallo"
  # test incremental type information:
  test "hallo2"
  delNimCache()
  
  # test type converters:
  test "aconv"
  test "bconv"
  delNimCache()
  
  # test G, A, B example from the documentation; test init sections:
  test "deada"
  test "deada2"
  delNimCache()
  
  # test method generation:
  test "bmethods"
  test "bmethods2"
  delNimCache()
  
  # test generics:
  test "tgeneric1"
  test "tgeneric2"
  delNimCache()

proc compileRodFiles(r: var TResults, cat: Category, options: string) =
  template test(filename: expr): stmt =
    testSpec r, makeTest(rodfilesDir / filename, options, cat)

  delNimCache()
  # test DLL interfacing:
  test "gtkex1"
  test "gtkex2"
  delNimCache()

# --------------------- DLL generation tests ----------------------------------

proc safeCopyFile(src, dest: string) =
  try:
    copyFile(src, dest)
  except EOS:
    echo "[Warning] could not copy: ", src, " to ", dest

proc runBasicDLLTest(c, r: var TResults, cat: Category, options: string) =
  testSpec c, makeTest("lib/nimrtl.nim",
    options & " --app:lib -d:createNimRtl", cat)
  testSpec c, makeTest("tests/dll/server.nim",
    options & " --app:lib -d:useNimRtl", cat)
  
  when defined(Windows): 
    # windows looks in the dir of the exe (yay!):
    var nimrtlDll = DynlibFormat % "nimrtl"
    safeCopyFile("lib" / nimrtlDll, "tests/dll" / nimrtlDll)
  else:
    # posix relies on crappy LD_LIBRARY_PATH (ugh!):
    var libpath = getenv"LD_LIBRARY_PATH".string
    if peg"\i '/nimrod' (!'/')* '/lib'" notin libpath:
      echo "[Warning] insufficient LD_LIBRARY_PATH"
    var serverDll = DynlibFormat % "server"
    safeCopyFile("tests/dll" / serverDll, "lib" / serverDll)
  
  testSpec r, makeTest("tests/dll/client.nim", options & " -d:useNimRtl", 
                       cat, actionRun)

proc dllTests(r: var TResults, cat: Category, options: string) =
  # dummy compile result:
  var c = initResults()
  
  runBasicDLLTest c, r, cat, options
  runBasicDLLTest c, r, cat, options & " -d:release"
  runBasicDLLTest c, r, cat, options & " --gc:boehm"
  runBasicDLLTest c, r, cat, options & " -d:release --gc:boehm"

# ------------------------------ GC tests -------------------------------------

proc gcTests(r: var TResults, cat: Category, options: string) =
  template test(filename: expr): stmt =
    testSpec r, makeTest("tests/gc" / filename, options, cat, actionRun)
    testSpec r, makeTest("tests/gc" / filename, options &
                  " -d:release", cat, actionRun)
    testSpec r, makeTest("tests/gc" / filename, options &
                  " -d:release -d:useRealtimeGC", cat, actionRun)
    testSpec r, makeTest("tests/gc" / filename, options &
                  " --gc:markAndSweep", cat, actionRun)
    testSpec r, makeTest("tests/gc" / filename, options &
                  " -d:release --gc:markAndSweep", cat, actionRun)
  
  test "gcbench"
  test "gcleak"
  test "gcleak2"
  test "gctest"
  test "gcleak3"
  test "weakrefs"
  test "cycleleak"
  test "closureleak"

# ------------------------- threading tests -----------------------------------

proc threadTests(r: var TResults, cat: Category, options: string) =
  template test(filename: expr): stmt =
    testSpec r, makeTest("tests/threads" / filename, options, cat, actionRun)
    testSpec r, makeTest("tests/threads" / filename, options &
      " -d:release", cat, actionRun)
    testSpec r, makeTest("tests/threads" / filename, options &
      " --tlsEmulation:on", cat, actionRun)
  
  test "tactors"
  test "tactors2"
  test "threadex"
  # deactivated because output capturing still causes problems sometimes:
  #test "trecursive_actor"
  #test "threadring"
  #test "tthreadanalysis"
  #test "tthreadsort"
  test "tthreadanalysis2"
  test "tthreadanalysis3"
  test "tthreadheapviolation1"

# ------------------------- IO tests ------------------------------------------

proc ioTests(r: var TResults, cat: Category, options: string) =
  # We need readall_echo to be compiled for this test to run.
  # dummy compile result:
  var c = initResults()
  testSpec c, makeTest("tests/system/helpers/readall_echo", options, cat)
  testSpec r, makeTest("tests/system/io", options, cat)

# ------------------------- debugger tests ------------------------------------

proc debuggerTests(r: var TResults, cat: Category, options: string) =
  testNoSpec r, makeTest("tools/nimgrep", options & " --debugger:on", cat)

# ------------------------- JS tests ------------------------------------------

proc jsTests(r: var TResults, cat: Category, options: string) =
  template test(filename: expr): stmt =
    testSpec r, makeTest(filename, options & " -d:nodejs", cat,
                         actionRun, targetJS)
    testSpec r, makeTest(filename, options & " -d:nodejs -d:release", cat,
                         actionRun, targetJS)
    
  for t in os.walkFiles("tests/js/t*.nim"):
    test(t)
  for testfile in ["texceptions", "texcpt1", "texcsub", "tfinally",
                   "tfinally2", "tfinally3", "tactiontable", "tmultim1",
                   "tmultim3", "tmultim4"]:
    test "tests/run/" & testfile & ".nim"

# ------------------------- manyloc -------------------------------------------
#proc runSpecialTests(r: var TResults, options: string) =
#  for t in ["lib/packages/docutils/highlite"]:
#    testSpec(r, t, options)

proc findMainFile(dir: string): string =
  # finds the file belonging to ".nimrod.cfg"; if there is no such file
  # it returns the some ".nim" file if there is only one: 
  const cfgExt = ".nimrod.cfg"
  result = ""
  var nimFiles = 0
  for kind, file in os.walkDir(dir):
    if kind == pcFile:
      if file.endsWith(cfgExt): return file[.. -(cfgExt.len+1)] & ".nim"
      elif file.endsWith(".nim"):
        if result.len == 0: result = file
        inc nimFiles
  if nimFiles != 1: result.setlen(0)

proc manyLoc(r: var TResults, cat: Category, options: string) =
  for kind, dir in os.walkDir("tests/manyloc"):
    if kind == pcDir:
      let mainfile = findMainFile(dir)
      if mainfile != ".nim":
        testNoSpec r, makeTest(mainfile, options, cat)

proc compileExample(r: var TResults, pattern, options: string, cat: Category) =
  for test in os.walkFiles(pattern):
    testNoSpec r, makeTest(test, options, cat)

proc testStdlib(r: var TResults, pattern, options: string, cat: Category) =
  for test in os.walkFiles(pattern):
    let contents = readFile(test).string
    if contents.contains("when isMainModule"):
      testSpec r, makeTest(test, options, cat, actionRun)
    else:
      testNoSpec r, makeTest(test, options, cat, actionCompile)

# ----------------------------------------------------------------------------

const AdditionalCategories = ["debugger", "tools", "examples", "stdlib"]

proc `&.?`(a, b: string): string =
  # candidate for the stdlib?
  result = if b.startswith(a): b else: a & b

proc `&?.`(a, b: string): string =
  # candidate for the stdlib?
  result = if a.endswith(b): a else: a & b

proc processCategory(r: var TResults, cat: Category, options: string) =
  case cat.string.normalize
  of "rodfiles":
    compileRodFiles(r, cat, options)
    runRodFiles(r, cat, options)
  of "js":
    # XXX JS doesn't need to be special anymore
    jsTests(r, cat, options)
  of "dll":
    dllTests(r, cat, options)
  of "gc":
    gcTests(r, cat, options)
  of "debugger":
    debuggerTests(r, cat, options)
  of "tools":
    testSpec r, makeTest("compiler/c2nim/c2nim.nim", options, cat)
    testSpec r, makeTest("compiler/pas2nim/pas2nim.nim", options, cat)
  of "manyloc":
    manyLoc r, cat, options
  of "threads":
    threadTests r, cat, options & " --threads:on"
  of "io":
    ioTests r, cat, options
  of "stdlib":
    testStdlib(r, "lib/pure/*.nim", options, cat)
    testStdlib(r, "lib/packages/docutils/highlite", options, cat)
  of "examples":
    compileExample(r, "examples/*.nim", options, cat)
    compileExample(r, "examples/gtk/*.nim", options, cat)
    compileExample(r, "examples/talk/*.nim", options, cat)
  else:
    for name in os.walkFiles("tests" & DirSep &.? cat.string / "t*.nim"):
      testSpec r, makeTest(name, options, cat)
