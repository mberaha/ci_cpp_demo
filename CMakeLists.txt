cmake_minimum_required(VERSION 3.14.0)
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}")
message("CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH}")

project(test_ci)


set (CMAKE_CXX_STANDARD 14)
set (CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS_RELEASE "-O3 -funroll-loops -ftree-vectorize")
set(CMAKE_FIND_PACKAGE_PREFER_CONFIG TRUE)


# Build library object
add_library(test_ci OBJECT)
add_subdirectory(src) 

add_subdirectory(test)
