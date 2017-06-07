cmake_minimum_required(VERSION 3.7)
project(ExceptionsBase)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp GameMap.cpp GameMap.h missing_file_exception.cpp missing_file_exception.h)
add_executable(ExceptionsBase ${SOURCE_FILES})