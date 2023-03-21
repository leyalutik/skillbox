 cmake_minimum_required(VERSION 3.10)

project(sort) #имя проекта
project(test)
set(CMAKE_CXX_FLAGS  "-ggdb -Wall   -std=c++20")
##-pthread -static  -static-libgcc -static-libstdc++

include_directories(
										source/binary_sequences
										source/sort_functions
										source/display
										source/input
										source/test
								source/test/sort_fucntions
										) #расположение  заголовочных файлов (.h .cpp)

add_executable(sort main.cpp) ##исполняемый файл со списком исходников (пока один)
add_executable(test test.cpp)

add_subdirectory(source/binary_sequences
										)
add_subdirectory(source/display)
add_subdirectory(source/sort_functions)
add_subdirectory(source/input)
add_subdirectory(source/test)
##добавление подпроекта, указывается имя директории
	
target_link_libraries(sort
				binary_sequences_libraries
				sort_functions_libraries
				display_libraries
				input_libraries) #Линковка программы с библиотекой
target_link_libraries(test test_libraries)
