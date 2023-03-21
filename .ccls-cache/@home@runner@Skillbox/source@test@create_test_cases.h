#ifndef CREATE_TEST_CASES_H
#define CREATE_TEST_CASES_H

#include<vector>
#include<string>
#include<initializer_list>

void run_test_cases();
void create_test(const std::vector<std::initializer_list<float>> lists);
void create_test_cases(const std::string& testing_function_name, std::vector<std::initializer_list<float>> lists,
std::string& run_test_function);

void create_test_cpp(
		const std::string& function_name,
		const std::initializer_list<float> list,
		const int32_t number_test_function
		);
void create_headings();
void 	create_endings(const std::string& text);



#endif