cmake_minimum_required(VERSION 2.8)
project(toybengine)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_EXE_LINKER_FLAGS "-ldl")

FIND_PACKAGE(FLTK REQUIRED)
include_directories("${CMAKE_SOURCE_DIR}")
set(SOURCE_FILES main.cpp css_parser.cpp css_parser.h)
add_executable(toybengine ${SOURCE_FILES})
TARGET_LINK_LIBRARIES(toybengine ${FLTK_LIBRARIES})