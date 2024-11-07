cmake_minimum_required(VERSION 3.10)
project(Computer VERSION 1.2 )

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(SOURCE)


set(MY_INCLUDE "${CMAKE_SOURCE_DIR}/INCLUDE")

# filename for class Hard_Drive

set(DEFAULT_SAVE_PATH "${CMAKE_SOURCE_DIR}/data.txt")
add_executable(Computer main.cpp)

target_link_libraries(Computer lib_devices) 
target_include_directories(Computer  PUBLIC ${MY_INCLUDE})





#
# Добавляем Google Test
#add_subdirectory("googletest")  # путь к папке googletest

#include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# Исходники и тесты проекта
#add_executable(my_tests test.cpp surgery.cpp)

# Линкуем Google Test
#target_link_libraries(my_tests gtest gtest_main)

