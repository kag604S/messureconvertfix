cmake_minimum_required(VERSION 3.28)
project(messuree)

set(CMAKE_CXX_STANDARD 17)

add_executable(messuree main.cpp
        unitconverter.cpp
        unitconverter.h)
