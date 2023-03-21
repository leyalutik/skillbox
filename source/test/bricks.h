#ifndef BRICKS_H
#define BRICKS_H

#include <iostream>

void initialize(const float* m, const int32_t N, float* result);

void initialize(const std::initializer_list<float> list, const size_t N, float* A);

void display(const float* m, const size_t N);
void display(
	const std::initializer_list<float> list);

bool equal (const float* M1, const float* M2, const size_t N);
bool equal (const std::initializer_list<float> list, const float* M, const size_t N);



#endif