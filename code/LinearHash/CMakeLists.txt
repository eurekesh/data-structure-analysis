cmake_minimum_required(VERSION 3.16)
project(LinearHash)

set(CMAKE_CXX_STANDARD 11)

add_executable(LinearHash driver.cpp LinearHash.cpp LinearHash.h)