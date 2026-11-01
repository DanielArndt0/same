cmake_minimum_required(VERSION 3.16)

project(same VERSION 1.0.0 LANGUAGES CXX)

add_library(same INTERFACE)
add_library(same::same ALIAS same)

target_compile_features(same INTERFACE cxx_std_11)

target_include_directories(same INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

if(CMAKE_SOURCE_DIR STREQUAL PROJECT_SOURCE_DIR)
    add_executable(same_basic examples/basic.cpp)
    target_link_libraries(same_basic PRIVATE same::same)
endif()
