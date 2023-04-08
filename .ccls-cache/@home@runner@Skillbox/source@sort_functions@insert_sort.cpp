#include<iostream>
#include<array>
#include<vector>
#include<map>
#include<set>
#include "insert_sort.h"
#include "base_functions.h"

void insert_sort(float* m , const size_t N,const bool increasing, int32_t& operations)
{
	char compare_sign = 0;
	if(increasing)
	{
		compare_sign = '>';
	}
	else
	{
		compare_sign = '<';
	}
	
	if(N<0) 
	{
		std::cout << "Illegal number of elements\n" << "m[0] = " << *m << "\n N = " << N << "\n";
		return;
	}
	if(N == 0 || N == 1)
	{
		return;
	}
	for(size_t i=1; i<N; ++i)
		{
			++operations;
			int32_t current_index = i;
			while(current_index > 0 && compare(m[current_index-1],m[current_index],compare_sign))
				{
					++operations;
					swap(m[current_index-1],m[current_index]);
					--current_index;
				}
		}

}
