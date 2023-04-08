#include "test_cases.h"
#include "bricks.h"
#include "run_test_cases.h"



#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include<initializer_list>
#include<vector>

namespace constants
{
	const std::string input_values = "input_values.txt";

	const std::string test_cases_cpp = "test_cases.cpp";

	const std::string test_cases_h = "test_cases.h";
}

void run_test_cases()
{
	//test_merge_sort_cases();
	//test_selection_sort_cases();
	//test_bubble_sort_cases();
	//test_quick_sort_cases();
	test_heap_sort_cases();
	test_insert_sort_cases();
	
	std::cerr << "All tests - OK.\n";
}

