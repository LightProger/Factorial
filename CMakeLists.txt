cmake_minimum_required(VERSION 3.8)
project(Factorial)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES fac.c)
add_executable(Factorial ${SOURCE_FILES})