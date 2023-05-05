 cmake_minimum_required(VERSION 3.10)

project(main) #имя проекта
set(CMAKE_CXX_FLAGS  "-ggdb -Wall   -std=c++20")
##-pthread -static  -static-libgcc -static-libstdc++


add_executable(main main.cpp) ##исполняемый файл со списком исходников (пока один)


