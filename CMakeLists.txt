cmake_minimum_required(VERSION 3.6)
project(C__Primer)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES reverse_integer.cpp)
add_executable(C__Primer ${SOURCE_FILES})