#ifndef HEAP_SORT_H
#define HEAP_SORT_H 1

#include<iostream>

void heapify(float* A, const size_t N, bool increasing, int32_t& operations);
void heap_sort(float* A, const size_t N, const bool increasing, int32_t& operations);


#endif