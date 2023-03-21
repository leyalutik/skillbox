#include "test_merge_sort.h"
#include "create_test_cases.h"
#include "../display/containers.h"

#include<initializer_list>
#include<string>
#include<vector>



void test_merge_sort(const std::vector<std::initializer_list<float>> lists, std::string& total_test_function_cpp)
{
	std::cerr << "Create templates for merge_sort function\n";
	std::string testing_function = "merge_sort";
	create_test_cases(testing_function,lists,total_test_function_cpp);
	}