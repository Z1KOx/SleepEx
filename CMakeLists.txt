cmake_minimum_required(VERSION 3.8)
project(SleepEx)

enable_language(C ASM_MASM)
set(CMAKE_CXX_STANDARD 20)

set(SOURCE_FILES
    src/main.cpp
    src/syscall.asm
)

add_executable(SleepEx ${SOURCE_FILES})