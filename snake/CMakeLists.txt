cmake_minimum_required(VERSION 3.21 ) # "QT files are not compiled")

project(snake VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_PREFIX_PATH "/home/leyalutik/qt/Qt")

find_package(Qt5 COMPONENTS Widgets REQUIRED)

set (SOURCES
	snake.cpp
	)



set(CMAKE_CXX_STANDART C17 ) # "QT files are not compiled"	)
set(CMAKE_CXX_STANDART_REQUIRED ON)






add_executable(snake ${SOURCES} )


target_link_libraries(snake  Qt5::Widgets)

