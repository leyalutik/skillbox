#include "standart_type.h"
void input(float* A, const size_t N)
{
	for(size_t i=0; i<N; ++i)
		{
			std::cout << "Input float number " << i+1 << ":\n";
			float a = 0;
			input(a);
			A[i] = a;
		}
	}