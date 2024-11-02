cmake_minimum_required(VERSION 3.29)
project(Zahlenraten C)

set(CMAKE_C_STANDARD 11)

add_executable(Zahlenraten main.c
        gameFuncs.c
        gameFuncs.h)
