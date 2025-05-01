cmake_minimum_required(VERSION 3.29)
project(hcst LANGUAGES C)

set(CMAKE_C_STANDARD 11)

set(hcst_INCLUDE_DIR ${CMAKE_CURRENT_LIST_DIR}/inc)
set(hcst_SOURCE_DIR ${CMAKE_CURRENT_LIST_DIR}/src)

set(
        HEADERS
        ${hcst_INCLUDE_DIR}/hcst/types.h
        ${hcst_INCLUDE_DIR}/hcst/message.h
        ${hcst_INCLUDE_DIR}/hcst/state.h
)

set(
        SOURCES
        ${hcst_SOURCE_DIR}/state.c
)

include_directories(${hcst_INCLUDE_DIR})
include_directories(${hcst_SOURCE_DIR})

add_library(hcst STATIC ${HEADERS} ${SOURCES})

target_include_directories(hcst PUBLIC ${hcst_INCLUDE_DIR})
