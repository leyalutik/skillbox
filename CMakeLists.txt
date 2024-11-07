cmake_minimum_required(VERSION 3.10)
project(Surgery VERSION 1.2 )

# Добавляем Google Test
add_subdirectory("googletest")  # путь к папке googletest

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# Исходники и тесты проекта
add_executable(Surgery main.cpp surgery.cpp)
add_executable(my_tests test.cpp surgery.cpp)

# Линкуем Google Test
target_link_libraries(my_tests gtest gtest_main)

