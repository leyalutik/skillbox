 cmake_minimum_required(VERSION 3.10)

 set(PROJECT_NAME  main);
 project(main) #имя проекта
#set(SOURCE_EXE main.cpp)  #установка переменной со списком исходников

enable_language(C CXX)
set(CMAKE_CXX_FLAGS  "-ggdb -Wall  -std=c++20")

#include_directories() #расположение  заголовочных файлов (.h .cpp)

add_executable(${PROJECT_NAME} main.cpp)

	
