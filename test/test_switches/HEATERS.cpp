#include<iostream>
#include<string>
#include<sstream>
#include "HEATERS.h"

#define COUT(x) \
	std::cout << #x << " = " << x << "\n";
void test_cases()
{
	std::cout << "OK\n";
	{
		HEATERS heater;
		std::cout << "\nNEW CIRCLE\n\n";
		for(int temp = 21; temp <=26; ++temp)
		{
			COUT(temp);
			heater.set(float(temp));
			heater.display();
		}

	}

	{
		HEATERS heater;
		std::cout << "\nNEW CIRCLE\n\n";
		for(int temp = 26; temp >=21; --temp)
		{
			COUT(temp);
			heater.set(float(temp));
			heater.display();
		}

	}
{
		HEATERS heater;
		std::cout << "\nNEW CIRCLE\n\n";
		for(int temp = 22; temp < 26; ++temp)
		{
			COUT(temp);
			heater.set(float(temp));
			heater.display();
		}

	}
{
		HEATERS heater;
		std::cout << "\nNEW CIRCLE\n\n";
		for(int temp = 25; temp >=21; --temp)
		{
			COUT(temp);
			heater.set(float(temp));
			heater.display();
		}

	}
{
		HEATERS heater;
		std::cout << "\nNEW CIRCLE\n\n";
		for(int temp = 24; temp >=21; --temp)
		{
			COUT(temp);
			heater.set(float(temp));
			heater.display();
		}

	}
{
		HEATERS heater;
		std::cout << "\nNEW CIRCLE\n\n";
		for(int temp = 21; temp >=21; --temp)
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

