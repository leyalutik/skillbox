#include<iostream>
#include<array>
#include<vector>
#include<map>
#include<set>
#include "selection_sort.h"
#include "base_functions.h"


void selection_sort(float* m, const size_t N, const bool increasing, int32_t& operations)
{//sort massive m with N elements by selection_sort
//	Firstly the biggest element go to the end, then the second biggest element go to the place before end and so on.
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
	
	for(size_t i=0; i<N; ++i)
		{
			++operations;
			size_t index_max = 0;
			for(size_t j=1; j<N-i; ++j)
				{
				    ++operations;	if(compare(m[j],m[index_max],compare_sign))
					{
						index_max = j;
					}
						
				}
			++operations;
			swap(m[index_max],m[N-1-i]);
		}


	
}
