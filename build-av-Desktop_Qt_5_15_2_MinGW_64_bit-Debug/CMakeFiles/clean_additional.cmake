# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\av_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\av_autogen.dir\\ParseCache.txt"
  "av_autogen"
  )
endif()
