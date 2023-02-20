 cmake_minimum_required(VERSION 3.10)


project(house) #имя проекта
#set(SOURCE_EXE main.cpp)  #установка переменной со списком исходников

#enable_language(C CXX)
include_directories(task1_directory) #расположение  заголовочных файлов (.h .cpp)

add_executable( task1 task1.cpp) #исполняемый файл со списком исходников (пока один)

add_subdirectory(task1_directory) #добавление подпроекта, указывается имя директории
	
target_link_libraries(task1 task1_source) #Линковка программы с библиотекой