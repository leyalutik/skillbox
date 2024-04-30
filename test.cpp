#include<iostream>
#include<iomanip>
#include<cstdio>
#include<string>
#include<cmath>
#include <cassert>
//void input(int& integer, int& fractional);


void test_cases();
void add_delta_to_speed(float& speed, float& delta);
void speedometr();
void speedometr(float& speed, float& delta);
void input(float& value);



//-----------------------------------------
int main()
{

	test_cases();




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
		std::sprintf(str,"%.1f",speed);

		std::cout << str << "\n";
	}	
	while(speed > EPS && i< OPERATIONS_COUNT_LIMIT);



}

void speedometr(float& speed, float& delta)
{
	const int OPERATIONS_COUNT_LIMIT = 10000;
	const float EPS = 0.001;
	speed = 0.0;
	char str[100];

	int i=0; 
	do
	{
		++i;
		if(i>9990)
		{
			std::cout << "Speed delta:\n";
			std::cout << delta << "\n";
		}
		add_delta_to_speed(speed,delta);

		if(i%10 == 0)
		{
			speed = (std::round(100*speed))/100;
		}

		if(i>9990)
		{
			std::cout << speed << "\n";

			std::sprintf(str,"%.1f",speed);
			std::cout << str << "\n";
		}
	}	
	while(speed > EPS && i< OPERATIONS_COUNT_LIMIT);
	std::cout << "The End of a program.\n";

}

void add_delta_to_speed(float& speed, float& delta)
{

		speed += delta;
		
	/*	if(speed > 150.0)
		{
			speed = 150.0;
		}
*/
}



void test_cases()
{

	//1   0.1 1000 -> 100

	float result = 0;
	float d=0.01;
		float speed = 0;
		speedometr(speed,d);
	//	assert(speed < (result+0.01) && speed > (result-0.01)); 




}


/*
	int n=0, r=0;
	bool first_change = false;

	while(n > 0  ||  r > 0 || !first_change)
	{

		std::cout << "Input delta:\n";
		int delta_n, delta_r;
		
	
	
			if(
				!input(delta_n,delta_r) 
					|| 
				(n + delta_n >=150 && r + delta_r > 0)
			)
			{
				std::cout << "Input an other delta:\n";
			}
			else
			{
				n += delta_n;
				r += delta_r;
				first_change = true;
			}


		std::cout << "Speed: " << n << "." << r << "\n";

	}

*/




/*
bool  input(int& integer, int& fractional)
{
	integer = 0;
	fractional = 0;

	std::string line;
	std::getline(std::cin,line,'\n');

	std::stringstream s(line);
	
	if(!(s >> integer) // incorrect input 
	{
		return 0;
	}
	
	char point = '.';
	point= s.get();
	if(point != ',' && point != '.' && point != ' ' )
	{
		return 0;
	}

	std::string stuff;
	s >> stuff;
	for(auto i=stuff.begin(); i<stuff.end(); ++i)
	{
		if()
		{
			return 0;
		}
	}
	fractional = stoi(stuff);

	while(fractional > 99)
	{
		fractional /= 10;
	}

	if(fractional >9)
	{
		if(fractional %10 >= 5)
		{
			fractional += 10;
		}
		fractional /= 10;
	}

	if(fractional%10 >= 5)
	{
		
		++fractional;
	}


}*/
