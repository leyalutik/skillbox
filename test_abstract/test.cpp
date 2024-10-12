
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
		std::function<void(std::string&)> f =  get_function(std::string(argv[1]));
		//std::function<bool(const std::string&)> f = get_bool_function(std::string(argv[1]));

		while(std::getline(ifs,line, '\n'))
		{
			display(line);
			std::cout << "\n";
			f(line);
			std::vector<int32_t> v;
			modify_string_to_vec(line,v);
			std::cout << " -----RESULT_____";
			std::cout << "USER AMOUNT : " << v[6] << "\n";
			std::cout << "100 : " << v[0]<< "\n";
			std::cout << "200 : " << v[1]<< "\n";
			std::cout << "500 : " << v[2]<< "\n";
			std::cout << "1000 : " << v[3]<< "\n";
			std::cout << "2000 : " << v[4]<< "\n";
			std::cout << "5000 : " << v[5]<< "\n";

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
