#include<iostream>
#include<string>
#include<sstream>
#include "CONDITIONER.h"

#define COUT(x) \
	std::cout << #x << " = " << x << "\n";
void test_cases()
{
	std::cout << "OK\n";
	{
		CONDITIONER heater;
		std::cout << "\nNEW CIRCLE\n\n";
		for(int temp = 24; temp <=31; ++temp)
		{
			COUT(temp);
			heater.set(float(temp));
			heater.display();
		}

	}

	{
		CONDITIONER heater;
		std::cout << "\nNEW CIRCLE\n\n";
		for(int temp = 31; temp >=24; --temp)
		{
			COUT(temp);
			heater.set(float(temp));
			heater.display();
		}

	}
{
		CONDITIONER heater;
		std::cout << "\nNEW CIRCLE\n\n";
		for(int temp = 25; temp < 31 ; ++temp)
		{
			COUT(temp);
			heater.set(float(temp));
			heater.display();
		}

	}
{
		CONDITIONER heater;
		std::cout << "\nNEW CIRCLE\n\n";
		for(int temp = 30; temp >=25; --temp)
		{
			COUT(temp);
			heater.set(float(temp));
			heater.display();
		}

	}
{
		CONDITIONER heater;
		std::cout << "\nNEW CIRCLE\n\n";
		for(int temp = 29; temp >=24; --temp)
		{
			COUT(temp);
			heater.set(float(temp));
			heater.display();
		}

	}
{
		CONDITIONER heater;
		std::cout << "\nNEW CIRCLE\n\n";
		for(int temp = 29; temp >=26; --temp)
		{
			COUT(temp);
			heater.set(float(temp));
			heater.display();
		}

	}
}

int main()
{

	test_cases();
	return 0;
}

