#include<iostream>
#include<vector>
#include<cstdlib>
#include<sstream>
#include<string>
#include<cmath>

void input(int& integer, int& fractional);


int main()
{


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



	return 0;
}






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


}
