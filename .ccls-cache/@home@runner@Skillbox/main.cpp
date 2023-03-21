#include <iostream>
#include <ctime>
#include <cmath>

#include "source/sort_functions/insert_sort.h"
#include "source/sort_functions/merge_sort.h"
#include "source/display/containers.h"
#include "source/input/standart_type.h"
#include "source/binary_sequences/binary_sequences.h"

int main()
{
	size_t N = 15;
	float A[N];
	input(A,15);
	//generate_float_massive(A,N);
	std::cout << "Give massive :\n";
	display(A,N,15);

	
	int32_t operations = 0;
	bool increasing = true;
	merge_sort(A,N,increasing,operations);
	std::cout << "Merge sorting:\n";
	display(A,N,15);
	std::cout << "Number operations for merge sorting - " << operations << ".\n";

	operations = 0;

	
	return 0;
	
}