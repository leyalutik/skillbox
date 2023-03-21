#include "test_insert_sort.h"
#include "test_merge_sort.h"
#include "create_test_cases.h"
#include "test_cases.h"
#include "bricks.h"
#include "create_permutations.h"




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
	test_merge_sort_cases();
	//test_insert_sort_cases();
	
	std::cerr << "All tests - OK.\n";
}

void create_test(const std::vector<std::initializer_list<float>> lists)
{
	create_headings();
	
	std::string total_test_function_cpp = "";
	
	test_merge_sort(lists,total_test_function_cpp);
	//test_insert_sort(lists,total_test_function_cpp);

	
	create_endings(total_test_function_cpp);

	
	std::cerr << "Test cases have been created!\n";
}



void create_test_cases(const std::string& testing_function_name, std::vector<std::initializer_list<float>> lists,
std::string& run_test_function)
{
	
	std::ofstream write(constants::test_cases_h, std::ios::app);
	
		write << "void test_" << testing_function_name << "_cases" << "();\n";

	run_test_function += std::string("\nvoid test_") + testing_function_name + std::string("_cases()\n{");
	int32_t number_test = 0;
	for(const auto& list : lists)
	{
		++number_test;
			create_test_cpp(testing_function_name,list, number_test);
	run_test_function += 						"test_" + testing_function_name + std::string("_case_") + std::to_string(number_test) + "();\n";		}
	run_test_function += "}\n";
	
}


void create_test_cpp(
		const std::string& function_name,
		const std::initializer_list<float> list,
		const int32_t number_test_function
		)
{
	permutations(list);
	std::ifstream read(constants::input_values);
	if(!read.is_open())
	{
		std::cerr << "File \"" << constants::input_values << "\" is unable to open.\n";
	}
	std::string result =  "void test_" + function_name + std::string("_case_") + std::to_string(number_test_function) + "()\n";
	result += "{\n";
	result += "std::initializer_list<float> list = {";
bool first = true;
	for(const auto& elem : list)
		{
			if(!first)
			{
				result += ",";
			}
			result += std::to_string(elem);
			first = false;
		}
	result += std::string("};\n");
	result += std::string ("size_t N = list.size();\n");
	result += std::string ("int32_t operations = 0;\n");
	result += std::string ("bool increasing = true;\n");
	result += std::string("float A[N];\n");
	result += std::string("display(list);\n");
		
	std::string line = "";
	int32_t template_number = 0;
	while(std::getline(read,line,'\n') && template_number < 1000)
	{
		std::istringstream is(line);
		int32_t i=0;
		++template_number;
		std::string massive = std::string("//") + std::to_string(template_number); 
		massive += "\ninitialize({";
		bool first = true;
		float elem = 0;
		while(is >> elem)
			{
				++i;
				if(!first)
				{
					massive += ",";
				}
				first = false;
				massive += std::to_string(elem);
			}
		massive += "},N, A);\n ";
		massive += function_name + std::string("(A,N,increasing,operations);\n");
		
		massive += std::string("assert(equal(list,A,N));\n");

		result += massive;
			}
	result += std::string("std::cerr << \"test_" ) + function_name + std::string("_case_");
	result += std::to_string(number_test_function) + std::string("()");
	result +=  std::string("\" << \" - OK.\\n\";\n");
	result += std::string ("}\n");

	read.close();
	
	std::ofstream add_cpp_file(constants::test_cases_cpp,std::ios::app);
	if(!add_cpp_file.is_open())
	{
		std::cerr << "File \"" << constants::test_cases_cpp << "\" is unable to open.\n"; 
	}
	add_cpp_file << result;
	
	std::ofstream add_h_file(constants::test_cases_h,std::ios::app);
	if(!add_h_file.is_open())
	{
		std::cerr << "File \"" << constants::test_cases_h << "\" is unable to open.\n"; 
	}
	std::string test_function_h = std::string ("void test_") + function_name + std::string("_case_") +  std::to_string(number_test_function) + std::string("();\n");
	add_h_file << test_function_h;
}


void 	create_endings(const std::string& text)
{
	std::ofstream write(constants::test_cases_cpp, std::ios::app);
	if(!write.is_open())
	{
		std::cerr << "File \"" << constants::test_cases_cpp << "\" is unable to open.\n"; 
	}
	write << text;
write.close();
	
	write.open(constants::test_cases_h,std::ios::app);
	if(!write.is_open())
	{
		std::cerr << "File \"" << constants::test_cases_h << "\" is unable to open.\n"; 
	}
	write << "#endif";

}
void create_headings()
{
	
	std::ofstream write(constants::test_cases_cpp, std::ios::trunc);
	if(!write.is_open())
	{
		std::cerr << "File \"" << constants::test_cases_cpp << "\" is unable to open.\n"; 
	}
	
	write << "#include\"test_cases.h\"\n";
	write <<"#include<initializer_list>\n";
	write << "#include<iostream>\n";
	write << "#include<cassert>\n";
	write << "#include \"bricks.h\"\n";
	write << "#include \"create_permutations.h\"\n";  

write << "#include \"sort_functions/insert_sort.h\"\n";
write << "#include \"sort_functions/merge_sort.h\"\n";

	 
	write.close();
	write.open(constants::test_cases_h,std::ios::trunc);
	if(!write.is_open())
	{
		std::cerr << "File \"" << constants::test_cases_h << "\" is unable to open.\n"; 
	}
	write << "#ifndef TEST_CASES_H \n #define TEST_CASES_H\n";

	write.close();

}

