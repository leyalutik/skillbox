#include "containers.h"
#include <iostream>
void display(float *m, const size_t N, const int32_t length_display)
{
	if(length_display <= 0)
	{
		std::cout << " Illegal value of length_display.\n";
		return;
	}
	
	if(N<0)
	{
		std::cout << "Illegal value of N in function display(float *m, size_t N)\n";
	}
	bool first = true;
	std::cout << "{";
	for(size_t i=0; i<N; i++)
		{
			if(!first)
			{
				std::cout << ", ";
			}
			first = false;
			if(i != 0 && (i%length_display) == 0)
			{
				std::cout << "\n";
			}
			std::cout << *(m+i);
		}
	std::cout << "}";
	std::cout << "\n";
}
void display(int32_t *m, const size_t N, const int32_t length_display)
{
	if(length_display <= 0)
	{
		std::cout << " Illegal value of length_display.\n";
		return;
	}
	
	if(N<0)
	{
		std::cout << "Illegal value of N in function display(int32_t *m, size_t N)\n";
	}
	bool first = true;
	std::cout << "{";
	for(size_t i=0; i<N; i++)
		{
			if(!first)
			{
				std::cout << ", ";
			}
			first = false;
			if(i != 0 && (i%length_display) == 0)

			{
				std::cout << "\n";
			}
			std::cout << *(m+i);
		}
	std::cout << "}";
	std::cout << "\n";
}


void display(std::initializer_list<float> list, const size_t N, const int32_t length_display)
{
	if(length_display <= 0)
	{
		std::cout << " Illegal value of length_display.\n";
		return;
	}
	bool first = true;
	std::cout << "{";
	size_t i=0;
	for(const auto& elem:list)
		{
			if(!first)
			{
				std::cout << ", ";
			}
			first = false;
			if(i != 0 && (i%length_display) == 0)
			{
				std::cout << "\n";
			}
			std::cout << elem;
			++i;
			if(i > N)
			{
				std::cout << "\nInitializer list is out of range (" << N << ").\n";
				return;
			}
		}
	std::cout << "}";
	std::cout << "\n";
	
}