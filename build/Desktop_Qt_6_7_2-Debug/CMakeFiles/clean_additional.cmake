# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/NTC_ddos_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/NTC_ddos_autogen.dir/ParseCache.txt"
  "NTC_ddos_autogen"
  )
endif()
