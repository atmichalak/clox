cmake_minimum_required(VERSION 3.23)
project(clox C)

set(CMAKE_C_STANDARD 23)

add_executable(clox main.c common.c common.h chunk.c chunk.h memory.c memory.h debug.c debug.h value.c value.h vm.c vm.h)
