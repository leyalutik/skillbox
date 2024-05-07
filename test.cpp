#include<iostream>
#include<iomanip>
#include<cstdio>
#include<string>
#include<cmath>
#include<sstream>
#include <cassert>
//void input(int& integer, int& fractional);

template<typename Value_type , typename Stream_type>
bool input(Value_type& value, Stream_type& s )
{
	
	if(s >> value)
	{
		return true;
	}
	return false;

}
void test_cases();
void evaluate();
void task3();

bool parse_expression(const std::string& line, double& x1, char& operation, double& x2);

//-----------------------------------------
int main()
{

	test_cases();
	task3();



	return 0;
}

//-----------------------------------------

bool parse_expression(const std::string& line, double& x1, char& operation, double& x2)
{

	std::stringstream s(line);


	if(input(x1,s) && input(operation,s) && input(x2,s) && s.eof())
	{
		return true;
	}

	return false;

}
void task3()
{

		double x1,x2;
		char operation;

	while(true)
	{
		std::cout << "Input expression for evaluating:\n";

		std::string line;
		std::getline(std::cin, line, '\n');

		if(parse_expression(line,x1,operation,x2))
		{
			if( operation == '-' 
				|| operation == '+'
				|| operation == '*'
				|| operation == '/'	
			  )
			{
				break;
			}

			std::cout << "Incorrect symbol of operation.";
		}
		std::cout << "Incorrect expression. Try again.\n";
	}


	double result = 0.0;

	switch(operation)
	{
		case '+' : result = x1+x2;
			   break;
		case '-' : result = x1-x2;
			   break;
		case '*' : result = x1*x2;
			   break;
		case '/' : result = x1/x2;
			   break;
		default : std::cout << "Unknown symbol of operation.\n";
	}
	std::cout << result << "\n";

}




void test_cases()
{

/*
 *
 * Пробелы
 * 
 * Символы в начале, символы в середине, символы в конце
 * СЛишком длинные числа
 * После второго числа не конец
 *
 *
 *
 *
 */


}


