#include<iostream>
#include<iomanip>
#include<cstdio>
#include<string>
#include<cmath>
#include <cassert>
#include<sstream>
#include<exception>


void input(long long int& value);
void task2();

//-----------------------------------------
int main()
{

	task2();
	return 0;
}

//-----------------------------------------


void task2()
{
	long long int integer_part;
	long long int fractional_part;

	std::cout << "Input integer part of a number:\n";
	input(integer_part);
	std::cout << "Input fractional  part of a number:\n";
	input(fractional_part);

	std::stringstream stream;
	stream << integer_part << '.' << fractional_part;
	double result = std::stod(stream.str());

	std::cout << "The result" <<   result << ":\n";



}

void input(long long int& value)
{

	std::string line;
	while(true)
	{
		std::getline(std::cin, line, '\n');

		std::stringstream s(line);
		if(s >> value && s.eof())
		{
			break;
		}

		else
		{
			std::cout << "It's incorrect value or number is too big. Please, try again.\n";
		}
	}
	
}
