cmake_minimum_required(VERSION 3.29)
project(hctp LANGUAGES C)

set(CMAKE_C_STANDARD 11)

set(
        HEADERS
        inc/messageModel.h
        inc/control.h
        inc/speed.h
)

set(
        SOURCES
        src/control.c
        src/speed.c
)

include_directories(inc)
include_directories(src)

add_library(hctp STATIC ${HEADERS} ${SOURCES})

target_include_directories(hctp PUBLIC inc)
