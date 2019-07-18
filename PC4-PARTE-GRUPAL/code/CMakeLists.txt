cmake_minimum_required(VERSION 3.13.4)
project(code)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS -pthread)

add_executable(code main.cpp)