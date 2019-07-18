cmake_minimum_required(VERSION 3.11)
project(PC4)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(PC4
        catch.hpp
        main.cpp)
