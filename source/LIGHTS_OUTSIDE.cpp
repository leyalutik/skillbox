#include<iostream>
#include<string>
#include<sstream>
#include "LIGHTS_OUTSIDE.h"

void test_cases()
{
	{
		MOVEMENT move{true};
		LIGHTS_OUTSIDE lights;
		for(int hour=0; hour<=24;++hour)
		{

			lights.set(hour,move);
			std::cout << "TIME : " << hour << "\n";
			lights.display();

		}
	}
	{
		MOVEMENT move{true};
		LIGHTS_OUTSIDE lights;
		move.yes = false;
		for(int hour=0; hour<=24;++hour)
		{
			lights.set(hour,move);
			std::cout << "TIME : " << hour << "\n";
			std::cout << "MOVE : " << "NO" << "\n";
			lights.display();

		}

	}
{
		MOVEMENT move{true};
		LIGHTS_OUTSIDE lights;
		for(int hour=15; hour<=24;++hour)
		{

			lights.set(hour,move);
			std::cout << "TIME : " << hour << "\n";
			lights.display();

		}
	}
{
		MOVEMENT move{false};
		LIGHTS_OUTSIDE lights;
		for(int hour=13; hour<=14;++hour)
		{

			lights.set(hour,move);
			std::cout << "TIME : " << hour << "\n";
			std::cout << "MOVE : " << "NO" << "\n";
			lights.display();

		}
	}
{
		MOVEMENT move{true};
		LIGHTS_OUTSIDE lights;
		for(int hour=4; hour<=17;++hour)
		{

			lights.set(hour,move);
			std::cout << "TIME : " << hour << "\n";
			lights.display();

		}
	}
}

int main()
{
	test_cases();
	std::cout << "OK\n";

	return 0;
}
