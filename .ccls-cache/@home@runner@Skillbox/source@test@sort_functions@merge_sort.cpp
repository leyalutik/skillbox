#include "merge_sort.h"
#include "base_functions.h"

#include<iostream>





void merge(float* left, const size_t Nl, float* right, const size_t Nr, const bool increasing, float* result, int32_t& operations)
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
	if(Nl <0 || Nr <0)
	{
		std::cerr << "Ilegal value of N in function merge().\n";
	}
	size_t i=0;
	size_t l=0;
	size_t r=0;
	while(i < (Nl+Nr))
	{
				if (l<Nl && r < Nr )
				{
					if(compare(*(left+l),*(right+r),compare_sign))
					{
						++operations;
						++operations;
						*(result+i) = *(right+r);
						++r;
						++i;
					}
					else
					{
						++operations;
						*(result+i) = *(left+l);
						++l;
						++i;
					}
				}
		else if(l<Nl)
		{
			++operations;
			*(result+i) = *(left+l);
						++l;
						++i;
		}
		else if(r<Nr)
		{
			++operations;
			*(result+i) = *(right+r);
			++r;
			++i;
		}
	}
}


void merge_sort(float* m , const size_t N,const bool increasing, int32_t& operations)
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
	if(N == 2)
	{
		if(compare(*(m+0),*(m+1),compare_sign))
		{
			++operations;
			float temp = *m;
			*m = *(m+1);
			*(m+1) = temp;
		}
		return;
	}
	size_t mid = N/2;
	float left[mid];
	copy (m,mid,left);
	float right[N-mid];
	copy(m+mid,N-mid,right);
	merge_sort(left,mid,increasing, operations);
	merge_sort(right, N-mid,increasing,operations);
	merge(left,mid,right,N-mid,increasing, m,operations);
	
	return;
}
