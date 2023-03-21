#ifndef BINARY_SEQUENCES_H
#define BINARY_SEQUENCES_H 1
#include <iostream>

void decimal2binary(const int32_t number, int32_t* A, const size_t N);
void binary2decimal(const int* A, const size_t N, int32_t& result);
void binaryfloat2decimalfloat(const int32_t* A, const size_t N, float& result);
void generate_binary_sequence(int32_t* A, const size_t N);
void generate_float_massive(float* A, const size_t N);







#endif
