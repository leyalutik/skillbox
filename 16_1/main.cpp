#include<iostream>
#include<iomanip>
#include<cstdio>
#include<string>
#include<cmath>
#include<sstream>
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




