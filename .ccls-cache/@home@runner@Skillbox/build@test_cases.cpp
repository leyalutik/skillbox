#include"test_cases.h"
#include<initializer_list>
#include<iostream>
#include "bricks.h"
#include "create_permutations.h"
#include "sort_functions/insert_sort.h"
#include "sort_functions/merge_sort.h"
void test_case1()
{
std::initializer_list<float> list = {1.000000,2.000000,3.000000};
size_t N = list.size();
float A[N];//1
initialize({1.000000,2.000000,3.000000},A, N);
 merge_sort(A,N);
display(A,N);
assert(is_equal(list,A,N);
//2
initialize({1.000000,3.000000,2.000000},A, N);
 merge_sort(A,N);
display(A,N);
assert(is_equal(list,A,N);
//3
initialize({2.000000,1.000000,3.000000},A, N);
 merge_sort(A,N);
display(A,N);
assert(is_equal(list,A,N);
//4
initialize({2.000000,3.000000,1.000000},A, N);
 merge_sort(A,N);
display(A,N);
assert(is_equal(list,A,N);
//5
initialize({3.000000,1.000000,2.000000},A, N);
 merge_sort(A,N);
display(A,N);
assert(is_equal(list,A,N);
//6
initialize({3.000000,2.000000,1.000000},A, N);
 merge_sort(A,N);
display(A,N);
assert(is_equal(list,A,N);
std::cerr << "test_case" << "1" << " - OK.\n";
}
void test_case2()
{
std::initializer_list<float> list = {1.000000,2.000000};
size_t N = list.size();
float A[N];//1
initialize({1.000000,2.000000},A, N);
 merge_sort(A,N);
display(A,N);
assert(is_equal(list,A,N);
//2
initialize({2.000000,1.000000},A, N);
 merge_sort(A,N);
display(A,N);
assert(is_equal(list,A,N);
std::cerr << "test_case" << "2" << " - OK.\n";
}
void test_cases()
{
test_case1();
test_case2();
}
