#include<iostream>
#include<iomanip>
#include<cstdio>
#include<string>
#include<cmath>
#include <cassert>
//void input(int& integer, int& fractional);


void add_delta_to_speed(float& speed, float& delta);
void speedometr();
void input(float& value);



//-----------------------------------------
int main()
{

	speedometr();



	return 0;
}

//-----------------------------------------

void input(float& value)
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
void speedometr()
{

	const int OPERATIONS_COUNT_LIMIT = 100000;
	const float EPS = 0.01;
	float speed = 0.0;
	float delta = 0.0;
	char str[100];
	int i=0; 
	do
	{
		++i;
		
		std::cout << "Speed delta:\n";
		input(delta);
		add_delta_to_speed(speed,delta);

		if(i%10 == 0)
		{
			speed = (std::round(100*speed))/100; // clear from the last digits of the number
		}
		std::cout << "Speed:";
		std::sprintf(str,"%.1f",speed);
		std::cout << str << "\n";
	}	
	while(speed > EPS && i< OPERATIONS_COUNT_LIMIT);
	std::cout << "\n\nThe End.\n";


}

void add_delta_to_speed(float& speed, float& delta)
{

		speed += delta;
		
		if(speed > 150.0)
		{
			speed = 150.0;
		}
		if(speed < 0)
		{
			speed = 0;
		}

}




