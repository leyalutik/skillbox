
#include "test_framework.h"
std::function<int32_t (const int32_t , std::vector<bool>&)> get_int_vector(const std::string& function_name)
{
	if(function_name == "create_number")
	{
	std::function<int32_t (const int32_t , std::vector<bool>&)> f = create_number;
	return f;
	}
	else
	{
		throw std::runtime_error ("No valid function.\n");
	}
}


	std::function<void(const std::string&, const int32_t,std::vector< std::string>&)> get_void_const_string_int_vector_function(const std::string& function_name)
{
	if(function_name == "get_data")
	{
	std::function<void(const std::string&, const int32_t,std::vector< std::string>&)> f = get_data;
	return f;
	}
	else
	{
		throw std::runtime_error ("No valid function.\n");
	}
}
std::function<bool(const std::string&)> get_bool_function(const std::string& function_name)
{
	if(function_name == "is_PNG_filename")
	{
		std::function<bool(const std::string&)> f = is_PNG_filename;
		return f;
	}

	else if(function_name == "is_PNG_filecontent")
	{
		std::function<bool(const std::string&)> f = is_PNG_filecontent;
		return f;
	}


	else
	{
	throw std::runtime_error("RUNTIME ERROR:\n No checking function.\n (Add #include <function_name.h> in test_framework.h\n Add function_name(string) in get_function(string) in test_framework.cpp\n Add argument FUNCTION=function_name in Makefile)");
	}
}



std::function<void(std::string&)> get_function(const std::string function_name)
{
	if(function_name == "insert_sort")
	{
		std::function<void(std::string&)> f = insert_sort;
		return f;
	}

	else
	{
	throw std::runtime_error("RUNTIME ERROR:\n No checking function.\n (Add #include <function_name.h> in test_framework.h\n Add function_name(string) in get_function(string) in test_framework.cpp\n Add argument FUNCTION=function_name in Makefile)");
	}
}

