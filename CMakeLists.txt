 cmake_minimum_required(VERSION 3.10)

project(main) #имя проекта
set(CMAKE_CXX_FLAGS  "-ggdb -Wall   -std=c++20")
##-pthread -static  -static-libgcc -static-libstdc++

##include_directories(									) #расположение  заголовочных файлов (.h .cpp)

add_executable(main main.cpp) ##исполняемый файл со списком исходников (пока один)

##add_subdirectory(source/binary_sequences)
	
##target_link_libraries(sort			binary_sequences_libraries) #Линковка программы с библиотекой

