# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "BibleAppGui_autogen"
  "CMakeFiles\\BibleAppGui_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\BibleAppGui_autogen.dir\\ParseCache.txt"
  )
endif()
