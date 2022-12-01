cmake_minimum_required(VERSION 3.24)
project(testLibrary)

set(CMAKE_CXX_STANDARD 17)

add_executable(testLibrary main.cpp library/testLibrary.cpp library/testLibrary.h)
