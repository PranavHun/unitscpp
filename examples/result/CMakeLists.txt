cmake_minimum_required (VERSION 3.8.2)

project (result)

add_executable(example_PHresult example_result.cpp)

install (TARGETS example_PHresult DESTINATION bin/result)

