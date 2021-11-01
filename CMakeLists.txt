cmake_minimum_required(VERSION 3.20)
project(learning)

set(CMAKE_C_STANDARD 11)

add_executable(pyramid 1-intro/pyramid.c)
add_executable(fibonacci-recursion 1-intro/fibonacci-recursion.c)
add_executable(download-time 2-stdio-strings/download-time.c)
add_executable(astronomical-units 2-stdio-strings/astronomical-units.c)
add_executable(calculator 3-operators/calculator.c)

target_link_libraries(calculator m)