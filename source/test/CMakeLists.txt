CMAKE_MINIMUM_REQUIRED(VERSION 3.1)



include_directories(sort_functions
											test_sort
									)
#add_subdirectory(sort_functions)


add_library(test_libraries
					bricks.cpp
					test_sort/test_insert_sort.cpp
					test_sort/test_merge_sort.cpp
					test_sort/test_selection_sort.cpp
					test_sort/test_bubble_sort.cpp
					test_sort/test_quick_sort.cpp
					test_sort/test_heap_sort.cpp
					run_test_cases.cpp
					create_test_cases.cpp
					create_permutations.cpp										test_cases.cpp
					sort_functions/insert_sort.cpp 
					sort_functions/merge_sort.cpp
					sort_functions/quick_sort.cpp
					sort_functions/heap_sort.cpp
					sort_functions/base_functions.cpp
					sort_functions/selection_sort.cpp
					sort_functions/bubble_sort.cpp
										
)
