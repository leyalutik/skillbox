#include<iostream>
#include<string>
#include<sstream>
#include "WATER_PIPE_HEATING.h"

#define COUT(x) \
	std::cout << #x << " = " << x << "\n";
void test_cases()
{
	{
		HEATING_PIPE_WATER pipe_water;

		for(int temp = -1; temp <=6; temp +=1)
		{
			COUT(temp);
			pipe_water.set(float(temp));
			pipe_water.display();
		}

	}

	{

		HEATING_PIPE_WATER pipe_water;
		for(int temp = 6; temp >= -1; --temp)
		{
			COUT(temp);
			pipe_water.set(float(temp));
			pipe_water.display();
		}
	}
	{
		HEATING_PIPE_WATER pipe_water;

		for(int temp = 0; temp <=6; temp +=1)
		{
			COUT(temp);
			pipe_water.set(float(temp));
			pipe_water.display();
		}

	}

	{

		HEATING_PIPE_WATER pipe_water;
		for(int temp = 5; temp >= -1; --temp)
		{
			COUT(temp);
			pipe_water.set(float(temp));
			pipe_water.display();
		}
	}



}

int main()
{

	test_cases();
	return 0;
}

