cmake_minimum_required(VERSION 3.13)
set(PICO_SDK_PATH ../pico-sdk)
# initialize the SDK based on PICO_SDK_PATH
# note: this must happen before project()
include(pico_sdk_import.cmake)

project(program)

# initialize the Raspberry Pi Pico SDK
pico_sdk_init()

#add_subdirectory(./pico-sdk)

add_executable(program ./src/main.c)
target_link_libraries(program pico_stdlib)
pico_add_extra_outputs(program)

