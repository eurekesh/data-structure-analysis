cmake_minimum_required(VERSION 3.16)
project(ChainHash)

set(CMAKE_CXX_STANDARD 11)

include_directories(.)

add_executable(ChainHash
        driver.cpp
        hash.cpp
        hash.hpp)
