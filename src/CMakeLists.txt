cmake_minimum_required(VERSION 3.10)

#add_compile_definitions(TESTS)
#add_compile_definitions(TEST_FRAMEWORK)

	add_executable(
		House 
main.cpp task1.cpp ${CMAKE_SOURCE_DIR}/include/task1.h)

		target_include_directories(House PUBLIC ${CMAKE_SOURCE_DIR} / include)