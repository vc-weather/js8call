# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles/js8call_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/js8call_autogen.dir/ParseCache.txt"
  "CMakeFiles/wsjt_qt_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/wsjt_qt_autogen.dir/ParseCache.txt"
  "CMakeFiles/wsjt_qtmm_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/wsjt_qtmm_autogen.dir/ParseCache.txt"
  "js8call_autogen"
  "wsjt_qt_autogen"
  "wsjt_qtmm_autogen"
  )
endif()
