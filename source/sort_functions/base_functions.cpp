#include "base_functions.h"
#include<iostream>

void copy(const float* m, const size_t N, float* result)
{
	for(size_t i=0; i<N; ++i)
		{
			*(result+i) = *(m+i);
		}
}


bool compare(const float elem1, const float  elem2, const char compare_sign)
{
	if(compare_sign == '<')
	{
		return (elem1 < elem2);
	}
	if(compare_sign == '>')
	{
		return (elem1 > elem2);
	}
	std::cout << "Illegal value of compare_sign in function bool compare(const float, const float, const char)\n";
	return 0;
}