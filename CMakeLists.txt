cmake_minimum_required(VERSION 3.10)
project(Surgery VERSION 1.2 )

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(SOURCE)


set(MY_INCLUDE ${CMAKE_SOURCE_DIR}/INCLUDE)



add_executable(Surgery main.cpp)

target_link_libraries(Surgery surgery_lib) 
target_include_directories(Surgery PUBLIC ${MY_INCLUDE})







#
# Добавляем Google Test
#add_subdirectory("googletest")  # путь к папке googletest

#include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# Исходники и тесты проекта
#add_executable(my_tests test.cpp surgery.cpp)

# Линкуем Google Test
#target_link_libraries(my_tests gtest gtest_main)

