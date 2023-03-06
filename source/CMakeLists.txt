 cmake_minimum_required(VERSION 3.10)


project(test) #имя проекта
#set(SOURCE_EXE tests.cpp)  #установка переменной со списком исходников

#enable_language(C CXX)
include_directories(
										sort_functions
										display) #расположение  заголовочных файлов (.h .cpp)

add_executable(test tests.cpp) #исполняемый файл со списком исходников (пока один)

add_subdirectory(display)
add_subdirectory(sort_functions) #добавление подпроекта, указывается имя директории
	
target_link_libraries(test
sort_functions_libraries
display_libraries) #Линковка программы с библиотекой