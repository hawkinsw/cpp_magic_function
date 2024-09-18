cmake_minimum_required(VERSION 3.20)

project(BinaryMagicFunction DESCRIPTION "Guess a function's output.")

add_executable(magic magic.cpp)
configure_file(config.inc config.h)
target_include_directories(magic PUBLIC ${CMAKE_CURRENT_BINARY_DIR})
