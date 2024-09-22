add_library(hctp INTERFACE)

target_sources(hctp INTERFACE
        src/speed.c
        src/control.c
)

target_include_directories(hctp INTERFACE inc)