cmake_minimum_required(VERSION 3.20)

project(BinaryMagicFunction DESCRIPTION "Guess a function's output.")

add_executable(magic magic.cpp)
configure_file(magic.inc ${CMAKE_CURRENT_SOURCE_DIR}/magic.h)
