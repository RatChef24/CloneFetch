cmake_minimum_required(VERSION 3.23)
project(untitled C)

set(CMAKE_C_STANDARD 99)

add_executable(untitled main.c fetch.c fetch.h Colors.h logos.c logos.h display.c display.h)
