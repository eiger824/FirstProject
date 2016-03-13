cmake_minimum_required (VERSION 2.6)
project (FirstProject)

set(CMAKE_C_FLAGS "-Wall -g")

SET(HEADERS
  include/MyObject.hpp
  )

SET(SOURCES
  src/main.cpp
  src/MyObject.cpp
  )

add_executable(main ${SOURCES} ${HEADERS})

