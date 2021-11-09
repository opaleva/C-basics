cmake_minimum_required(VERSION 3.20)
project(C-basics)

set(CMAKE_C_STANDARD 11)


add_executable(fibonacci-recursion fibonacci-recursion.c)
add_executable(download-time download-time.c)
add_executable(calculator calculator.c)
add_executable(temperatures temperatures.c)
add_executable(pyramid pyramid.c)
add_executable(main sorting/main.c sorting/utils/sorting.h sorting/utils/sorting.c)

target_link_libraries(calculator m)
