cmake_minimum_required(VERSION 2.8)
project(toybengine)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Parser.cpp Parser.h)
add_executable(toybengine ${SOURCE_FILES})
