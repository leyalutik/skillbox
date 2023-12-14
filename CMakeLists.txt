 cmake_minimum_required(VERSION 3.10)

 project(main) #имя проекта
#set(SOURCE_EXE main.cpp)  #установка переменной со списком исходников

enable_language(C CXX)
set(CMAKE_CXX_FLAGS  "-ggdb -Wall  -std=c++20")


add_executable(main  main.cpp)


