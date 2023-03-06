 cmake_minimum_required(VERSION 3.10)

project(sort) #имя проекта
#set(SOURCE_EXE main.cpp)  #установка переменной со списком исходников
#enable_language(C CXX)
set(CMAKE_CXX_FLAGS  "-ggdb -Wall -static -static-libgcc -static-libstdc++ -pthread -std=c++20")
# 

include_directories(
										source/sort_functions
										source/display) #расположение  заголовочных файлов (.h .cpp)

add_executable(sort main.cpp) #исполняемый файл со списком исходников (пока один)

add_subdirectory(source/display)
add_subdirectory(source/sort_functions) #добавление подпроекта, указывается имя директории
	
target_link_libraries(sort
sort_functions_libraries
display_libraries) #Линковка программы с библиотекой