#include "bricks.h"
#include <iostream>
#include <initializer_list>

void initialize(const float* m, const int32_t N, float* result)
{
	for(int32_t i=0; i<N; ++i)
		{
			*(result+i) = *(m+i);
		}
}


void initialize(const std::initializer_list<float> list, const size_t N, float* A)
{//insert content of list to massive A
	if(N != list.size())
	{
		std::cerr << "The sizes of massive example and in the task are not equal.\n";
	}
	size_t i = 0;
	for(const auto& elem:list)
	{
			A[i] = elem;
			++i;
	}
}

bool equal (const float* M1, const float* M2, const size_t N)
{
	if(N < 0)
	{
		std::cout << "Illegal value of N in function equal(float*,float*,size_t)\n";
		return false;
	}
	for(size_t i=0; i<N; ++i)
		{
			if(*(M1+i) != *(M2+i))
			{
				return false;
			}
		}
	return true;
}
bool equal (const std::initializer_list<float> list, const float* M, const size_t N)
{
	if(N < 0)
	{
		std::cout << "Illegal value of N in function equal(initializer_list,float*,size_t).\n";
		return false;
	}
	if(N != list.size())
	{
		std::cout << "Size of initializer list isn't equal to N in fucntion equal.\n";
	}
	size_t i=0;
	for(const auto& elem:list)
		{
			if(elem != *(M+i))
			{
				return false;
			}
			++i;
		}
	return true;
}

void display(const float* m, const size_t N)
{
	for(size_t i=0; i< N; ++i)
		{
			std::cout << *(m+i) << " ";
		}
	std::cout << "\n";
}
void display(
	const std::initializer_list<float> list)
{
	for(const auto& elem:list)
		{
			std::cout << elem << " ";
		}
	std::cout << "\n";
}
