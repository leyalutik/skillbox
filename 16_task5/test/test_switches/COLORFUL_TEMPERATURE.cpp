#include<iostream>
#include<string>
#include<sstream>
#include<tuple>
#include"COLORFUL_TEMPERATURE.h"


#define COUT(x) \
	std::cout << #x << " = " << x << "\n";





void test_cases()
{
{
		std::cout << "\nNEW CIRCLE\n\n";
		std::cout << "LIGHT ON\n";

		COLORFUL_TEMPERATURE color_temp;
		for(int hour=17; hour<=19; ++hour)
		{
			COUT(hour);
			color_temp.set(hour,LIGHT{true});
			color_temp.display();
		}

	}
{
		std::cout << "\nNEW CIRCLE\n\n";
		std::cout << "LIGHT ON\n";

		COLORFUL_TEMPERATURE color_temp;
		for(int hour=19; hour>=17; --hour)
		{
			COUT(hour);
			color_temp.set(hour,LIGHT{true});
			color_temp.display();
		}

	}
	{
		std::cout << "\nNEW CIRCLE\n\n";
		std::cout << "LIGHT OFF\n";

		COLORFUL_TEMPERATURE color_temp;
		for(int hour=0; hour<=24; ++hour)
		{
			COUT(hour);
			color_temp.set(hour,LIGHT{false});
			color_temp.display();
		}

	}
{
		std::cout << "\nNEW CIRCLE\n\n";
		std::cout << "LIGHT ON\n";

		COLORFUL_TEMPERATURE color_temp;
		for(int hour=0; hour<=24; ++hour)
		{
			COUT(hour);
			color_temp.set(hour,LIGHT{true});
			color_temp.display();
		}

	}
{
		std::cout << "\nNEW CIRCLE\n\n";
		std::cout << "LIGHT ON\n";

		COLORFUL_TEMPERATURE color_temp;
		for(int hour=24; hour>=0; --hour)
		{
			COUT(hour);
			color_temp.set(hour,LIGHT{true});
			color_temp.display();
		}

	}
	{
		std::cout << "\nNEW CIRCLE\n\n";
		std::cout << "LIGHT OFF\n";

		COLORFUL_TEMPERATURE color_temp;
		for(int hour=0; hour<=24; ++hour)
		{
			COUT(hour);
			color_temp.set(hour,LIGHT{false});
			color_temp.display();
		}

	}
{
		std::cout << "\nNEW CIRCLE\n\n";
		std::cout << "LIGHT OFF\n";

		COLORFUL_TEMPERATURE color_temp;
		for(int hour=24; hour>=0; --hour)
		{
			COUT(hour);
			color_temp.set(hour,LIGHT{false});
			color_temp.display();
		}

	}

}

int main()
{
	test_cases();
	std::cout << "OK\n";

	return 0;
}
