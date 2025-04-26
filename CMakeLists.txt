cmake_minimum_required(VERSION 3.29)
project(hctp LANGUAGES C)

set(CMAKE_C_STANDARD 11)

set(HCTP_INCLUDE_DIR ${CMAKE_CURRENT_LIST_DIR}/inc)
set(HCTP_SOURCE_DIR ${CMAKE_CURRENT_LIST_DIR}/src)

set(
        HEADERS
        ${HCTP_INCLUDE_DIR}/hctp/messageModel.h
        ${HCTP_INCLUDE_DIR}/hctp/control.h
        ${HCTP_INCLUDE_DIR}/hctp/speed.h
)

set(
        SOURCES
        ${HCTP_SOURCE_DIR}/control.c
        ${HCTP_SOURCE_DIR}/speed.c

)

include_directories(${HCTP_INCLUDE_DIR})
include_directories(${HCTP_SOURCE_DIR})

add_library(hctp STATIC ${HEADERS} ${SOURCES})


target_include_directories(hctp PUBLIC ${HCTP_INCLUDE_DIR})
