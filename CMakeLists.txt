cmake_minimum_required(VERSION 2.8.9)
project(MergeSort)

include_directories(include)

set(SOURCES src/Archivo.cpp src/main.cpp src/MergeSort.cpp)

add_executable(Cola ${SOURCES})
