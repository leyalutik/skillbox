/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cassert>

int32_t repeated_number(const int A[15])
{
	
	int sum = 0;
	int min = A[0];
	for(size_t i=0; i<15; ++i)
		{
			min = (min > A[i] ? A[i] : min);
			sum += A[i];
			
		}
	return (sum - (14*min+91));
}

int main()
{
    int A[15] = {114,111,106,107,108,105,115,108,110,109,112,113,116,117,118};
		std::cout << "Repeated_number = " << repeated_number(A) << std::endl;
    return 0;
}
