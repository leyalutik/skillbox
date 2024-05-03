#include<iostream>
#include<iomanip>
#include<cstdio>
#include<string>
#include<cmath>
#include <cassert>
#include<sstream>


void input(double& value);


//-----------------------------------------
int main()
{


	
	double integer_part;
	double fractional_part;

	std::cout << "Input integer part of a number:\n";
	input(integer_part);
	std::cout << "Input fractional  part of a number:\n";
	input(fractional_part);

	std::stringstream stream;
	stream << integer_part << '.' << fractional_part;
	double result = std::stod(stream.str());

	std::cout <<  result << ":\n";

	return 0;
}

//-----------------------------------------
void input(double& value)
{

	std::cin >> value;

	while(!std::cin)
	{

		if(std::cin.bad()) //stream is corrupted	
		{

			std::cout << "The stream cin was corrupted.\n";
			std::getchar();
			exit(1);

		}

		if(std::cin.eof())
		{

			std::cout << "The input stream is overloaded.\n";
			std::getchar();
			exit(1);
		}
		if(std::cin.fail())
		{

			std::cout << "Incorrect value. Please, try again.\n";
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			std::cin >> value;
		}

	}
}
