#include<iostream>
#include<array>
#include<vector>
#include<map>
#include<set>
#include "bubble_sort.h"
#include "base_functions.h"


void bubble_sort(float* m, const size_t N, const bool increasing, int32_t& operations)
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

	bool has_swapped = true;
for(size_t j=0; j<N; ++j)
	{
		++operations;
	while(has_swapped)
		{
			has_swapped = false;
			for(size_t i=0; i<N-j-1; ++i)
				{	
					++operations;							if(compare(m[i],m[i+1],compare_sign))
					{

						has_swapped = true;
						swap(m[i],m[i+1]);
					}
			}
		}
	}
}
	

