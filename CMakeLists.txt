cmake_minimum_required (VERSION 3.8.2)

project(UnitsC++)

SET(CMAKE_INSTALL_PREFIX ${CMAKE_CURRENT_LIST_DIR})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -Wall -Wextra -Wpedantic -O2")
enable_testing()

add_subdirectory (units)
