# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appQEnergyMonitor_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appQEnergyMonitor_autogen.dir\\ParseCache.txt"
  "appQEnergyMonitor_autogen"
  )
endif()
