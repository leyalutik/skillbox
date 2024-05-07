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

	try
	{
		task2();
	}
	catch(std::exception& e)
	{
		std::cout << "Number is too big. Try again.\n";
		task2();
	}
	catch(std::invalid_argument& e)
	{
		std::cout << "Inctorrect number. Try again.\n";
		task2();
	}
	
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


	while(!(std::cin >> value))
	{

		if(std::cin.bad()) //stream is corrupted	
		{

			std::cout << "The stream cin was corrupted.\n";
			std::getchar();
			exit(1);

		}

		else if(std::cin.eof())
		{

			std::cout << "The input stream is overloaded.\n";
			std::getchar();
			exit(1);
		}
		else if(std::cin.fail())
		{

			std::cout << "Incorrect value. Please, try again.\n";
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			
		}

	}
}
