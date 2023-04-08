#include "test_selection_sort.h"
#include "../create_test_cases.h"
#include "../../display/containers.h"

#include "../test_cases.h"

#include<initializer_list>
#include<string>
#include<vector>



void test_selection_sort(const std::vector<std::initializer_list<float>> lists, std::string& total_test_function_cpp)
{
	std::cerr << "Create templates for selection_sort function\n";
	std::string testing_function = "selection_sort";
	create_test_cases(testing_function,lists,total_test_function_cpp);
	}