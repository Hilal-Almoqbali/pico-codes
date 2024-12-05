cmake_minimum_required(VERSION 3.13)
set(PICO_SDK_PATH ../pico-sdk)
set(PICO_CXX_ENABLE_EXCEPTIONS=1)
# initialize the SDK based on PICO_SDK_PATH
# note: this must happen before project()
include(pico_sdk_import.cmake)
#set(CMAKE_CXX_FLAGS "-O3")
#set(CMAKE_C_FLAGS "-O3")
project(blink)

# initialize the Raspberry Pi Pico SDK
pico_sdk_init()

#add_subdirectory(./pico-sdk)

add_executable(blink ./src/blink.cpp)
target_link_libraries(blink pico_stdlib)
pico_add_extra_outputs(blink)

add_executable(c_blink ./src/blink.c)
target_link_libraries(c_blink pico_stdlib)
pico_add_extra_outputs(c_blink)
