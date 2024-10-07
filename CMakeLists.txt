#
# gp-pico-blink
# Copyright © 2024, Greg PFISTER. Fair Core License, Version 1.0, MIT Future License
#

cmake_minimum_required(VERSION 3.13)

include($ENV{PICO_SDK_PATH}/external/pico_sdk_import.cmake)

project(gp-pico-blink C CXX ASM)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

pico_sdk_init()

add_executable(blink
        src/main.c
        src/led.c
)

include_directories(includes)

pico_enable_stdio_usb(blink 0)
pico_enable_stdio_uart(blink 1)

pico_add_extra_outputs(blink)

target_link_libraries(blink pico_stdlib)