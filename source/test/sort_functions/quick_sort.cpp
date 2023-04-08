#include "quick_sort.h"


#include "base_functions.h"

#include<iostream>





void quick_sort(float* A, const size_t N, const bool increasing, int32_t& operations)
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
	if(N == 2)
	{
		++operations;
		if(compare(A[0],A[1],compare_sign))
		{
				swap(A[0],A[1]);
			++operations;
		}
			return;
	}
	
	float pivot = A[0];
	size_t Nl = 0;
	size_t Nr = 0;
	float Al[N], Ar[N];
	size_t k=0, p=0;
	for(size_t i=1; i<N; ++i)
		{
			++operations;
			if(compare(A[i],pivot,compare_sign))
			{
				Ar[k] = A[i];
				++k;
				++Nr;
				}
			else
			{
				Al[p] = A[i];
				++p;
				++Nl;

			}
		}
	quick_sort(Al, Nl,increasing, operations);
	quick_sort(Ar, Nr,increasing, operations);
	for(size_t i=0; i<Nl; ++i)
		{
			++operations;
			A[i] = Al[i];
		}
	A[Nl] = pivot;
	for(size_t i=0; i<Nr; ++i)
		{
			++operations;
			A[Nl+1+i] = Ar[i];
		}
	return;
}
