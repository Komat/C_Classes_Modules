cmake_minimum_required(VERSION 3.5)
project(Modules)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
  main.c
  Modules.h
  Module/delay/mod_delay.c Module/delay/mod_delay.h
  Module/random/mod_random.c Module/random/mod_random.h)
add_executable(Modules ${SOURCE_FILES})
