#include <iostream>
#include <ctime>
#include <cmath>

#include "source/sort_functions/insert_sort.h"
#include "source/sort_functions/quick_sort.h"
#include "source/sort_functions/heap_sort.h"

#include "source/sort_functions/merge_sort.h"
#include "source/sort_functions/selection_sort.h"
#include "source/sort_functions/base_functions.h"

#include "source/sort_functions/bubble_sort.h"
#include "source/display/containers.h"
#include "source/input/standart_type.h"
#include "source/binary_sequences/binary_sequences.h"

int main()
{
	size_t N = 15;
	float A[N];

	std::cout << "Task: Sort massive of 15 float elements in decreasing order.\n\n";
	std::cout << "Generate elements of massive by computer	-			1\nInput elements of massive by user	-			2\n";
	int32_t answer = 0;
	input(answer);
	if(answer == 1)
	{
		generate_float_massive(A,N);	
	}
	else if(answer == 2)
	{
		input(A,15);	
	}
	else
	{
		std::cout << "Wrong input value.\nThe end.";
		return 0;
	}
	
	float A1[N];
	bool increasing = false;

	
	
	std::cout << "Given massive :\n";
	display(A1,N,15);

	copy(A,N,A1);
	int32_t operations = 0;
	selection_sort(A1,N,increasing,operations);
	std::cout << "Selection sorting:\n";
	display(A1,N,15);
	std::cout << "Number operations for selection sorting - " << operations << ".\n";

	copy(A,N,A1);
	operations = 0;
	bubble_sort(A1,N,increasing,operations);
	std::cout << "Bubble sorting:\n";
	display(A1,N,15);
	std::cout << "Number operations for bubble sorting - " << operations << ".\n";

	copy(A,N,A1);
	operations = 0;
	insert_sort(A1,N,increasing,operations);
	std::cout << "Insert sorting:\n";
	display(A1,N,15);
	std::cout << "Number operations for insert sorting - " << operations << ".\n";

copy(A,N,A1);
	operations = 0;
	merge_sort(A1,N,increasing,operations);
	std::cout << "Merge sorting:\n";
	display(A1,N,15);
	std::cout << "Number operations for merge sorting - " << operations << ".\n";

	copy(A,N,A1);
	operations = 0;
	quick_sort(A1,N,increasing,operations);
	std::cout << "Quick sorting:\n";
	display(A1,N,15);
	std::cout << "Number operations for quick sorting - " << operations << ".\n";

	copy(A,N,A1);
	operations = 0;
	heap_sort(A1,N,increasing,operations);
	std::cout << "Heap sorting:\n";
	display(A1,N,15);
	std::cout << "Number operations for heap sorting - " << operations << ".\n";

	return 0;
	
}