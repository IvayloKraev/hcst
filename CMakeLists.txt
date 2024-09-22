cmake_minimum_required(VERSION 3.29)
project(hctp LANGUAGES C)

# Specify the C standard
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Define the source and header files
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

add_library(hctp STATIC ${SOURCES})

target_sources(hctp PUBLIC ${HEADERS})

add_library(hctp::headers INTERFACE)

target_include_directories(hctp::headers INTERFACE
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/inc>
        $<INSTALL_INTERFACE:include/hctp>
)

target_link_libraries(hctp PUBLIC hctp::headers)

set_target_properties(hctp PROPERTIES
        PUBLIC_HEADER "${HEADERS}"
)
