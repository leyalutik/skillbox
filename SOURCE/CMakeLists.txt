cmake_minimum_required(VERSION 3.10)
project(Surgery VERSION 1.2 )

set(CMAKE_CXX_STANDARD 17)

set(MY_INCLUDE ${CMAKE_SOURCE_DIR}/INCLUDE)


add_library(surgery_lib surgery.cpp) 


target_include_directories(surgery_lib PUBLIC ${MY_INCLUDE})
