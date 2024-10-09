


#ifndef FRAMEWORK_TEST_H

#define FRAMEWORK_TEST_H 1

#include <iostream>
#include <vector>
#include<string>
#include<functional>
#include<exception>

#include "functions.h"
std::function<int32_t (const int32_t , std::vector<bool>&)> get_int_vector(const std::string& function_name);

std::function<void(const std::string&, const int32_t,std::vector< std::string>&)> get_void_const_string_int_vector_function(const std::string& function_name);

std::function<bool(const std::string&)> get_bool_function(const std::string& function_name);



std::function<void(std::string&)> get_function( const  std::string function_name);


template<class T>
void display(const T& v)
{
	bool first = true;
	for(const auto& element:v)
	{
		if(!first)
		{
			std::cout << "," ;
		}
		else
		{
			first = false;
		}
			std::cout << element;
	}

}

#endif
