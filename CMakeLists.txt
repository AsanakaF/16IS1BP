cmake_minimum_required(VERSION 3.6)
project(untitled1)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c90 -Wall -pedantic")

set(SOURCE_FILES laba.ex.13.c)
add_executable(untitled1 ${SOURCE_FILES} laba.ex.13.c )
target_link_libraries(untitled1 m)