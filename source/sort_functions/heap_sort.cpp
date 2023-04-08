#include "heap_sort.h"


#include "base_functions.h"

#include<iostream>





void heap_sort(float* A, const size_t N, const bool increasing, int32_t& operations)
{//divide and conquer

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
		std::cout << "Illegal number of elements\n" << "m[0] = " << *A << "\n N = " << N << "\n";
		return;
	}
	
	if(N == 0 || N == 1)
	{
		return;
	}

	heapify(A, N, increasing,operations);
	swap(A[N-1],A[0]);
	++operations;
	heap_sort(A,N-1,increasing,operations);
}
	
void heapify(float* A, const size_t N, bool increasing, int32_t& operations)
{
	char compare_sign = 0;
	if(!increasing)
	{
		compare_sign = '>';
	}
	else
	{
		compare_sign = '<';
	}
	
	if(N<0) 
	{
		std::cout << "Illegal number of elements\n" << "m[0] = " << *A << "\n N = " << N << "\n";
		return;
	}
	
	if(N == 0 || N == 1)
	{
		return;
	}
	if(N == 2)
	{
		++operations;
		if(compare(A[0],A[1],compare_sign))
		{
				++operations;
				swap(A[0],A[1]);
		}
			return;
	}
	for(size_t i=N/2; i<N; ++i)
		{
			++operations;
			int32_t p = N-i-1;
			if((2*p+1) < N && (2*p+2) < N)
			{
				size_t index_max = 2*p+1;
				if(compare(A[2*p+1],A[2*p+2],compare_sign))
				{
					index_max = 2*p+2;
				}
					
				if(compare(A[p],A[index_max],compare_sign))
				{
					swap(A[index_max],A[p]);
					heapify((A+p+1),N-p-1,increasing,operations);
				}
			}
			else if((2*p+1) < N)			
			{
				size_t index_max = 2*p+1;
						if(compare(A[p],A[index_max],compare_sign))				{
					swap(A[index_max],A[p]);
					//heapify((A+p),N-p,increasing,operations);
				}
			}
			
		}
}
		