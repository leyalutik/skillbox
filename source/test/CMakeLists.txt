CMAKE_MINIMUM_REQUIRED(VERSION 3.1)



include_directories(sort_functions)
#add_subdirectory(sort_functions)


add_library(test_libraries
							bricks.cpp
							test_insert_sort.cpp
							test_merge_sort.cpp
							create_test_cases.cpp
							create_permutations.cpp										test_cases.cpp
						sort_functions/insert_sort.cpp 
					sort_functions/merge_sort.cpp
					sort_functions/base_functions.cpp
					)
