cmake_minimum_required(VERSION 3.6)
project(laba8)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c90")

set(SOURCE_FILES  laba8.ex.13.c c2.c c3.c c4.c)
add_executable(laba8 ${SOURCE_FILES} laba8.ex.13.c )
target_link_libraries(laba8 m)
target_link_libraries(laba8 -fopenmp)