
#define TEST_ABSTRACT

#include "test_framework.h"

#include <fstream>
#include<iostream>
#include<string>
#include<exception>

int main(int32_t argc, char* argv[])
{
	try
	{
		if(argc < 3)
		{
			std::cout << "INCORRECT COMMAND.\n";
			std::cout << "TEMPLATE:\n command <function_name> <input_file_name.txt> \n";
			std::getchar();
			return 1;
		}



		std::ifstream ifs(argv[2], std::ios::in);
		if(!ifs.is_open())
		{
			std::cout << "Input file " << argv[1] << " not found.\n";
			std::getchar();
			return 1;
		}

		std::string line;
		//std::function<void(std::string&)> f =  get_function(std::string(argv[1]));
		std::function<bool(const std::string&)> f = get_bool_function(std::string(argv[1]));

		while(std::getline(ifs,line, '\n'))
		{
			display(line);
			std::cout << "\n";
			std::cout << (f(line) ? "YES" : "NO" )<< "\n";
			std::cout << "\n----------------\n";
			line.clear();



		}

	}
	catch(std::runtime_error& e)
	{


		std::cout << e.what() << " \n";
	}
	return 0;

}
