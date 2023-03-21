#include <iostream>
#include <ctime>
#include <cmath>


#include "binary_sequences.h"


void decimal2binary(const int32_t number, int32_t* A, const size_t N)//dimension A always 32, N - amount of noempty elements
{
	if(N != 32)
	{
		std::cout << "Illegal value of matrix A size.\n";
	}
	if(number == 0)
	{
		for(size_t i=0; i<N; ++i)
			{
				A[i] = 0;		
			}
		
	}
	int32_t sign = 0;
	if(number<0)
	{
		sign = 1;
	}
	int32_t A_temp[32];
	size_t i = 0;
	int32_t number_temp = number;
	while(number_temp > 0)
		{
			A_temp[i] = number_temp%2;
			number_temp /= 2;
			++i;
		}
	A[0] = sign;
	for(size_t j=0; j<i; ++j)
		{
			A[N-1-j] = A_temp[j];
		}
	for(size_t j=1; j<N-1; ++j)
		{
			A[N-i-j] = 0; 
		}
	
}
void generate_binary_sequence( int32_t* A, const size_t N)
{
	
	for(size_t i=0; i<N; ++i)
		{
			A[i] = (int(std::rand()) % 2);		
		}
	
}

void binarymantice2decimalmantice(const int* A, const size_t N, float& result)
{
	if(N != 23)
	{
		std::cout << "Illegal zise of manticec binary sequence.\n";
		return;
	}
	result = 1;
	float power = 1;
	for(size_t i=0; i<N; ++i)
		{
			power /= 2;
			//std::cout << "power = " << power << "\n";
			//std::cout << "A[" << i << "] * power = " << A[i]*power << "\n";
			result += A[i]*power;
			//std::cout << "result = " << result << "\n";

		}
}
void binary2decimal(const int* A, const size_t N, int32_t& result)
{
	if(N == 0)
	{
		return;
	}
	result = A[N-1];;
	int power = 1;
	for(size_t i=2; i<=N; ++i)
		{
			power *= 2;
			result += A[N-i]*power;
		}
}
//{1, 1,1,1,1,1,1,1,1, ...  -inf
//{0, 1,1,1,1,1,1,1,1, ...  inf
// {., [1,0,0,0,0,0,0,0 - 1,1,1,1,1,1,1,0] ... }   - positive power of 2
// // {., [0,1,1,1,1,1,1,0- 0,0,0,0,0,0,0,0]  ... }   - negative  power of 2
// {., 0,1,1,1,1,1,1,1, ...} - no power
void binaryfloat2decimalfloat(const int32_t* A, const size_t N, float& result)
{
	if(N != 32)
	{
		std::cout << "Illegal value of binary suquence size of float number.\n ";
	return;
		}
	int32_t result_p = 0;
	binary2decimal((A+1),8,result_p);
	float result_m = 0;
	binarymantice2decimalmantice((A+9),23,result_m);

	result = pow(-1,A[0]) * result_m * pow(2,result_p-127);
}

void generate_float_massive(float* A, size_t N)
{
	std::srand(static_cast<unsigned int>(std::time(nullptr)));
	
	for(size_t i=0; i<N; ++i)
	{
		int32_t sign_number[1];
	generate_binary_sequence(sign_number,1);
		
		int32_t M[23]; //mantice
		generate_binary_sequence(M,23);
		float result_m = 0;
	binarymantice2decimalmantice(M,23,result_m);
		
		int32_t P[8]; //степень
		generate_binary_sequence(P,8);
		int32_t result_p = 0;
		binary2decimal(P,8,result_p);
		
		A[i] = std::pow(-1,sign_number[0]) * result_m * pow(2,result_p-127);
		}
	}
