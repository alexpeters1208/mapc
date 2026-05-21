cmake_minimum_required(VERSION 4.2)
project(mapc C)

set(CMAKE_C_STANDARD 11)

add_executable(mapc main.c
        chapter2/p1.c
        chapter3/t1.c chapter3/t2.c chapter3/t3.c
)
