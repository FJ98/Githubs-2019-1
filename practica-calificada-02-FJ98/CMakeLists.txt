cmake_minimum_required(VERSION 3.14)
project(FELIX)

set(CMAKE_CXX_STANDARD 14)

add_executable(FELIX main.cpp Defense.cpp Attack.cpp Fighter.cpp Arena.cpp Fight.cpp)