#include"test_cases.h"
#include<initializer_list>
#include<iostream>
#include<cassert>
#include "bricks.h"
#include "create_permutations.h"
#include "sort_functions/insert_sort.h"
#include "sort_functions/merge_sort.h"
void test_merge_sort_case_1()
{
std::initializer_list<float> list = {1.000000};
size_t N = list.size();
int32_t operations = 0;
bool increasing = true;
float A[N];
display(list);
//1
initialize({1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
std::cerr << "test_merge_sort_case_1()" << " - OK.\n";
}
void test_merge_sort_case_2()
{
std::initializer_list<float> list = {1.000000,2.000000};
size_t N = list.size();
int32_t operations = 0;
bool increasing = true;
float A[N];
display(list);
//1
initialize({1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//2
initialize({2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
std::cerr << "test_merge_sort_case_2()" << " - OK.\n";
}
void test_merge_sort_case_3()
{
std::initializer_list<float> list = {1.000000,2.000000,3.000000};
size_t N = list.size();
int32_t operations = 0;
bool increasing = true;
float A[N];
display(list);
//1
initialize({1.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//2
initialize({1.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//3
initialize({2.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//4
initialize({2.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//5
initialize({3.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//6
initialize({3.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
std::cerr << "test_merge_sort_case_3()" << " - OK.\n";
}
void test_merge_sort_case_4()
{
std::initializer_list<float> list = {1.000000,2.000000,3.000000,4.000000};
size_t N = list.size();
int32_t operations = 0;
bool increasing = true;
float A[N];
display(list);
//1
initialize({1.000000,2.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//2
initialize({1.000000,2.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//3
initialize({1.000000,3.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//4
initialize({1.000000,3.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//5
initialize({1.000000,4.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//6
initialize({1.000000,4.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//7
initialize({2.000000,1.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//8
initialize({2.000000,1.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//9
initialize({2.000000,3.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//10
initialize({2.000000,3.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//11
initialize({2.000000,4.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//12
initialize({2.000000,4.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//13
initialize({3.000000,1.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//14
initialize({3.000000,1.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//15
initialize({3.000000,2.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//16
initialize({3.000000,2.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//17
initialize({3.000000,4.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//18
initialize({3.000000,4.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//19
initialize({4.000000,1.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//20
initialize({4.000000,1.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//21
initialize({4.000000,2.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//22
initialize({4.000000,2.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//23
initialize({4.000000,3.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//24
initialize({4.000000,3.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
std::cerr << "test_merge_sort_case_4()" << " - OK.\n";
}
void test_merge_sort_case_5()
{
std::initializer_list<float> list = {1.000000,2.000000,3.000000,4.000000,5.000000};
size_t N = list.size();
int32_t operations = 0;
bool increasing = true;
float A[N];
display(list);
//1
initialize({1.000000,2.000000,3.000000,4.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//2
initialize({1.000000,2.000000,3.000000,5.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//3
initialize({1.000000,2.000000,4.000000,3.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//4
initialize({1.000000,2.000000,4.000000,5.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//5
initialize({1.000000,2.000000,5.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//6
initialize({1.000000,2.000000,5.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//7
initialize({1.000000,3.000000,2.000000,4.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//8
initialize({1.000000,3.000000,2.000000,5.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//9
initialize({1.000000,3.000000,4.000000,2.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//10
initialize({1.000000,3.000000,4.000000,5.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//11
initialize({1.000000,3.000000,5.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//12
initialize({1.000000,3.000000,5.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//13
initialize({1.000000,4.000000,2.000000,3.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//14
initialize({1.000000,4.000000,2.000000,5.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//15
initialize({1.000000,4.000000,3.000000,2.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//16
initialize({1.000000,4.000000,3.000000,5.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//17
initialize({1.000000,4.000000,5.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//18
initialize({1.000000,4.000000,5.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//19
initialize({1.000000,5.000000,2.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//20
initialize({1.000000,5.000000,2.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//21
initialize({1.000000,5.000000,3.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//22
initialize({1.000000,5.000000,3.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//23
initialize({1.000000,5.000000,4.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//24
initialize({1.000000,5.000000,4.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//25
initialize({2.000000,1.000000,3.000000,4.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//26
initialize({2.000000,1.000000,3.000000,5.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//27
initialize({2.000000,1.000000,4.000000,3.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//28
initialize({2.000000,1.000000,4.000000,5.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//29
initialize({2.000000,1.000000,5.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//30
initialize({2.000000,1.000000,5.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//31
initialize({2.000000,3.000000,1.000000,4.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//32
initialize({2.000000,3.000000,1.000000,5.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//33
initialize({2.000000,3.000000,4.000000,1.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//34
initialize({2.000000,3.000000,4.000000,5.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//35
initialize({2.000000,3.000000,5.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//36
initialize({2.000000,3.000000,5.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//37
initialize({2.000000,4.000000,1.000000,3.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//38
initialize({2.000000,4.000000,1.000000,5.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//39
initialize({2.000000,4.000000,3.000000,1.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//40
initialize({2.000000,4.000000,3.000000,5.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//41
initialize({2.000000,4.000000,5.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//42
initialize({2.000000,4.000000,5.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//43
initialize({2.000000,5.000000,1.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//44
initialize({2.000000,5.000000,1.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//45
initialize({2.000000,5.000000,3.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//46
initialize({2.000000,5.000000,3.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//47
initialize({2.000000,5.000000,4.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//48
initialize({2.000000,5.000000,4.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//49
initialize({3.000000,1.000000,2.000000,4.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//50
initialize({3.000000,1.000000,2.000000,5.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//51
initialize({3.000000,1.000000,4.000000,2.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//52
initialize({3.000000,1.000000,4.000000,5.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//53
initialize({3.000000,1.000000,5.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//54
initialize({3.000000,1.000000,5.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//55
initialize({3.000000,2.000000,1.000000,4.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//56
initialize({3.000000,2.000000,1.000000,5.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//57
initialize({3.000000,2.000000,4.000000,1.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//58
initialize({3.000000,2.000000,4.000000,5.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//59
initialize({3.000000,2.000000,5.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//60
initialize({3.000000,2.000000,5.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//61
initialize({3.000000,4.000000,1.000000,2.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//62
initialize({3.000000,4.000000,1.000000,5.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//63
initialize({3.000000,4.000000,2.000000,1.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//64
initialize({3.000000,4.000000,2.000000,5.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//65
initialize({3.000000,4.000000,5.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//66
initialize({3.000000,4.000000,5.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//67
initialize({3.000000,5.000000,1.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//68
initialize({3.000000,5.000000,1.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//69
initialize({3.000000,5.000000,2.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//70
initialize({3.000000,5.000000,2.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//71
initialize({3.000000,5.000000,4.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//72
initialize({3.000000,5.000000,4.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//73
initialize({4.000000,1.000000,2.000000,3.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//74
initialize({4.000000,1.000000,2.000000,5.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//75
initialize({4.000000,1.000000,3.000000,2.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//76
initialize({4.000000,1.000000,3.000000,5.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//77
initialize({4.000000,1.000000,5.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//78
initialize({4.000000,1.000000,5.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//79
initialize({4.000000,2.000000,1.000000,3.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//80
initialize({4.000000,2.000000,1.000000,5.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//81
initialize({4.000000,2.000000,3.000000,1.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//82
initialize({4.000000,2.000000,3.000000,5.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//83
initialize({4.000000,2.000000,5.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//84
initialize({4.000000,2.000000,5.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//85
initialize({4.000000,3.000000,1.000000,2.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//86
initialize({4.000000,3.000000,1.000000,5.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//87
initialize({4.000000,3.000000,2.000000,1.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//88
initialize({4.000000,3.000000,2.000000,5.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//89
initialize({4.000000,3.000000,5.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//90
initialize({4.000000,3.000000,5.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//91
initialize({4.000000,5.000000,1.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//92
initialize({4.000000,5.000000,1.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//93
initialize({4.000000,5.000000,2.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//94
initialize({4.000000,5.000000,2.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//95
initialize({4.000000,5.000000,3.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//96
initialize({4.000000,5.000000,3.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//97
initialize({5.000000,1.000000,2.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//98
initialize({5.000000,1.000000,2.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//99
initialize({5.000000,1.000000,3.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//100
initialize({5.000000,1.000000,3.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//101
initialize({5.000000,1.000000,4.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//102
initialize({5.000000,1.000000,4.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//103
initialize({5.000000,2.000000,1.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//104
initialize({5.000000,2.000000,1.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//105
initialize({5.000000,2.000000,3.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//106
initialize({5.000000,2.000000,3.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//107
initialize({5.000000,2.000000,4.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//108
initialize({5.000000,2.000000,4.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//109
initialize({5.000000,3.000000,1.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//110
initialize({5.000000,3.000000,1.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//111
initialize({5.000000,3.000000,2.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//112
initialize({5.000000,3.000000,2.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//113
initialize({5.000000,3.000000,4.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//114
initialize({5.000000,3.000000,4.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//115
initialize({5.000000,4.000000,1.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//116
initialize({5.000000,4.000000,1.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//117
initialize({5.000000,4.000000,2.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//118
initialize({5.000000,4.000000,2.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//119
initialize({5.000000,4.000000,3.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//120
initialize({5.000000,4.000000,3.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
std::cerr << "test_merge_sort_case_5()" << " - OK.\n";
}
void test_merge_sort_case_6()
{
std::initializer_list<float> list = {1.000000,2.000000,3.000000,4.000000,5.000000,6.000000};
size_t N = list.size();
int32_t operations = 0;
bool increasing = true;
float A[N];
display(list);
//1
initialize({1.000000,2.000000,3.000000,4.000000,5.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//2
initialize({1.000000,2.000000,3.000000,4.000000,6.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//3
initialize({1.000000,2.000000,3.000000,5.000000,4.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//4
initialize({1.000000,2.000000,3.000000,5.000000,6.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//5
initialize({1.000000,2.000000,3.000000,6.000000,4.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//6
initialize({1.000000,2.000000,3.000000,6.000000,5.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//7
initialize({1.000000,2.000000,4.000000,3.000000,5.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//8
initialize({1.000000,2.000000,4.000000,3.000000,6.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//9
initialize({1.000000,2.000000,4.000000,5.000000,3.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//10
initialize({1.000000,2.000000,4.000000,5.000000,6.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//11
initialize({1.000000,2.000000,4.000000,6.000000,3.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//12
initialize({1.000000,2.000000,4.000000,6.000000,5.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//13
initialize({1.000000,2.000000,5.000000,3.000000,4.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//14
initialize({1.000000,2.000000,5.000000,3.000000,6.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//15
initialize({1.000000,2.000000,5.000000,4.000000,3.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//16
initialize({1.000000,2.000000,5.000000,4.000000,6.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//17
initialize({1.000000,2.000000,5.000000,6.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//18
initialize({1.000000,2.000000,5.000000,6.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//19
initialize({1.000000,2.000000,6.000000,3.000000,4.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//20
initialize({1.000000,2.000000,6.000000,3.000000,5.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//21
initialize({1.000000,2.000000,6.000000,4.000000,3.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//22
initialize({1.000000,2.000000,6.000000,4.000000,5.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//23
initialize({1.000000,2.000000,6.000000,5.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//24
initialize({1.000000,2.000000,6.000000,5.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//25
initialize({1.000000,3.000000,2.000000,4.000000,5.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//26
initialize({1.000000,3.000000,2.000000,4.000000,6.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//27
initialize({1.000000,3.000000,2.000000,5.000000,4.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//28
initialize({1.000000,3.000000,2.000000,5.000000,6.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//29
initialize({1.000000,3.000000,2.000000,6.000000,4.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//30
initialize({1.000000,3.000000,2.000000,6.000000,5.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//31
initialize({1.000000,3.000000,4.000000,2.000000,5.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//32
initialize({1.000000,3.000000,4.000000,2.000000,6.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//33
initialize({1.000000,3.000000,4.000000,5.000000,2.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//34
initialize({1.000000,3.000000,4.000000,5.000000,6.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//35
initialize({1.000000,3.000000,4.000000,6.000000,2.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//36
initialize({1.000000,3.000000,4.000000,6.000000,5.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//37
initialize({1.000000,3.000000,5.000000,2.000000,4.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//38
initialize({1.000000,3.000000,5.000000,2.000000,6.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//39
initialize({1.000000,3.000000,5.000000,4.000000,2.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//40
initialize({1.000000,3.000000,5.000000,4.000000,6.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//41
initialize({1.000000,3.000000,5.000000,6.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//42
initialize({1.000000,3.000000,5.000000,6.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//43
initialize({1.000000,3.000000,6.000000,2.000000,4.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//44
initialize({1.000000,3.000000,6.000000,2.000000,5.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//45
initialize({1.000000,3.000000,6.000000,4.000000,2.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//46
initialize({1.000000,3.000000,6.000000,4.000000,5.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//47
initialize({1.000000,3.000000,6.000000,5.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//48
initialize({1.000000,3.000000,6.000000,5.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//49
initialize({1.000000,4.000000,2.000000,3.000000,5.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//50
initialize({1.000000,4.000000,2.000000,3.000000,6.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//51
initialize({1.000000,4.000000,2.000000,5.000000,3.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//52
initialize({1.000000,4.000000,2.000000,5.000000,6.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//53
initialize({1.000000,4.000000,2.000000,6.000000,3.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//54
initialize({1.000000,4.000000,2.000000,6.000000,5.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//55
initialize({1.000000,4.000000,3.000000,2.000000,5.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//56
initialize({1.000000,4.000000,3.000000,2.000000,6.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//57
initialize({1.000000,4.000000,3.000000,5.000000,2.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//58
initialize({1.000000,4.000000,3.000000,5.000000,6.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//59
initialize({1.000000,4.000000,3.000000,6.000000,2.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//60
initialize({1.000000,4.000000,3.000000,6.000000,5.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//61
initialize({1.000000,4.000000,5.000000,2.000000,3.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//62
initialize({1.000000,4.000000,5.000000,2.000000,6.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//63
initialize({1.000000,4.000000,5.000000,3.000000,2.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//64
initialize({1.000000,4.000000,5.000000,3.000000,6.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//65
initialize({1.000000,4.000000,5.000000,6.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//66
initialize({1.000000,4.000000,5.000000,6.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//67
initialize({1.000000,4.000000,6.000000,2.000000,3.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//68
initialize({1.000000,4.000000,6.000000,2.000000,5.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//69
initialize({1.000000,4.000000,6.000000,3.000000,2.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//70
initialize({1.000000,4.000000,6.000000,3.000000,5.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//71
initialize({1.000000,4.000000,6.000000,5.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//72
initialize({1.000000,4.000000,6.000000,5.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//73
initialize({1.000000,5.000000,2.000000,3.000000,4.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//74
initialize({1.000000,5.000000,2.000000,3.000000,6.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//75
initialize({1.000000,5.000000,2.000000,4.000000,3.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//76
initialize({1.000000,5.000000,2.000000,4.000000,6.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//77
initialize({1.000000,5.000000,2.000000,6.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//78
initialize({1.000000,5.000000,2.000000,6.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//79
initialize({1.000000,5.000000,3.000000,2.000000,4.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//80
initialize({1.000000,5.000000,3.000000,2.000000,6.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//81
initialize({1.000000,5.000000,3.000000,4.000000,2.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//82
initialize({1.000000,5.000000,3.000000,4.000000,6.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//83
initialize({1.000000,5.000000,3.000000,6.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//84
initialize({1.000000,5.000000,3.000000,6.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//85
initialize({1.000000,5.000000,4.000000,2.000000,3.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//86
initialize({1.000000,5.000000,4.000000,2.000000,6.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//87
initialize({1.000000,5.000000,4.000000,3.000000,2.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//88
initialize({1.000000,5.000000,4.000000,3.000000,6.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//89
initialize({1.000000,5.000000,4.000000,6.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//90
initialize({1.000000,5.000000,4.000000,6.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//91
initialize({1.000000,5.000000,6.000000,2.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//92
initialize({1.000000,5.000000,6.000000,2.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//93
initialize({1.000000,5.000000,6.000000,3.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//94
initialize({1.000000,5.000000,6.000000,3.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//95
initialize({1.000000,5.000000,6.000000,4.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//96
initialize({1.000000,5.000000,6.000000,4.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//97
initialize({1.000000,6.000000,2.000000,3.000000,4.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//98
initialize({1.000000,6.000000,2.000000,3.000000,5.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//99
initialize({1.000000,6.000000,2.000000,4.000000,3.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//100
initialize({1.000000,6.000000,2.000000,4.000000,5.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//101
initialize({1.000000,6.000000,2.000000,5.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//102
initialize({1.000000,6.000000,2.000000,5.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//103
initialize({1.000000,6.000000,3.000000,2.000000,4.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//104
initialize({1.000000,6.000000,3.000000,2.000000,5.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//105
initialize({1.000000,6.000000,3.000000,4.000000,2.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//106
initialize({1.000000,6.000000,3.000000,4.000000,5.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//107
initialize({1.000000,6.000000,3.000000,5.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//108
initialize({1.000000,6.000000,3.000000,5.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//109
initialize({1.000000,6.000000,4.000000,2.000000,3.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//110
initialize({1.000000,6.000000,4.000000,2.000000,5.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//111
initialize({1.000000,6.000000,4.000000,3.000000,2.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//112
initialize({1.000000,6.000000,4.000000,3.000000,5.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//113
initialize({1.000000,6.000000,4.000000,5.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//114
initialize({1.000000,6.000000,4.000000,5.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//115
initialize({1.000000,6.000000,5.000000,2.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//116
initialize({1.000000,6.000000,5.000000,2.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//117
initialize({1.000000,6.000000,5.000000,3.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//118
initialize({1.000000,6.000000,5.000000,3.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//119
initialize({1.000000,6.000000,5.000000,4.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//120
initialize({1.000000,6.000000,5.000000,4.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//121
initialize({2.000000,1.000000,3.000000,4.000000,5.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//122
initialize({2.000000,1.000000,3.000000,4.000000,6.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//123
initialize({2.000000,1.000000,3.000000,5.000000,4.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//124
initialize({2.000000,1.000000,3.000000,5.000000,6.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//125
initialize({2.000000,1.000000,3.000000,6.000000,4.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//126
initialize({2.000000,1.000000,3.000000,6.000000,5.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//127
initialize({2.000000,1.000000,4.000000,3.000000,5.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//128
initialize({2.000000,1.000000,4.000000,3.000000,6.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//129
initialize({2.000000,1.000000,4.000000,5.000000,3.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//130
initialize({2.000000,1.000000,4.000000,5.000000,6.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//131
initialize({2.000000,1.000000,4.000000,6.000000,3.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//132
initialize({2.000000,1.000000,4.000000,6.000000,5.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//133
initialize({2.000000,1.000000,5.000000,3.000000,4.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//134
initialize({2.000000,1.000000,5.000000,3.000000,6.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//135
initialize({2.000000,1.000000,5.000000,4.000000,3.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//136
initialize({2.000000,1.000000,5.000000,4.000000,6.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//137
initialize({2.000000,1.000000,5.000000,6.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//138
initialize({2.000000,1.000000,5.000000,6.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//139
initialize({2.000000,1.000000,6.000000,3.000000,4.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//140
initialize({2.000000,1.000000,6.000000,3.000000,5.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//141
initialize({2.000000,1.000000,6.000000,4.000000,3.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//142
initialize({2.000000,1.000000,6.000000,4.000000,5.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//143
initialize({2.000000,1.000000,6.000000,5.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//144
initialize({2.000000,1.000000,6.000000,5.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//145
initialize({2.000000,3.000000,1.000000,4.000000,5.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//146
initialize({2.000000,3.000000,1.000000,4.000000,6.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//147
initialize({2.000000,3.000000,1.000000,5.000000,4.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//148
initialize({2.000000,3.000000,1.000000,5.000000,6.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//149
initialize({2.000000,3.000000,1.000000,6.000000,4.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//150
initialize({2.000000,3.000000,1.000000,6.000000,5.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//151
initialize({2.000000,3.000000,4.000000,1.000000,5.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//152
initialize({2.000000,3.000000,4.000000,1.000000,6.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//153
initialize({2.000000,3.000000,4.000000,5.000000,1.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//154
initialize({2.000000,3.000000,4.000000,5.000000,6.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//155
initialize({2.000000,3.000000,4.000000,6.000000,1.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//156
initialize({2.000000,3.000000,4.000000,6.000000,5.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//157
initialize({2.000000,3.000000,5.000000,1.000000,4.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//158
initialize({2.000000,3.000000,5.000000,1.000000,6.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//159
initialize({2.000000,3.000000,5.000000,4.000000,1.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//160
initialize({2.000000,3.000000,5.000000,4.000000,6.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//161
initialize({2.000000,3.000000,5.000000,6.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//162
initialize({2.000000,3.000000,5.000000,6.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//163
initialize({2.000000,3.000000,6.000000,1.000000,4.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//164
initialize({2.000000,3.000000,6.000000,1.000000,5.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//165
initialize({2.000000,3.000000,6.000000,4.000000,1.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//166
initialize({2.000000,3.000000,6.000000,4.000000,5.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//167
initialize({2.000000,3.000000,6.000000,5.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//168
initialize({2.000000,3.000000,6.000000,5.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//169
initialize({2.000000,4.000000,1.000000,3.000000,5.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//170
initialize({2.000000,4.000000,1.000000,3.000000,6.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//171
initialize({2.000000,4.000000,1.000000,5.000000,3.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//172
initialize({2.000000,4.000000,1.000000,5.000000,6.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//173
initialize({2.000000,4.000000,1.000000,6.000000,3.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//174
initialize({2.000000,4.000000,1.000000,6.000000,5.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//175
initialize({2.000000,4.000000,3.000000,1.000000,5.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//176
initialize({2.000000,4.000000,3.000000,1.000000,6.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//177
initialize({2.000000,4.000000,3.000000,5.000000,1.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//178
initialize({2.000000,4.000000,3.000000,5.000000,6.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//179
initialize({2.000000,4.000000,3.000000,6.000000,1.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//180
initialize({2.000000,4.000000,3.000000,6.000000,5.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//181
initialize({2.000000,4.000000,5.000000,1.000000,3.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//182
initialize({2.000000,4.000000,5.000000,1.000000,6.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//183
initialize({2.000000,4.000000,5.000000,3.000000,1.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//184
initialize({2.000000,4.000000,5.000000,3.000000,6.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//185
initialize({2.000000,4.000000,5.000000,6.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//186
initialize({2.000000,4.000000,5.000000,6.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//187
initialize({2.000000,4.000000,6.000000,1.000000,3.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//188
initialize({2.000000,4.000000,6.000000,1.000000,5.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//189
initialize({2.000000,4.000000,6.000000,3.000000,1.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//190
initialize({2.000000,4.000000,6.000000,3.000000,5.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//191
initialize({2.000000,4.000000,6.000000,5.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//192
initialize({2.000000,4.000000,6.000000,5.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//193
initialize({2.000000,5.000000,1.000000,3.000000,4.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//194
initialize({2.000000,5.000000,1.000000,3.000000,6.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//195
initialize({2.000000,5.000000,1.000000,4.000000,3.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//196
initialize({2.000000,5.000000,1.000000,4.000000,6.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//197
initialize({2.000000,5.000000,1.000000,6.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//198
initialize({2.000000,5.000000,1.000000,6.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//199
initialize({2.000000,5.000000,3.000000,1.000000,4.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//200
initialize({2.000000,5.000000,3.000000,1.000000,6.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//201
initialize({2.000000,5.000000,3.000000,4.000000,1.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//202
initialize({2.000000,5.000000,3.000000,4.000000,6.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//203
initialize({2.000000,5.000000,3.000000,6.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//204
initialize({2.000000,5.000000,3.000000,6.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//205
initialize({2.000000,5.000000,4.000000,1.000000,3.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//206
initialize({2.000000,5.000000,4.000000,1.000000,6.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//207
initialize({2.000000,5.000000,4.000000,3.000000,1.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//208
initialize({2.000000,5.000000,4.000000,3.000000,6.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//209
initialize({2.000000,5.000000,4.000000,6.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//210
initialize({2.000000,5.000000,4.000000,6.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//211
initialize({2.000000,5.000000,6.000000,1.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//212
initialize({2.000000,5.000000,6.000000,1.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//213
initialize({2.000000,5.000000,6.000000,3.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//214
initialize({2.000000,5.000000,6.000000,3.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//215
initialize({2.000000,5.000000,6.000000,4.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//216
initialize({2.000000,5.000000,6.000000,4.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//217
initialize({2.000000,6.000000,1.000000,3.000000,4.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//218
initialize({2.000000,6.000000,1.000000,3.000000,5.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//219
initialize({2.000000,6.000000,1.000000,4.000000,3.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//220
initialize({2.000000,6.000000,1.000000,4.000000,5.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//221
initialize({2.000000,6.000000,1.000000,5.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//222
initialize({2.000000,6.000000,1.000000,5.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//223
initialize({2.000000,6.000000,3.000000,1.000000,4.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//224
initialize({2.000000,6.000000,3.000000,1.000000,5.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//225
initialize({2.000000,6.000000,3.000000,4.000000,1.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//226
initialize({2.000000,6.000000,3.000000,4.000000,5.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//227
initialize({2.000000,6.000000,3.000000,5.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//228
initialize({2.000000,6.000000,3.000000,5.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//229
initialize({2.000000,6.000000,4.000000,1.000000,3.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//230
initialize({2.000000,6.000000,4.000000,1.000000,5.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//231
initialize({2.000000,6.000000,4.000000,3.000000,1.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//232
initialize({2.000000,6.000000,4.000000,3.000000,5.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//233
initialize({2.000000,6.000000,4.000000,5.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//234
initialize({2.000000,6.000000,4.000000,5.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//235
initialize({2.000000,6.000000,5.000000,1.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//236
initialize({2.000000,6.000000,5.000000,1.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//237
initialize({2.000000,6.000000,5.000000,3.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//238
initialize({2.000000,6.000000,5.000000,3.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//239
initialize({2.000000,6.000000,5.000000,4.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//240
initialize({2.000000,6.000000,5.000000,4.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//241
initialize({3.000000,1.000000,2.000000,4.000000,5.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//242
initialize({3.000000,1.000000,2.000000,4.000000,6.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//243
initialize({3.000000,1.000000,2.000000,5.000000,4.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//244
initialize({3.000000,1.000000,2.000000,5.000000,6.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//245
initialize({3.000000,1.000000,2.000000,6.000000,4.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//246
initialize({3.000000,1.000000,2.000000,6.000000,5.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//247
initialize({3.000000,1.000000,4.000000,2.000000,5.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//248
initialize({3.000000,1.000000,4.000000,2.000000,6.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//249
initialize({3.000000,1.000000,4.000000,5.000000,2.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//250
initialize({3.000000,1.000000,4.000000,5.000000,6.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//251
initialize({3.000000,1.000000,4.000000,6.000000,2.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//252
initialize({3.000000,1.000000,4.000000,6.000000,5.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//253
initialize({3.000000,1.000000,5.000000,2.000000,4.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//254
initialize({3.000000,1.000000,5.000000,2.000000,6.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//255
initialize({3.000000,1.000000,5.000000,4.000000,2.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//256
initialize({3.000000,1.000000,5.000000,4.000000,6.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//257
initialize({3.000000,1.000000,5.000000,6.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//258
initialize({3.000000,1.000000,5.000000,6.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//259
initialize({3.000000,1.000000,6.000000,2.000000,4.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//260
initialize({3.000000,1.000000,6.000000,2.000000,5.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//261
initialize({3.000000,1.000000,6.000000,4.000000,2.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//262
initialize({3.000000,1.000000,6.000000,4.000000,5.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//263
initialize({3.000000,1.000000,6.000000,5.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//264
initialize({3.000000,1.000000,6.000000,5.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//265
initialize({3.000000,2.000000,1.000000,4.000000,5.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//266
initialize({3.000000,2.000000,1.000000,4.000000,6.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//267
initialize({3.000000,2.000000,1.000000,5.000000,4.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//268
initialize({3.000000,2.000000,1.000000,5.000000,6.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//269
initialize({3.000000,2.000000,1.000000,6.000000,4.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//270
initialize({3.000000,2.000000,1.000000,6.000000,5.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//271
initialize({3.000000,2.000000,4.000000,1.000000,5.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//272
initialize({3.000000,2.000000,4.000000,1.000000,6.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//273
initialize({3.000000,2.000000,4.000000,5.000000,1.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//274
initialize({3.000000,2.000000,4.000000,5.000000,6.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//275
initialize({3.000000,2.000000,4.000000,6.000000,1.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//276
initialize({3.000000,2.000000,4.000000,6.000000,5.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//277
initialize({3.000000,2.000000,5.000000,1.000000,4.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//278
initialize({3.000000,2.000000,5.000000,1.000000,6.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//279
initialize({3.000000,2.000000,5.000000,4.000000,1.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//280
initialize({3.000000,2.000000,5.000000,4.000000,6.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//281
initialize({3.000000,2.000000,5.000000,6.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//282
initialize({3.000000,2.000000,5.000000,6.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//283
initialize({3.000000,2.000000,6.000000,1.000000,4.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//284
initialize({3.000000,2.000000,6.000000,1.000000,5.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//285
initialize({3.000000,2.000000,6.000000,4.000000,1.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//286
initialize({3.000000,2.000000,6.000000,4.000000,5.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//287
initialize({3.000000,2.000000,6.000000,5.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//288
initialize({3.000000,2.000000,6.000000,5.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//289
initialize({3.000000,4.000000,1.000000,2.000000,5.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//290
initialize({3.000000,4.000000,1.000000,2.000000,6.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//291
initialize({3.000000,4.000000,1.000000,5.000000,2.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//292
initialize({3.000000,4.000000,1.000000,5.000000,6.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//293
initialize({3.000000,4.000000,1.000000,6.000000,2.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//294
initialize({3.000000,4.000000,1.000000,6.000000,5.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//295
initialize({3.000000,4.000000,2.000000,1.000000,5.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//296
initialize({3.000000,4.000000,2.000000,1.000000,6.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//297
initialize({3.000000,4.000000,2.000000,5.000000,1.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//298
initialize({3.000000,4.000000,2.000000,5.000000,6.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//299
initialize({3.000000,4.000000,2.000000,6.000000,1.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//300
initialize({3.000000,4.000000,2.000000,6.000000,5.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//301
initialize({3.000000,4.000000,5.000000,1.000000,2.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//302
initialize({3.000000,4.000000,5.000000,1.000000,6.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//303
initialize({3.000000,4.000000,5.000000,2.000000,1.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//304
initialize({3.000000,4.000000,5.000000,2.000000,6.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//305
initialize({3.000000,4.000000,5.000000,6.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//306
initialize({3.000000,4.000000,5.000000,6.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//307
initialize({3.000000,4.000000,6.000000,1.000000,2.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//308
initialize({3.000000,4.000000,6.000000,1.000000,5.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//309
initialize({3.000000,4.000000,6.000000,2.000000,1.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//310
initialize({3.000000,4.000000,6.000000,2.000000,5.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//311
initialize({3.000000,4.000000,6.000000,5.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//312
initialize({3.000000,4.000000,6.000000,5.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//313
initialize({3.000000,5.000000,1.000000,2.000000,4.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//314
initialize({3.000000,5.000000,1.000000,2.000000,6.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//315
initialize({3.000000,5.000000,1.000000,4.000000,2.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//316
initialize({3.000000,5.000000,1.000000,4.000000,6.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//317
initialize({3.000000,5.000000,1.000000,6.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//318
initialize({3.000000,5.000000,1.000000,6.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//319
initialize({3.000000,5.000000,2.000000,1.000000,4.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//320
initialize({3.000000,5.000000,2.000000,1.000000,6.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//321
initialize({3.000000,5.000000,2.000000,4.000000,1.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//322
initialize({3.000000,5.000000,2.000000,4.000000,6.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//323
initialize({3.000000,5.000000,2.000000,6.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//324
initialize({3.000000,5.000000,2.000000,6.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//325
initialize({3.000000,5.000000,4.000000,1.000000,2.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//326
initialize({3.000000,5.000000,4.000000,1.000000,6.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//327
initialize({3.000000,5.000000,4.000000,2.000000,1.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//328
initialize({3.000000,5.000000,4.000000,2.000000,6.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//329
initialize({3.000000,5.000000,4.000000,6.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//330
initialize({3.000000,5.000000,4.000000,6.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//331
initialize({3.000000,5.000000,6.000000,1.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//332
initialize({3.000000,5.000000,6.000000,1.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//333
initialize({3.000000,5.000000,6.000000,2.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//334
initialize({3.000000,5.000000,6.000000,2.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//335
initialize({3.000000,5.000000,6.000000,4.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//336
initialize({3.000000,5.000000,6.000000,4.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//337
initialize({3.000000,6.000000,1.000000,2.000000,4.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//338
initialize({3.000000,6.000000,1.000000,2.000000,5.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//339
initialize({3.000000,6.000000,1.000000,4.000000,2.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//340
initialize({3.000000,6.000000,1.000000,4.000000,5.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//341
initialize({3.000000,6.000000,1.000000,5.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//342
initialize({3.000000,6.000000,1.000000,5.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//343
initialize({3.000000,6.000000,2.000000,1.000000,4.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//344
initialize({3.000000,6.000000,2.000000,1.000000,5.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//345
initialize({3.000000,6.000000,2.000000,4.000000,1.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//346
initialize({3.000000,6.000000,2.000000,4.000000,5.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//347
initialize({3.000000,6.000000,2.000000,5.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//348
initialize({3.000000,6.000000,2.000000,5.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//349
initialize({3.000000,6.000000,4.000000,1.000000,2.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//350
initialize({3.000000,6.000000,4.000000,1.000000,5.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//351
initialize({3.000000,6.000000,4.000000,2.000000,1.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//352
initialize({3.000000,6.000000,4.000000,2.000000,5.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//353
initialize({3.000000,6.000000,4.000000,5.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//354
initialize({3.000000,6.000000,4.000000,5.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//355
initialize({3.000000,6.000000,5.000000,1.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//356
initialize({3.000000,6.000000,5.000000,1.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//357
initialize({3.000000,6.000000,5.000000,2.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//358
initialize({3.000000,6.000000,5.000000,2.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//359
initialize({3.000000,6.000000,5.000000,4.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//360
initialize({3.000000,6.000000,5.000000,4.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//361
initialize({4.000000,1.000000,2.000000,3.000000,5.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//362
initialize({4.000000,1.000000,2.000000,3.000000,6.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//363
initialize({4.000000,1.000000,2.000000,5.000000,3.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//364
initialize({4.000000,1.000000,2.000000,5.000000,6.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//365
initialize({4.000000,1.000000,2.000000,6.000000,3.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//366
initialize({4.000000,1.000000,2.000000,6.000000,5.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//367
initialize({4.000000,1.000000,3.000000,2.000000,5.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//368
initialize({4.000000,1.000000,3.000000,2.000000,6.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//369
initialize({4.000000,1.000000,3.000000,5.000000,2.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//370
initialize({4.000000,1.000000,3.000000,5.000000,6.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//371
initialize({4.000000,1.000000,3.000000,6.000000,2.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//372
initialize({4.000000,1.000000,3.000000,6.000000,5.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//373
initialize({4.000000,1.000000,5.000000,2.000000,3.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//374
initialize({4.000000,1.000000,5.000000,2.000000,6.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//375
initialize({4.000000,1.000000,5.000000,3.000000,2.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//376
initialize({4.000000,1.000000,5.000000,3.000000,6.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//377
initialize({4.000000,1.000000,5.000000,6.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//378
initialize({4.000000,1.000000,5.000000,6.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//379
initialize({4.000000,1.000000,6.000000,2.000000,3.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//380
initialize({4.000000,1.000000,6.000000,2.000000,5.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//381
initialize({4.000000,1.000000,6.000000,3.000000,2.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//382
initialize({4.000000,1.000000,6.000000,3.000000,5.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//383
initialize({4.000000,1.000000,6.000000,5.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//384
initialize({4.000000,1.000000,6.000000,5.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//385
initialize({4.000000,2.000000,1.000000,3.000000,5.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//386
initialize({4.000000,2.000000,1.000000,3.000000,6.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//387
initialize({4.000000,2.000000,1.000000,5.000000,3.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//388
initialize({4.000000,2.000000,1.000000,5.000000,6.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//389
initialize({4.000000,2.000000,1.000000,6.000000,3.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//390
initialize({4.000000,2.000000,1.000000,6.000000,5.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//391
initialize({4.000000,2.000000,3.000000,1.000000,5.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//392
initialize({4.000000,2.000000,3.000000,1.000000,6.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//393
initialize({4.000000,2.000000,3.000000,5.000000,1.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//394
initialize({4.000000,2.000000,3.000000,5.000000,6.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//395
initialize({4.000000,2.000000,3.000000,6.000000,1.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//396
initialize({4.000000,2.000000,3.000000,6.000000,5.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//397
initialize({4.000000,2.000000,5.000000,1.000000,3.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//398
initialize({4.000000,2.000000,5.000000,1.000000,6.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//399
initialize({4.000000,2.000000,5.000000,3.000000,1.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//400
initialize({4.000000,2.000000,5.000000,3.000000,6.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//401
initialize({4.000000,2.000000,5.000000,6.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//402
initialize({4.000000,2.000000,5.000000,6.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//403
initialize({4.000000,2.000000,6.000000,1.000000,3.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//404
initialize({4.000000,2.000000,6.000000,1.000000,5.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//405
initialize({4.000000,2.000000,6.000000,3.000000,1.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//406
initialize({4.000000,2.000000,6.000000,3.000000,5.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//407
initialize({4.000000,2.000000,6.000000,5.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//408
initialize({4.000000,2.000000,6.000000,5.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//409
initialize({4.000000,3.000000,1.000000,2.000000,5.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//410
initialize({4.000000,3.000000,1.000000,2.000000,6.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//411
initialize({4.000000,3.000000,1.000000,5.000000,2.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//412
initialize({4.000000,3.000000,1.000000,5.000000,6.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//413
initialize({4.000000,3.000000,1.000000,6.000000,2.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//414
initialize({4.000000,3.000000,1.000000,6.000000,5.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//415
initialize({4.000000,3.000000,2.000000,1.000000,5.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//416
initialize({4.000000,3.000000,2.000000,1.000000,6.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//417
initialize({4.000000,3.000000,2.000000,5.000000,1.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//418
initialize({4.000000,3.000000,2.000000,5.000000,6.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//419
initialize({4.000000,3.000000,2.000000,6.000000,1.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//420
initialize({4.000000,3.000000,2.000000,6.000000,5.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//421
initialize({4.000000,3.000000,5.000000,1.000000,2.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//422
initialize({4.000000,3.000000,5.000000,1.000000,6.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//423
initialize({4.000000,3.000000,5.000000,2.000000,1.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//424
initialize({4.000000,3.000000,5.000000,2.000000,6.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//425
initialize({4.000000,3.000000,5.000000,6.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//426
initialize({4.000000,3.000000,5.000000,6.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//427
initialize({4.000000,3.000000,6.000000,1.000000,2.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//428
initialize({4.000000,3.000000,6.000000,1.000000,5.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//429
initialize({4.000000,3.000000,6.000000,2.000000,1.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//430
initialize({4.000000,3.000000,6.000000,2.000000,5.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//431
initialize({4.000000,3.000000,6.000000,5.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//432
initialize({4.000000,3.000000,6.000000,5.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//433
initialize({4.000000,5.000000,1.000000,2.000000,3.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//434
initialize({4.000000,5.000000,1.000000,2.000000,6.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//435
initialize({4.000000,5.000000,1.000000,3.000000,2.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//436
initialize({4.000000,5.000000,1.000000,3.000000,6.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//437
initialize({4.000000,5.000000,1.000000,6.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//438
initialize({4.000000,5.000000,1.000000,6.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//439
initialize({4.000000,5.000000,2.000000,1.000000,3.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//440
initialize({4.000000,5.000000,2.000000,1.000000,6.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//441
initialize({4.000000,5.000000,2.000000,3.000000,1.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//442
initialize({4.000000,5.000000,2.000000,3.000000,6.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//443
initialize({4.000000,5.000000,2.000000,6.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//444
initialize({4.000000,5.000000,2.000000,6.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//445
initialize({4.000000,5.000000,3.000000,1.000000,2.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//446
initialize({4.000000,5.000000,3.000000,1.000000,6.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//447
initialize({4.000000,5.000000,3.000000,2.000000,1.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//448
initialize({4.000000,5.000000,3.000000,2.000000,6.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//449
initialize({4.000000,5.000000,3.000000,6.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//450
initialize({4.000000,5.000000,3.000000,6.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//451
initialize({4.000000,5.000000,6.000000,1.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//452
initialize({4.000000,5.000000,6.000000,1.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//453
initialize({4.000000,5.000000,6.000000,2.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//454
initialize({4.000000,5.000000,6.000000,2.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//455
initialize({4.000000,5.000000,6.000000,3.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//456
initialize({4.000000,5.000000,6.000000,3.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//457
initialize({4.000000,6.000000,1.000000,2.000000,3.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//458
initialize({4.000000,6.000000,1.000000,2.000000,5.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//459
initialize({4.000000,6.000000,1.000000,3.000000,2.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//460
initialize({4.000000,6.000000,1.000000,3.000000,5.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//461
initialize({4.000000,6.000000,1.000000,5.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//462
initialize({4.000000,6.000000,1.000000,5.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//463
initialize({4.000000,6.000000,2.000000,1.000000,3.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//464
initialize({4.000000,6.000000,2.000000,1.000000,5.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//465
initialize({4.000000,6.000000,2.000000,3.000000,1.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//466
initialize({4.000000,6.000000,2.000000,3.000000,5.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//467
initialize({4.000000,6.000000,2.000000,5.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//468
initialize({4.000000,6.000000,2.000000,5.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//469
initialize({4.000000,6.000000,3.000000,1.000000,2.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//470
initialize({4.000000,6.000000,3.000000,1.000000,5.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//471
initialize({4.000000,6.000000,3.000000,2.000000,1.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//472
initialize({4.000000,6.000000,3.000000,2.000000,5.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//473
initialize({4.000000,6.000000,3.000000,5.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//474
initialize({4.000000,6.000000,3.000000,5.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//475
initialize({4.000000,6.000000,5.000000,1.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//476
initialize({4.000000,6.000000,5.000000,1.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//477
initialize({4.000000,6.000000,5.000000,2.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//478
initialize({4.000000,6.000000,5.000000,2.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//479
initialize({4.000000,6.000000,5.000000,3.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//480
initialize({4.000000,6.000000,5.000000,3.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//481
initialize({5.000000,1.000000,2.000000,3.000000,4.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//482
initialize({5.000000,1.000000,2.000000,3.000000,6.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//483
initialize({5.000000,1.000000,2.000000,4.000000,3.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//484
initialize({5.000000,1.000000,2.000000,4.000000,6.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//485
initialize({5.000000,1.000000,2.000000,6.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//486
initialize({5.000000,1.000000,2.000000,6.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//487
initialize({5.000000,1.000000,3.000000,2.000000,4.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//488
initialize({5.000000,1.000000,3.000000,2.000000,6.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//489
initialize({5.000000,1.000000,3.000000,4.000000,2.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//490
initialize({5.000000,1.000000,3.000000,4.000000,6.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//491
initialize({5.000000,1.000000,3.000000,6.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//492
initialize({5.000000,1.000000,3.000000,6.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//493
initialize({5.000000,1.000000,4.000000,2.000000,3.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//494
initialize({5.000000,1.000000,4.000000,2.000000,6.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//495
initialize({5.000000,1.000000,4.000000,3.000000,2.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//496
initialize({5.000000,1.000000,4.000000,3.000000,6.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//497
initialize({5.000000,1.000000,4.000000,6.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//498
initialize({5.000000,1.000000,4.000000,6.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//499
initialize({5.000000,1.000000,6.000000,2.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//500
initialize({5.000000,1.000000,6.000000,2.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//501
initialize({5.000000,1.000000,6.000000,3.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//502
initialize({5.000000,1.000000,6.000000,3.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//503
initialize({5.000000,1.000000,6.000000,4.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//504
initialize({5.000000,1.000000,6.000000,4.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//505
initialize({5.000000,2.000000,1.000000,3.000000,4.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//506
initialize({5.000000,2.000000,1.000000,3.000000,6.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//507
initialize({5.000000,2.000000,1.000000,4.000000,3.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//508
initialize({5.000000,2.000000,1.000000,4.000000,6.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//509
initialize({5.000000,2.000000,1.000000,6.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//510
initialize({5.000000,2.000000,1.000000,6.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//511
initialize({5.000000,2.000000,3.000000,1.000000,4.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//512
initialize({5.000000,2.000000,3.000000,1.000000,6.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//513
initialize({5.000000,2.000000,3.000000,4.000000,1.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//514
initialize({5.000000,2.000000,3.000000,4.000000,6.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//515
initialize({5.000000,2.000000,3.000000,6.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//516
initialize({5.000000,2.000000,3.000000,6.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//517
initialize({5.000000,2.000000,4.000000,1.000000,3.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//518
initialize({5.000000,2.000000,4.000000,1.000000,6.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//519
initialize({5.000000,2.000000,4.000000,3.000000,1.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//520
initialize({5.000000,2.000000,4.000000,3.000000,6.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//521
initialize({5.000000,2.000000,4.000000,6.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//522
initialize({5.000000,2.000000,4.000000,6.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//523
initialize({5.000000,2.000000,6.000000,1.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//524
initialize({5.000000,2.000000,6.000000,1.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//525
initialize({5.000000,2.000000,6.000000,3.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//526
initialize({5.000000,2.000000,6.000000,3.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//527
initialize({5.000000,2.000000,6.000000,4.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//528
initialize({5.000000,2.000000,6.000000,4.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//529
initialize({5.000000,3.000000,1.000000,2.000000,4.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//530
initialize({5.000000,3.000000,1.000000,2.000000,6.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//531
initialize({5.000000,3.000000,1.000000,4.000000,2.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//532
initialize({5.000000,3.000000,1.000000,4.000000,6.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//533
initialize({5.000000,3.000000,1.000000,6.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//534
initialize({5.000000,3.000000,1.000000,6.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//535
initialize({5.000000,3.000000,2.000000,1.000000,4.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//536
initialize({5.000000,3.000000,2.000000,1.000000,6.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//537
initialize({5.000000,3.000000,2.000000,4.000000,1.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//538
initialize({5.000000,3.000000,2.000000,4.000000,6.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//539
initialize({5.000000,3.000000,2.000000,6.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//540
initialize({5.000000,3.000000,2.000000,6.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//541
initialize({5.000000,3.000000,4.000000,1.000000,2.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//542
initialize({5.000000,3.000000,4.000000,1.000000,6.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//543
initialize({5.000000,3.000000,4.000000,2.000000,1.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//544
initialize({5.000000,3.000000,4.000000,2.000000,6.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//545
initialize({5.000000,3.000000,4.000000,6.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//546
initialize({5.000000,3.000000,4.000000,6.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//547
initialize({5.000000,3.000000,6.000000,1.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//548
initialize({5.000000,3.000000,6.000000,1.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//549
initialize({5.000000,3.000000,6.000000,2.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//550
initialize({5.000000,3.000000,6.000000,2.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//551
initialize({5.000000,3.000000,6.000000,4.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//552
initialize({5.000000,3.000000,6.000000,4.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//553
initialize({5.000000,4.000000,1.000000,2.000000,3.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//554
initialize({5.000000,4.000000,1.000000,2.000000,6.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//555
initialize({5.000000,4.000000,1.000000,3.000000,2.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//556
initialize({5.000000,4.000000,1.000000,3.000000,6.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//557
initialize({5.000000,4.000000,1.000000,6.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//558
initialize({5.000000,4.000000,1.000000,6.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//559
initialize({5.000000,4.000000,2.000000,1.000000,3.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//560
initialize({5.000000,4.000000,2.000000,1.000000,6.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//561
initialize({5.000000,4.000000,2.000000,3.000000,1.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//562
initialize({5.000000,4.000000,2.000000,3.000000,6.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//563
initialize({5.000000,4.000000,2.000000,6.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//564
initialize({5.000000,4.000000,2.000000,6.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//565
initialize({5.000000,4.000000,3.000000,1.000000,2.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//566
initialize({5.000000,4.000000,3.000000,1.000000,6.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//567
initialize({5.000000,4.000000,3.000000,2.000000,1.000000,6.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//568
initialize({5.000000,4.000000,3.000000,2.000000,6.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//569
initialize({5.000000,4.000000,3.000000,6.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//570
initialize({5.000000,4.000000,3.000000,6.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//571
initialize({5.000000,4.000000,6.000000,1.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//572
initialize({5.000000,4.000000,6.000000,1.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//573
initialize({5.000000,4.000000,6.000000,2.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//574
initialize({5.000000,4.000000,6.000000,2.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//575
initialize({5.000000,4.000000,6.000000,3.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//576
initialize({5.000000,4.000000,6.000000,3.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//577
initialize({5.000000,6.000000,1.000000,2.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//578
initialize({5.000000,6.000000,1.000000,2.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//579
initialize({5.000000,6.000000,1.000000,3.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//580
initialize({5.000000,6.000000,1.000000,3.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//581
initialize({5.000000,6.000000,1.000000,4.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//582
initialize({5.000000,6.000000,1.000000,4.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//583
initialize({5.000000,6.000000,2.000000,1.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//584
initialize({5.000000,6.000000,2.000000,1.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//585
initialize({5.000000,6.000000,2.000000,3.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//586
initialize({5.000000,6.000000,2.000000,3.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//587
initialize({5.000000,6.000000,2.000000,4.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//588
initialize({5.000000,6.000000,2.000000,4.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//589
initialize({5.000000,6.000000,3.000000,1.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//590
initialize({5.000000,6.000000,3.000000,1.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//591
initialize({5.000000,6.000000,3.000000,2.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//592
initialize({5.000000,6.000000,3.000000,2.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//593
initialize({5.000000,6.000000,3.000000,4.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//594
initialize({5.000000,6.000000,3.000000,4.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//595
initialize({5.000000,6.000000,4.000000,1.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//596
initialize({5.000000,6.000000,4.000000,1.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//597
initialize({5.000000,6.000000,4.000000,2.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//598
initialize({5.000000,6.000000,4.000000,2.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//599
initialize({5.000000,6.000000,4.000000,3.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//600
initialize({5.000000,6.000000,4.000000,3.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//601
initialize({6.000000,1.000000,2.000000,3.000000,4.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//602
initialize({6.000000,1.000000,2.000000,3.000000,5.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//603
initialize({6.000000,1.000000,2.000000,4.000000,3.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//604
initialize({6.000000,1.000000,2.000000,4.000000,5.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//605
initialize({6.000000,1.000000,2.000000,5.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//606
initialize({6.000000,1.000000,2.000000,5.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//607
initialize({6.000000,1.000000,3.000000,2.000000,4.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//608
initialize({6.000000,1.000000,3.000000,2.000000,5.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//609
initialize({6.000000,1.000000,3.000000,4.000000,2.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//610
initialize({6.000000,1.000000,3.000000,4.000000,5.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//611
initialize({6.000000,1.000000,3.000000,5.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//612
initialize({6.000000,1.000000,3.000000,5.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//613
initialize({6.000000,1.000000,4.000000,2.000000,3.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//614
initialize({6.000000,1.000000,4.000000,2.000000,5.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//615
initialize({6.000000,1.000000,4.000000,3.000000,2.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//616
initialize({6.000000,1.000000,4.000000,3.000000,5.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//617
initialize({6.000000,1.000000,4.000000,5.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//618
initialize({6.000000,1.000000,4.000000,5.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//619
initialize({6.000000,1.000000,5.000000,2.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//620
initialize({6.000000,1.000000,5.000000,2.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//621
initialize({6.000000,1.000000,5.000000,3.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//622
initialize({6.000000,1.000000,5.000000,3.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//623
initialize({6.000000,1.000000,5.000000,4.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//624
initialize({6.000000,1.000000,5.000000,4.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//625
initialize({6.000000,2.000000,1.000000,3.000000,4.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//626
initialize({6.000000,2.000000,1.000000,3.000000,5.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//627
initialize({6.000000,2.000000,1.000000,4.000000,3.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//628
initialize({6.000000,2.000000,1.000000,4.000000,5.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//629
initialize({6.000000,2.000000,1.000000,5.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//630
initialize({6.000000,2.000000,1.000000,5.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//631
initialize({6.000000,2.000000,3.000000,1.000000,4.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//632
initialize({6.000000,2.000000,3.000000,1.000000,5.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//633
initialize({6.000000,2.000000,3.000000,4.000000,1.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//634
initialize({6.000000,2.000000,3.000000,4.000000,5.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//635
initialize({6.000000,2.000000,3.000000,5.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//636
initialize({6.000000,2.000000,3.000000,5.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//637
initialize({6.000000,2.000000,4.000000,1.000000,3.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//638
initialize({6.000000,2.000000,4.000000,1.000000,5.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//639
initialize({6.000000,2.000000,4.000000,3.000000,1.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//640
initialize({6.000000,2.000000,4.000000,3.000000,5.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//641
initialize({6.000000,2.000000,4.000000,5.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//642
initialize({6.000000,2.000000,4.000000,5.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//643
initialize({6.000000,2.000000,5.000000,1.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//644
initialize({6.000000,2.000000,5.000000,1.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//645
initialize({6.000000,2.000000,5.000000,3.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//646
initialize({6.000000,2.000000,5.000000,3.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//647
initialize({6.000000,2.000000,5.000000,4.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//648
initialize({6.000000,2.000000,5.000000,4.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//649
initialize({6.000000,3.000000,1.000000,2.000000,4.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//650
initialize({6.000000,3.000000,1.000000,2.000000,5.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//651
initialize({6.000000,3.000000,1.000000,4.000000,2.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//652
initialize({6.000000,3.000000,1.000000,4.000000,5.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//653
initialize({6.000000,3.000000,1.000000,5.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//654
initialize({6.000000,3.000000,1.000000,5.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//655
initialize({6.000000,3.000000,2.000000,1.000000,4.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//656
initialize({6.000000,3.000000,2.000000,1.000000,5.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//657
initialize({6.000000,3.000000,2.000000,4.000000,1.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//658
initialize({6.000000,3.000000,2.000000,4.000000,5.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//659
initialize({6.000000,3.000000,2.000000,5.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//660
initialize({6.000000,3.000000,2.000000,5.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//661
initialize({6.000000,3.000000,4.000000,1.000000,2.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//662
initialize({6.000000,3.000000,4.000000,1.000000,5.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//663
initialize({6.000000,3.000000,4.000000,2.000000,1.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//664
initialize({6.000000,3.000000,4.000000,2.000000,5.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//665
initialize({6.000000,3.000000,4.000000,5.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//666
initialize({6.000000,3.000000,4.000000,5.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//667
initialize({6.000000,3.000000,5.000000,1.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//668
initialize({6.000000,3.000000,5.000000,1.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//669
initialize({6.000000,3.000000,5.000000,2.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//670
initialize({6.000000,3.000000,5.000000,2.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//671
initialize({6.000000,3.000000,5.000000,4.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//672
initialize({6.000000,3.000000,5.000000,4.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//673
initialize({6.000000,4.000000,1.000000,2.000000,3.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//674
initialize({6.000000,4.000000,1.000000,2.000000,5.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//675
initialize({6.000000,4.000000,1.000000,3.000000,2.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//676
initialize({6.000000,4.000000,1.000000,3.000000,5.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//677
initialize({6.000000,4.000000,1.000000,5.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//678
initialize({6.000000,4.000000,1.000000,5.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//679
initialize({6.000000,4.000000,2.000000,1.000000,3.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//680
initialize({6.000000,4.000000,2.000000,1.000000,5.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//681
initialize({6.000000,4.000000,2.000000,3.000000,1.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//682
initialize({6.000000,4.000000,2.000000,3.000000,5.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//683
initialize({6.000000,4.000000,2.000000,5.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//684
initialize({6.000000,4.000000,2.000000,5.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//685
initialize({6.000000,4.000000,3.000000,1.000000,2.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//686
initialize({6.000000,4.000000,3.000000,1.000000,5.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//687
initialize({6.000000,4.000000,3.000000,2.000000,1.000000,5.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//688
initialize({6.000000,4.000000,3.000000,2.000000,5.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//689
initialize({6.000000,4.000000,3.000000,5.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//690
initialize({6.000000,4.000000,3.000000,5.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//691
initialize({6.000000,4.000000,5.000000,1.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//692
initialize({6.000000,4.000000,5.000000,1.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//693
initialize({6.000000,4.000000,5.000000,2.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//694
initialize({6.000000,4.000000,5.000000,2.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//695
initialize({6.000000,4.000000,5.000000,3.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//696
initialize({6.000000,4.000000,5.000000,3.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//697
initialize({6.000000,5.000000,1.000000,2.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//698
initialize({6.000000,5.000000,1.000000,2.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//699
initialize({6.000000,5.000000,1.000000,3.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//700
initialize({6.000000,5.000000,1.000000,3.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//701
initialize({6.000000,5.000000,1.000000,4.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//702
initialize({6.000000,5.000000,1.000000,4.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//703
initialize({6.000000,5.000000,2.000000,1.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//704
initialize({6.000000,5.000000,2.000000,1.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//705
initialize({6.000000,5.000000,2.000000,3.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//706
initialize({6.000000,5.000000,2.000000,3.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//707
initialize({6.000000,5.000000,2.000000,4.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//708
initialize({6.000000,5.000000,2.000000,4.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//709
initialize({6.000000,5.000000,3.000000,1.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//710
initialize({6.000000,5.000000,3.000000,1.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//711
initialize({6.000000,5.000000,3.000000,2.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//712
initialize({6.000000,5.000000,3.000000,2.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//713
initialize({6.000000,5.000000,3.000000,4.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//714
initialize({6.000000,5.000000,3.000000,4.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//715
initialize({6.000000,5.000000,4.000000,1.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//716
initialize({6.000000,5.000000,4.000000,1.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//717
initialize({6.000000,5.000000,4.000000,2.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//718
initialize({6.000000,5.000000,4.000000,2.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//719
initialize({6.000000,5.000000,4.000000,3.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//720
initialize({6.000000,5.000000,4.000000,3.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
std::cerr << "test_merge_sort_case_6()" << " - OK.\n";
}
void test_merge_sort_case_7()
{
std::initializer_list<float> list = {1.000000,2.000000,3.000000,4.000000,5.000000,6.000000,7.000000,8.000000,9.000000,10.000000,11.000000,12.000000,13.000000,14.000000,15.000000};
size_t N = list.size();
int32_t operations = 0;
bool increasing = true;
float A[N];
display(list);
//1
initialize({1.000000,2.000000,3.000000,4.000000,5.000000,6.000000,7.000000,8.000000,9.000000,10.000000,11.000000,12.000000,13.000000,14.000000,15.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
std::cerr << "test_merge_sort_case_7()" << " - OK.\n";
}
void test_merge_sort_case_8()
{
std::initializer_list<float> list = {1.000000,1.000000};
size_t N = list.size();
int32_t operations = 0;
bool increasing = true;
float A[N];
display(list);
//1
initialize({1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//2
initialize({1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
std::cerr << "test_merge_sort_case_8()" << " - OK.\n";
}
void test_merge_sort_case_9()
{
std::initializer_list<float> list = {1.000000,1.000000,2.000000};
size_t N = list.size();
int32_t operations = 0;
bool increasing = true;
float A[N];
display(list);
//1
initialize({1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//2
initialize({1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//3
initialize({1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//4
initialize({1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//5
initialize({2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//6
initialize({2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
std::cerr << "test_merge_sort_case_9()" << " - OK.\n";
}
void test_merge_sort_case_10()
{
std::initializer_list<float> list = {1.000000,1.000000,1.000000,3.000000};
size_t N = list.size();
int32_t operations = 0;
bool increasing = true;
float A[N];
display(list);
//1
initialize({1.000000,1.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//2
initialize({1.000000,1.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//3
initialize({1.000000,1.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//4
initialize({1.000000,1.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//5
initialize({1.000000,3.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//6
initialize({1.000000,3.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//7
initialize({1.000000,1.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//8
initialize({1.000000,1.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//9
initialize({1.000000,1.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//10
initialize({1.000000,1.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//11
initialize({1.000000,3.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//12
initialize({1.000000,3.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//13
initialize({1.000000,1.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//14
initialize({1.000000,1.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//15
initialize({1.000000,1.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//16
initialize({1.000000,1.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//17
initialize({1.000000,3.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//18
initialize({1.000000,3.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//19
initialize({3.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//20
initialize({3.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//21
initialize({3.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//22
initialize({3.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//23
initialize({3.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//24
initialize({3.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
std::cerr << "test_merge_sort_case_10()" << " - OK.\n";
}
void test_merge_sort_case_11()
{
std::initializer_list<float> list = {1.000000,1.000000,2.000000};
size_t N = list.size();
int32_t operations = 0;
bool increasing = true;
float A[N];
display(list);
//1
initialize({1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//2
initialize({1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//3
initialize({1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//4
initialize({1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//5
initialize({2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//6
initialize({2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
std::cerr << "test_merge_sort_case_11()" << " - OK.\n";
}
void test_merge_sort_case_12()
{
std::initializer_list<float> list = {1.000000,3.000000,3.000000,3.000000};
size_t N = list.size();
int32_t operations = 0;
bool increasing = true;
float A[N];
display(list);
//1
initialize({1.000000,3.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//2
initialize({1.000000,3.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//3
initialize({1.000000,3.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//4
initialize({1.000000,3.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//5
initialize({1.000000,3.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//6
initialize({1.000000,3.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//7
initialize({3.000000,1.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//8
initialize({3.000000,1.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//9
initialize({3.000000,3.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//10
initialize({3.000000,3.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//11
initialize({3.000000,3.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//12
initialize({3.000000,3.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//13
initialize({3.000000,1.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//14
initialize({3.000000,1.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//15
initialize({3.000000,3.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//16
initialize({3.000000,3.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//17
initialize({3.000000,3.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//18
initialize({3.000000,3.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//19
initialize({3.000000,1.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//20
initialize({3.000000,1.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//21
initialize({3.000000,3.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//22
initialize({3.000000,3.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//23
initialize({3.000000,3.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//24
initialize({3.000000,3.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
std::cerr << "test_merge_sort_case_12()" << " - OK.\n";
}
void test_merge_sort_case_13()
{
std::initializer_list<float> list = {1.000000,2.000000,3.000000,3.000000};
size_t N = list.size();
int32_t operations = 0;
bool increasing = true;
float A[N];
display(list);
//1
initialize({1.000000,2.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//2
initialize({1.000000,2.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//3
initialize({1.000000,3.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//4
initialize({1.000000,3.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//5
initialize({1.000000,3.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//6
initialize({1.000000,3.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//7
initialize({2.000000,1.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//8
initialize({2.000000,1.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//9
initialize({2.000000,3.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//10
initialize({2.000000,3.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//11
initialize({2.000000,3.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//12
initialize({2.000000,3.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//13
initialize({3.000000,1.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//14
initialize({3.000000,1.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//15
initialize({3.000000,2.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//16
initialize({3.000000,2.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//17
initialize({3.000000,3.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//18
initialize({3.000000,3.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//19
initialize({3.000000,1.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//20
initialize({3.000000,1.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//21
initialize({3.000000,2.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//22
initialize({3.000000,2.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//23
initialize({3.000000,3.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//24
initialize({3.000000,3.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
std::cerr << "test_merge_sort_case_13()" << " - OK.\n";
}
void test_merge_sort_case_14()
{
std::initializer_list<float> list = {1.000000,1.000000,2.000000,2.000000};
size_t N = list.size();
int32_t operations = 0;
bool increasing = true;
float A[N];
display(list);
//1
initialize({1.000000,1.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//2
initialize({1.000000,1.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//3
initialize({1.000000,2.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//4
initialize({1.000000,2.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//5
initialize({1.000000,2.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//6
initialize({1.000000,2.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//7
initialize({1.000000,1.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//8
initialize({1.000000,1.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//9
initialize({1.000000,2.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//10
initialize({1.000000,2.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//11
initialize({1.000000,2.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//12
initialize({1.000000,2.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//13
initialize({2.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//14
initialize({2.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//15
initialize({2.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//16
initialize({2.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//17
initialize({2.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//18
initialize({2.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//19
initialize({2.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//20
initialize({2.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//21
initialize({2.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//22
initialize({2.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//23
initialize({2.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//24
initialize({2.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
std::cerr << "test_merge_sort_case_14()" << " - OK.\n";
}
void test_merge_sort_case_15()
{
std::initializer_list<float> list = {1.000000,1.000000,2.000000,3.000000};
size_t N = list.size();
int32_t operations = 0;
bool increasing = true;
float A[N];
display(list);
//1
initialize({1.000000,1.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//2
initialize({1.000000,1.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//3
initialize({1.000000,2.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//4
initialize({1.000000,2.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//5
initialize({1.000000,3.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//6
initialize({1.000000,3.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//7
initialize({1.000000,1.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//8
initialize({1.000000,1.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//9
initialize({1.000000,2.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//10
initialize({1.000000,2.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//11
initialize({1.000000,3.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//12
initialize({1.000000,3.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//13
initialize({2.000000,1.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//14
initialize({2.000000,1.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//15
initialize({2.000000,1.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//16
initialize({2.000000,1.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//17
initialize({2.000000,3.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//18
initialize({2.000000,3.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//19
initialize({3.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//20
initialize({3.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//21
initialize({3.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//22
initialize({3.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//23
initialize({3.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//24
initialize({3.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
std::cerr << "test_merge_sort_case_15()" << " - OK.\n";
}
void test_merge_sort_case_16()
{
std::initializer_list<float> list = {1.000000,1.000000,1.000000,2.000000};
size_t N = list.size();
int32_t operations = 0;
bool increasing = true;
float A[N];
display(list);
//1
initialize({1.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//2
initialize({1.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//3
initialize({1.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//4
initialize({1.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//5
initialize({1.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//6
initialize({1.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//7
initialize({1.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//8
initialize({1.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//9
initialize({1.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//10
initialize({1.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//11
initialize({1.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//12
initialize({1.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//13
initialize({1.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//14
initialize({1.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//15
initialize({1.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//16
initialize({1.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//17
initialize({1.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//18
initialize({1.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//19
initialize({2.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//20
initialize({2.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//21
initialize({2.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//22
initialize({2.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//23
initialize({2.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//24
initialize({2.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
std::cerr << "test_merge_sort_case_16()" << " - OK.\n";
}
void test_merge_sort_case_17()
{
std::initializer_list<float> list = {1.000000,4.000000,4.000000,4.000000,4.000000};
size_t N = list.size();
int32_t operations = 0;
bool increasing = true;
float A[N];
display(list);
//1
initialize({1.000000,4.000000,4.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//2
initialize({1.000000,4.000000,4.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//3
initialize({1.000000,4.000000,4.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//4
initialize({1.000000,4.000000,4.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//5
initialize({1.000000,4.000000,4.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//6
initialize({1.000000,4.000000,4.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//7
initialize({1.000000,4.000000,4.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//8
initialize({1.000000,4.000000,4.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//9
initialize({1.000000,4.000000,4.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//10
initialize({1.000000,4.000000,4.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//11
initialize({1.000000,4.000000,4.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//12
initialize({1.000000,4.000000,4.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//13
initialize({1.000000,4.000000,4.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//14
initialize({1.000000,4.000000,4.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//15
initialize({1.000000,4.000000,4.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//16
initialize({1.000000,4.000000,4.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//17
initialize({1.000000,4.000000,4.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//18
initialize({1.000000,4.000000,4.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//19
initialize({1.000000,4.000000,4.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//20
initialize({1.000000,4.000000,4.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//21
initialize({1.000000,4.000000,4.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//22
initialize({1.000000,4.000000,4.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//23
initialize({1.000000,4.000000,4.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//24
initialize({1.000000,4.000000,4.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//25
initialize({4.000000,1.000000,4.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//26
initialize({4.000000,1.000000,4.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//27
initialize({4.000000,1.000000,4.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//28
initialize({4.000000,1.000000,4.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//29
initialize({4.000000,1.000000,4.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//30
initialize({4.000000,1.000000,4.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//31
initialize({4.000000,4.000000,1.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//32
initialize({4.000000,4.000000,1.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//33
initialize({4.000000,4.000000,4.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//34
initialize({4.000000,4.000000,4.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//35
initialize({4.000000,4.000000,4.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//36
initialize({4.000000,4.000000,4.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//37
initialize({4.000000,4.000000,1.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//38
initialize({4.000000,4.000000,1.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//39
initialize({4.000000,4.000000,4.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//40
initialize({4.000000,4.000000,4.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//41
initialize({4.000000,4.000000,4.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//42
initialize({4.000000,4.000000,4.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//43
initialize({4.000000,4.000000,1.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//44
initialize({4.000000,4.000000,1.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//45
initialize({4.000000,4.000000,4.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//46
initialize({4.000000,4.000000,4.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//47
initialize({4.000000,4.000000,4.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//48
initialize({4.000000,4.000000,4.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//49
initialize({4.000000,1.000000,4.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//50
initialize({4.000000,1.000000,4.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//51
initialize({4.000000,1.000000,4.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//52
initialize({4.000000,1.000000,4.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//53
initialize({4.000000,1.000000,4.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//54
initialize({4.000000,1.000000,4.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//55
initialize({4.000000,4.000000,1.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//56
initialize({4.000000,4.000000,1.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//57
initialize({4.000000,4.000000,4.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//58
initialize({4.000000,4.000000,4.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//59
initialize({4.000000,4.000000,4.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//60
initialize({4.000000,4.000000,4.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//61
initialize({4.000000,4.000000,1.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//62
initialize({4.000000,4.000000,1.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//63
initialize({4.000000,4.000000,4.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//64
initialize({4.000000,4.000000,4.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//65
initialize({4.000000,4.000000,4.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//66
initialize({4.000000,4.000000,4.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//67
initialize({4.000000,4.000000,1.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//68
initialize({4.000000,4.000000,1.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//69
initialize({4.000000,4.000000,4.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//70
initialize({4.000000,4.000000,4.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//71
initialize({4.000000,4.000000,4.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//72
initialize({4.000000,4.000000,4.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//73
initialize({4.000000,1.000000,4.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//74
initialize({4.000000,1.000000,4.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//75
initialize({4.000000,1.000000,4.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//76
initialize({4.000000,1.000000,4.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//77
initialize({4.000000,1.000000,4.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//78
initialize({4.000000,1.000000,4.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//79
initialize({4.000000,4.000000,1.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//80
initialize({4.000000,4.000000,1.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//81
initialize({4.000000,4.000000,4.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//82
initialize({4.000000,4.000000,4.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//83
initialize({4.000000,4.000000,4.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//84
initialize({4.000000,4.000000,4.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//85
initialize({4.000000,4.000000,1.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//86
initialize({4.000000,4.000000,1.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//87
initialize({4.000000,4.000000,4.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//88
initialize({4.000000,4.000000,4.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//89
initialize({4.000000,4.000000,4.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//90
initialize({4.000000,4.000000,4.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//91
initialize({4.000000,4.000000,1.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//92
initialize({4.000000,4.000000,1.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//93
initialize({4.000000,4.000000,4.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//94
initialize({4.000000,4.000000,4.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//95
initialize({4.000000,4.000000,4.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//96
initialize({4.000000,4.000000,4.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//97
initialize({4.000000,1.000000,4.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//98
initialize({4.000000,1.000000,4.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//99
initialize({4.000000,1.000000,4.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//100
initialize({4.000000,1.000000,4.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//101
initialize({4.000000,1.000000,4.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//102
initialize({4.000000,1.000000,4.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//103
initialize({4.000000,4.000000,1.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//104
initialize({4.000000,4.000000,1.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//105
initialize({4.000000,4.000000,4.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//106
initialize({4.000000,4.000000,4.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//107
initialize({4.000000,4.000000,4.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//108
initialize({4.000000,4.000000,4.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//109
initialize({4.000000,4.000000,1.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//110
initialize({4.000000,4.000000,1.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//111
initialize({4.000000,4.000000,4.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//112
initialize({4.000000,4.000000,4.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//113
initialize({4.000000,4.000000,4.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//114
initialize({4.000000,4.000000,4.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//115
initialize({4.000000,4.000000,1.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//116
initialize({4.000000,4.000000,1.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//117
initialize({4.000000,4.000000,4.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//118
initialize({4.000000,4.000000,4.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//119
initialize({4.000000,4.000000,4.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//120
initialize({4.000000,4.000000,4.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
std::cerr << "test_merge_sort_case_17()" << " - OK.\n";
}
void test_merge_sort_case_18()
{
std::initializer_list<float> list = {1.000000,2.000000,3.000000,4.000000,4.000000};
size_t N = list.size();
int32_t operations = 0;
bool increasing = true;
float A[N];
display(list);
//1
initialize({1.000000,2.000000,3.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//2
initialize({1.000000,2.000000,3.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//3
initialize({1.000000,2.000000,4.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//4
initialize({1.000000,2.000000,4.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//5
initialize({1.000000,2.000000,4.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//6
initialize({1.000000,2.000000,4.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//7
initialize({1.000000,3.000000,2.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//8
initialize({1.000000,3.000000,2.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//9
initialize({1.000000,3.000000,4.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//10
initialize({1.000000,3.000000,4.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//11
initialize({1.000000,3.000000,4.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//12
initialize({1.000000,3.000000,4.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//13
initialize({1.000000,4.000000,2.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//14
initialize({1.000000,4.000000,2.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//15
initialize({1.000000,4.000000,3.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//16
initialize({1.000000,4.000000,3.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//17
initialize({1.000000,4.000000,4.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//18
initialize({1.000000,4.000000,4.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//19
initialize({1.000000,4.000000,2.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//20
initialize({1.000000,4.000000,2.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//21
initialize({1.000000,4.000000,3.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//22
initialize({1.000000,4.000000,3.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//23
initialize({1.000000,4.000000,4.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//24
initialize({1.000000,4.000000,4.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//25
initialize({2.000000,1.000000,3.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//26
initialize({2.000000,1.000000,3.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//27
initialize({2.000000,1.000000,4.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//28
initialize({2.000000,1.000000,4.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//29
initialize({2.000000,1.000000,4.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//30
initialize({2.000000,1.000000,4.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//31
initialize({2.000000,3.000000,1.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//32
initialize({2.000000,3.000000,1.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//33
initialize({2.000000,3.000000,4.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//34
initialize({2.000000,3.000000,4.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//35
initialize({2.000000,3.000000,4.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//36
initialize({2.000000,3.000000,4.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//37
initialize({2.000000,4.000000,1.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//38
initialize({2.000000,4.000000,1.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//39
initialize({2.000000,4.000000,3.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//40
initialize({2.000000,4.000000,3.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//41
initialize({2.000000,4.000000,4.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//42
initialize({2.000000,4.000000,4.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//43
initialize({2.000000,4.000000,1.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//44
initialize({2.000000,4.000000,1.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//45
initialize({2.000000,4.000000,3.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//46
initialize({2.000000,4.000000,3.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//47
initialize({2.000000,4.000000,4.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//48
initialize({2.000000,4.000000,4.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//49
initialize({3.000000,1.000000,2.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//50
initialize({3.000000,1.000000,2.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//51
initialize({3.000000,1.000000,4.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//52
initialize({3.000000,1.000000,4.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//53
initialize({3.000000,1.000000,4.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//54
initialize({3.000000,1.000000,4.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//55
initialize({3.000000,2.000000,1.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//56
initialize({3.000000,2.000000,1.000000,4.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//57
initialize({3.000000,2.000000,4.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//58
initialize({3.000000,2.000000,4.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//59
initialize({3.000000,2.000000,4.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//60
initialize({3.000000,2.000000,4.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//61
initialize({3.000000,4.000000,1.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//62
initialize({3.000000,4.000000,1.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//63
initialize({3.000000,4.000000,2.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//64
initialize({3.000000,4.000000,2.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//65
initialize({3.000000,4.000000,4.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//66
initialize({3.000000,4.000000,4.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//67
initialize({3.000000,4.000000,1.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//68
initialize({3.000000,4.000000,1.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//69
initialize({3.000000,4.000000,2.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//70
initialize({3.000000,4.000000,2.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//71
initialize({3.000000,4.000000,4.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//72
initialize({3.000000,4.000000,4.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//73
initialize({4.000000,1.000000,2.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//74
initialize({4.000000,1.000000,2.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//75
initialize({4.000000,1.000000,3.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//76
initialize({4.000000,1.000000,3.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//77
initialize({4.000000,1.000000,4.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//78
initialize({4.000000,1.000000,4.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//79
initialize({4.000000,2.000000,1.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//80
initialize({4.000000,2.000000,1.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//81
initialize({4.000000,2.000000,3.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//82
initialize({4.000000,2.000000,3.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//83
initialize({4.000000,2.000000,4.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//84
initialize({4.000000,2.000000,4.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//85
initialize({4.000000,3.000000,1.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//86
initialize({4.000000,3.000000,1.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//87
initialize({4.000000,3.000000,2.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//88
initialize({4.000000,3.000000,2.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//89
initialize({4.000000,3.000000,4.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//90
initialize({4.000000,3.000000,4.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//91
initialize({4.000000,4.000000,1.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//92
initialize({4.000000,4.000000,1.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//93
initialize({4.000000,4.000000,2.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//94
initialize({4.000000,4.000000,2.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//95
initialize({4.000000,4.000000,3.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//96
initialize({4.000000,4.000000,3.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//97
initialize({4.000000,1.000000,2.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//98
initialize({4.000000,1.000000,2.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//99
initialize({4.000000,1.000000,3.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//100
initialize({4.000000,1.000000,3.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//101
initialize({4.000000,1.000000,4.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//102
initialize({4.000000,1.000000,4.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//103
initialize({4.000000,2.000000,1.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//104
initialize({4.000000,2.000000,1.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//105
initialize({4.000000,2.000000,3.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//106
initialize({4.000000,2.000000,3.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//107
initialize({4.000000,2.000000,4.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//108
initialize({4.000000,2.000000,4.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//109
initialize({4.000000,3.000000,1.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//110
initialize({4.000000,3.000000,1.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//111
initialize({4.000000,3.000000,2.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//112
initialize({4.000000,3.000000,2.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//113
initialize({4.000000,3.000000,4.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//114
initialize({4.000000,3.000000,4.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//115
initialize({4.000000,4.000000,1.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//116
initialize({4.000000,4.000000,1.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//117
initialize({4.000000,4.000000,2.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//118
initialize({4.000000,4.000000,2.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//119
initialize({4.000000,4.000000,3.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//120
initialize({4.000000,4.000000,3.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
std::cerr << "test_merge_sort_case_18()" << " - OK.\n";
}
void test_merge_sort_case_19()
{
std::initializer_list<float> list = {1.000000,2.000000,3.000000,3.000000,3.000000};
size_t N = list.size();
int32_t operations = 0;
bool increasing = true;
float A[N];
display(list);
//1
initialize({1.000000,2.000000,3.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//2
initialize({1.000000,2.000000,3.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//3
initialize({1.000000,2.000000,3.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//4
initialize({1.000000,2.000000,3.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//5
initialize({1.000000,2.000000,3.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//6
initialize({1.000000,2.000000,3.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//7
initialize({1.000000,3.000000,2.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//8
initialize({1.000000,3.000000,2.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//9
initialize({1.000000,3.000000,3.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//10
initialize({1.000000,3.000000,3.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//11
initialize({1.000000,3.000000,3.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//12
initialize({1.000000,3.000000,3.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//13
initialize({1.000000,3.000000,2.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//14
initialize({1.000000,3.000000,2.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//15
initialize({1.000000,3.000000,3.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//16
initialize({1.000000,3.000000,3.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//17
initialize({1.000000,3.000000,3.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//18
initialize({1.000000,3.000000,3.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//19
initialize({1.000000,3.000000,2.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//20
initialize({1.000000,3.000000,2.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//21
initialize({1.000000,3.000000,3.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//22
initialize({1.000000,3.000000,3.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//23
initialize({1.000000,3.000000,3.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//24
initialize({1.000000,3.000000,3.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//25
initialize({2.000000,1.000000,3.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//26
initialize({2.000000,1.000000,3.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//27
initialize({2.000000,1.000000,3.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//28
initialize({2.000000,1.000000,3.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//29
initialize({2.000000,1.000000,3.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//30
initialize({2.000000,1.000000,3.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//31
initialize({2.000000,3.000000,1.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//32
initialize({2.000000,3.000000,1.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//33
initialize({2.000000,3.000000,3.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//34
initialize({2.000000,3.000000,3.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//35
initialize({2.000000,3.000000,3.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//36
initialize({2.000000,3.000000,3.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//37
initialize({2.000000,3.000000,1.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//38
initialize({2.000000,3.000000,1.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//39
initialize({2.000000,3.000000,3.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//40
initialize({2.000000,3.000000,3.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//41
initialize({2.000000,3.000000,3.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//42
initialize({2.000000,3.000000,3.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//43
initialize({2.000000,3.000000,1.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//44
initialize({2.000000,3.000000,1.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//45
initialize({2.000000,3.000000,3.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//46
initialize({2.000000,3.000000,3.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//47
initialize({2.000000,3.000000,3.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//48
initialize({2.000000,3.000000,3.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//49
initialize({3.000000,1.000000,2.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//50
initialize({3.000000,1.000000,2.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//51
initialize({3.000000,1.000000,3.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//52
initialize({3.000000,1.000000,3.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//53
initialize({3.000000,1.000000,3.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//54
initialize({3.000000,1.000000,3.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//55
initialize({3.000000,2.000000,1.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//56
initialize({3.000000,2.000000,1.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//57
initialize({3.000000,2.000000,3.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//58
initialize({3.000000,2.000000,3.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//59
initialize({3.000000,2.000000,3.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//60
initialize({3.000000,2.000000,3.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//61
initialize({3.000000,3.000000,1.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//62
initialize({3.000000,3.000000,1.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//63
initialize({3.000000,3.000000,2.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//64
initialize({3.000000,3.000000,2.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//65
initialize({3.000000,3.000000,3.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//66
initialize({3.000000,3.000000,3.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//67
initialize({3.000000,3.000000,1.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//68
initialize({3.000000,3.000000,1.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//69
initialize({3.000000,3.000000,2.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//70
initialize({3.000000,3.000000,2.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//71
initialize({3.000000,3.000000,3.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//72
initialize({3.000000,3.000000,3.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//73
initialize({3.000000,1.000000,2.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//74
initialize({3.000000,1.000000,2.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//75
initialize({3.000000,1.000000,3.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//76
initialize({3.000000,1.000000,3.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//77
initialize({3.000000,1.000000,3.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//78
initialize({3.000000,1.000000,3.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//79
initialize({3.000000,2.000000,1.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//80
initialize({3.000000,2.000000,1.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//81
initialize({3.000000,2.000000,3.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//82
initialize({3.000000,2.000000,3.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//83
initialize({3.000000,2.000000,3.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//84
initialize({3.000000,2.000000,3.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//85
initialize({3.000000,3.000000,1.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//86
initialize({3.000000,3.000000,1.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//87
initialize({3.000000,3.000000,2.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//88
initialize({3.000000,3.000000,2.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//89
initialize({3.000000,3.000000,3.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//90
initialize({3.000000,3.000000,3.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//91
initialize({3.000000,3.000000,1.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//92
initialize({3.000000,3.000000,1.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//93
initialize({3.000000,3.000000,2.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//94
initialize({3.000000,3.000000,2.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//95
initialize({3.000000,3.000000,3.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//96
initialize({3.000000,3.000000,3.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//97
initialize({3.000000,1.000000,2.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//98
initialize({3.000000,1.000000,2.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//99
initialize({3.000000,1.000000,3.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//100
initialize({3.000000,1.000000,3.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//101
initialize({3.000000,1.000000,3.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//102
initialize({3.000000,1.000000,3.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//103
initialize({3.000000,2.000000,1.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//104
initialize({3.000000,2.000000,1.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//105
initialize({3.000000,2.000000,3.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//106
initialize({3.000000,2.000000,3.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//107
initialize({3.000000,2.000000,3.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//108
initialize({3.000000,2.000000,3.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//109
initialize({3.000000,3.000000,1.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//110
initialize({3.000000,3.000000,1.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//111
initialize({3.000000,3.000000,2.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//112
initialize({3.000000,3.000000,2.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//113
initialize({3.000000,3.000000,3.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//114
initialize({3.000000,3.000000,3.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//115
initialize({3.000000,3.000000,1.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//116
initialize({3.000000,3.000000,1.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//117
initialize({3.000000,3.000000,2.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//118
initialize({3.000000,3.000000,2.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//119
initialize({3.000000,3.000000,3.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//120
initialize({3.000000,3.000000,3.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
std::cerr << "test_merge_sort_case_19()" << " - OK.\n";
}
void test_merge_sort_case_20()
{
std::initializer_list<float> list = {1.000000,2.000000,2.000000,2.000000,2.000000};
size_t N = list.size();
int32_t operations = 0;
bool increasing = true;
float A[N];
display(list);
//1
initialize({1.000000,2.000000,2.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//2
initialize({1.000000,2.000000,2.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//3
initialize({1.000000,2.000000,2.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//4
initialize({1.000000,2.000000,2.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//5
initialize({1.000000,2.000000,2.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//6
initialize({1.000000,2.000000,2.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//7
initialize({1.000000,2.000000,2.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//8
initialize({1.000000,2.000000,2.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//9
initialize({1.000000,2.000000,2.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//10
initialize({1.000000,2.000000,2.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//11
initialize({1.000000,2.000000,2.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//12
initialize({1.000000,2.000000,2.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//13
initialize({1.000000,2.000000,2.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//14
initialize({1.000000,2.000000,2.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//15
initialize({1.000000,2.000000,2.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//16
initialize({1.000000,2.000000,2.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//17
initialize({1.000000,2.000000,2.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//18
initialize({1.000000,2.000000,2.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//19
initialize({1.000000,2.000000,2.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//20
initialize({1.000000,2.000000,2.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//21
initialize({1.000000,2.000000,2.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//22
initialize({1.000000,2.000000,2.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//23
initialize({1.000000,2.000000,2.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//24
initialize({1.000000,2.000000,2.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//25
initialize({2.000000,1.000000,2.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//26
initialize({2.000000,1.000000,2.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//27
initialize({2.000000,1.000000,2.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//28
initialize({2.000000,1.000000,2.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//29
initialize({2.000000,1.000000,2.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//30
initialize({2.000000,1.000000,2.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//31
initialize({2.000000,2.000000,1.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//32
initialize({2.000000,2.000000,1.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//33
initialize({2.000000,2.000000,2.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//34
initialize({2.000000,2.000000,2.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//35
initialize({2.000000,2.000000,2.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//36
initialize({2.000000,2.000000,2.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//37
initialize({2.000000,2.000000,1.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//38
initialize({2.000000,2.000000,1.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//39
initialize({2.000000,2.000000,2.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//40
initialize({2.000000,2.000000,2.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//41
initialize({2.000000,2.000000,2.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//42
initialize({2.000000,2.000000,2.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//43
initialize({2.000000,2.000000,1.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//44
initialize({2.000000,2.000000,1.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//45
initialize({2.000000,2.000000,2.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//46
initialize({2.000000,2.000000,2.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//47
initialize({2.000000,2.000000,2.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//48
initialize({2.000000,2.000000,2.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//49
initialize({2.000000,1.000000,2.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//50
initialize({2.000000,1.000000,2.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//51
initialize({2.000000,1.000000,2.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//52
initialize({2.000000,1.000000,2.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//53
initialize({2.000000,1.000000,2.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//54
initialize({2.000000,1.000000,2.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//55
initialize({2.000000,2.000000,1.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//56
initialize({2.000000,2.000000,1.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//57
initialize({2.000000,2.000000,2.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//58
initialize({2.000000,2.000000,2.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//59
initialize({2.000000,2.000000,2.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//60
initialize({2.000000,2.000000,2.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//61
initialize({2.000000,2.000000,1.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//62
initialize({2.000000,2.000000,1.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//63
initialize({2.000000,2.000000,2.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//64
initialize({2.000000,2.000000,2.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//65
initialize({2.000000,2.000000,2.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//66
initialize({2.000000,2.000000,2.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//67
initialize({2.000000,2.000000,1.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//68
initialize({2.000000,2.000000,1.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//69
initialize({2.000000,2.000000,2.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//70
initialize({2.000000,2.000000,2.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//71
initialize({2.000000,2.000000,2.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//72
initialize({2.000000,2.000000,2.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//73
initialize({2.000000,1.000000,2.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//74
initialize({2.000000,1.000000,2.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//75
initialize({2.000000,1.000000,2.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//76
initialize({2.000000,1.000000,2.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//77
initialize({2.000000,1.000000,2.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//78
initialize({2.000000,1.000000,2.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//79
initialize({2.000000,2.000000,1.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//80
initialize({2.000000,2.000000,1.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//81
initialize({2.000000,2.000000,2.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//82
initialize({2.000000,2.000000,2.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//83
initialize({2.000000,2.000000,2.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//84
initialize({2.000000,2.000000,2.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//85
initialize({2.000000,2.000000,1.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//86
initialize({2.000000,2.000000,1.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//87
initialize({2.000000,2.000000,2.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//88
initialize({2.000000,2.000000,2.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//89
initialize({2.000000,2.000000,2.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//90
initialize({2.000000,2.000000,2.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//91
initialize({2.000000,2.000000,1.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//92
initialize({2.000000,2.000000,1.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//93
initialize({2.000000,2.000000,2.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//94
initialize({2.000000,2.000000,2.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//95
initialize({2.000000,2.000000,2.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//96
initialize({2.000000,2.000000,2.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//97
initialize({2.000000,1.000000,2.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//98
initialize({2.000000,1.000000,2.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//99
initialize({2.000000,1.000000,2.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//100
initialize({2.000000,1.000000,2.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//101
initialize({2.000000,1.000000,2.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//102
initialize({2.000000,1.000000,2.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//103
initialize({2.000000,2.000000,1.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//104
initialize({2.000000,2.000000,1.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//105
initialize({2.000000,2.000000,2.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//106
initialize({2.000000,2.000000,2.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//107
initialize({2.000000,2.000000,2.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//108
initialize({2.000000,2.000000,2.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//109
initialize({2.000000,2.000000,1.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//110
initialize({2.000000,2.000000,1.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//111
initialize({2.000000,2.000000,2.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//112
initialize({2.000000,2.000000,2.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//113
initialize({2.000000,2.000000,2.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//114
initialize({2.000000,2.000000,2.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//115
initialize({2.000000,2.000000,1.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//116
initialize({2.000000,2.000000,1.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//117
initialize({2.000000,2.000000,2.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//118
initialize({2.000000,2.000000,2.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//119
initialize({2.000000,2.000000,2.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//120
initialize({2.000000,2.000000,2.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
std::cerr << "test_merge_sort_case_20()" << " - OK.\n";
}
void test_merge_sort_case_21()
{
std::initializer_list<float> list = {1.000000,1.000000,1.000000,1.000000,1.000000};
size_t N = list.size();
int32_t operations = 0;
bool increasing = true;
float A[N];
display(list);
//1
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//2
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//3
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//4
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//5
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//6
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//7
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//8
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//9
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//10
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//11
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//12
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//13
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//14
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//15
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//16
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//17
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//18
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//19
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//20
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//21
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//22
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//23
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//24
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//25
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//26
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//27
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//28
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//29
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//30
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//31
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//32
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//33
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//34
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//35
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//36
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//37
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//38
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//39
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//40
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//41
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//42
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//43
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//44
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//45
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//46
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//47
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//48
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//49
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//50
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//51
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//52
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//53
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//54
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//55
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//56
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//57
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//58
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//59
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//60
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//61
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//62
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//63
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//64
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//65
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//66
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//67
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//68
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//69
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//70
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//71
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//72
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//73
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//74
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//75
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//76
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//77
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//78
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//79
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//80
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//81
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//82
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//83
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//84
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//85
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//86
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//87
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//88
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//89
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//90
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//91
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//92
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//93
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//94
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//95
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//96
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//97
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//98
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//99
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//100
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//101
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//102
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//103
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//104
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//105
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//106
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//107
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//108
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//109
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//110
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//111
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//112
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//113
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//114
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//115
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//116
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//117
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//118
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//119
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//120
initialize({1.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
std::cerr << "test_merge_sort_case_21()" << " - OK.\n";
}
void test_merge_sort_case_22()
{
std::initializer_list<float> list = {1.000000,1.000000,1.000000,1.000000,2.000000};
size_t N = list.size();
int32_t operations = 0;
bool increasing = true;
float A[N];
display(list);
//1
initialize({1.000000,1.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//2
initialize({1.000000,1.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//3
initialize({1.000000,1.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//4
initialize({1.000000,1.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//5
initialize({1.000000,1.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//6
initialize({1.000000,1.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//7
initialize({1.000000,1.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//8
initialize({1.000000,1.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//9
initialize({1.000000,1.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//10
initialize({1.000000,1.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//11
initialize({1.000000,1.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//12
initialize({1.000000,1.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//13
initialize({1.000000,1.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//14
initialize({1.000000,1.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//15
initialize({1.000000,1.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//16
initialize({1.000000,1.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//17
initialize({1.000000,1.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//18
initialize({1.000000,1.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//19
initialize({1.000000,2.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//20
initialize({1.000000,2.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//21
initialize({1.000000,2.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//22
initialize({1.000000,2.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//23
initialize({1.000000,2.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//24
initialize({1.000000,2.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//25
initialize({1.000000,1.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//26
initialize({1.000000,1.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//27
initialize({1.000000,1.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//28
initialize({1.000000,1.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//29
initialize({1.000000,1.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//30
initialize({1.000000,1.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//31
initialize({1.000000,1.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//32
initialize({1.000000,1.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//33
initialize({1.000000,1.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//34
initialize({1.000000,1.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//35
initialize({1.000000,1.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//36
initialize({1.000000,1.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//37
initialize({1.000000,1.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//38
initialize({1.000000,1.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//39
initialize({1.000000,1.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//40
initialize({1.000000,1.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//41
initialize({1.000000,1.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//42
initialize({1.000000,1.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//43
initialize({1.000000,2.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//44
initialize({1.000000,2.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//45
initialize({1.000000,2.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//46
initialize({1.000000,2.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//47
initialize({1.000000,2.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//48
initialize({1.000000,2.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//49
initialize({1.000000,1.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//50
initialize({1.000000,1.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//51
initialize({1.000000,1.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//52
initialize({1.000000,1.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//53
initialize({1.000000,1.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//54
initialize({1.000000,1.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//55
initialize({1.000000,1.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//56
initialize({1.000000,1.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//57
initialize({1.000000,1.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//58
initialize({1.000000,1.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//59
initialize({1.000000,1.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//60
initialize({1.000000,1.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//61
initialize({1.000000,1.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//62
initialize({1.000000,1.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//63
initialize({1.000000,1.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//64
initialize({1.000000,1.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//65
initialize({1.000000,1.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//66
initialize({1.000000,1.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//67
initialize({1.000000,2.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//68
initialize({1.000000,2.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//69
initialize({1.000000,2.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//70
initialize({1.000000,2.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//71
initialize({1.000000,2.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//72
initialize({1.000000,2.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//73
initialize({1.000000,1.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//74
initialize({1.000000,1.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//75
initialize({1.000000,1.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//76
initialize({1.000000,1.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//77
initialize({1.000000,1.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//78
initialize({1.000000,1.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//79
initialize({1.000000,1.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//80
initialize({1.000000,1.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//81
initialize({1.000000,1.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//82
initialize({1.000000,1.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//83
initialize({1.000000,1.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//84
initialize({1.000000,1.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//85
initialize({1.000000,1.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//86
initialize({1.000000,1.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//87
initialize({1.000000,1.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//88
initialize({1.000000,1.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//89
initialize({1.000000,1.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//90
initialize({1.000000,1.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//91
initialize({1.000000,2.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//92
initialize({1.000000,2.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//93
initialize({1.000000,2.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//94
initialize({1.000000,2.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//95
initialize({1.000000,2.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//96
initialize({1.000000,2.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//97
initialize({2.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//98
initialize({2.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//99
initialize({2.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//100
initialize({2.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//101
initialize({2.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//102
initialize({2.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//103
initialize({2.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//104
initialize({2.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//105
initialize({2.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//106
initialize({2.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//107
initialize({2.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//108
initialize({2.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//109
initialize({2.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//110
initialize({2.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//111
initialize({2.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//112
initialize({2.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//113
initialize({2.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//114
initialize({2.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//115
initialize({2.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//116
initialize({2.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//117
initialize({2.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//118
initialize({2.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//119
initialize({2.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//120
initialize({2.000000,1.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
std::cerr << "test_merge_sort_case_22()" << " - OK.\n";
}
void test_merge_sort_case_23()
{
std::initializer_list<float> list = {1.000000,1.000000,1.000000,2.000000,3.000000};
size_t N = list.size();
int32_t operations = 0;
bool increasing = true;
float A[N];
display(list);
//1
initialize({1.000000,1.000000,1.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//2
initialize({1.000000,1.000000,1.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//3
initialize({1.000000,1.000000,2.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//4
initialize({1.000000,1.000000,2.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//5
initialize({1.000000,1.000000,3.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//6
initialize({1.000000,1.000000,3.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//7
initialize({1.000000,1.000000,1.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//8
initialize({1.000000,1.000000,1.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//9
initialize({1.000000,1.000000,2.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//10
initialize({1.000000,1.000000,2.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//11
initialize({1.000000,1.000000,3.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//12
initialize({1.000000,1.000000,3.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//13
initialize({1.000000,2.000000,1.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//14
initialize({1.000000,2.000000,1.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//15
initialize({1.000000,2.000000,1.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//16
initialize({1.000000,2.000000,1.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//17
initialize({1.000000,2.000000,3.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//18
initialize({1.000000,2.000000,3.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//19
initialize({1.000000,3.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//20
initialize({1.000000,3.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//21
initialize({1.000000,3.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//22
initialize({1.000000,3.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//23
initialize({1.000000,3.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//24
initialize({1.000000,3.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//25
initialize({1.000000,1.000000,1.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//26
initialize({1.000000,1.000000,1.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//27
initialize({1.000000,1.000000,2.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//28
initialize({1.000000,1.000000,2.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//29
initialize({1.000000,1.000000,3.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//30
initialize({1.000000,1.000000,3.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//31
initialize({1.000000,1.000000,1.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//32
initialize({1.000000,1.000000,1.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//33
initialize({1.000000,1.000000,2.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//34
initialize({1.000000,1.000000,2.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//35
initialize({1.000000,1.000000,3.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//36
initialize({1.000000,1.000000,3.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//37
initialize({1.000000,2.000000,1.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//38
initialize({1.000000,2.000000,1.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//39
initialize({1.000000,2.000000,1.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//40
initialize({1.000000,2.000000,1.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//41
initialize({1.000000,2.000000,3.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//42
initialize({1.000000,2.000000,3.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//43
initialize({1.000000,3.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//44
initialize({1.000000,3.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//45
initialize({1.000000,3.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//46
initialize({1.000000,3.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//47
initialize({1.000000,3.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//48
initialize({1.000000,3.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//49
initialize({1.000000,1.000000,1.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//50
initialize({1.000000,1.000000,1.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//51
initialize({1.000000,1.000000,2.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//52
initialize({1.000000,1.000000,2.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//53
initialize({1.000000,1.000000,3.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//54
initialize({1.000000,1.000000,3.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//55
initialize({1.000000,1.000000,1.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//56
initialize({1.000000,1.000000,1.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//57
initialize({1.000000,1.000000,2.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//58
initialize({1.000000,1.000000,2.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//59
initialize({1.000000,1.000000,3.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//60
initialize({1.000000,1.000000,3.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//61
initialize({1.000000,2.000000,1.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//62
initialize({1.000000,2.000000,1.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//63
initialize({1.000000,2.000000,1.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//64
initialize({1.000000,2.000000,1.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//65
initialize({1.000000,2.000000,3.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//66
initialize({1.000000,2.000000,3.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//67
initialize({1.000000,3.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//68
initialize({1.000000,3.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//69
initialize({1.000000,3.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//70
initialize({1.000000,3.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//71
initialize({1.000000,3.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//72
initialize({1.000000,3.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//73
initialize({2.000000,1.000000,1.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//74
initialize({2.000000,1.000000,1.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//75
initialize({2.000000,1.000000,1.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//76
initialize({2.000000,1.000000,1.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//77
initialize({2.000000,1.000000,3.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//78
initialize({2.000000,1.000000,3.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//79
initialize({2.000000,1.000000,1.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//80
initialize({2.000000,1.000000,1.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//81
initialize({2.000000,1.000000,1.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//82
initialize({2.000000,1.000000,1.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//83
initialize({2.000000,1.000000,3.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//84
initialize({2.000000,1.000000,3.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//85
initialize({2.000000,1.000000,1.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//86
initialize({2.000000,1.000000,1.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//87
initialize({2.000000,1.000000,1.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//88
initialize({2.000000,1.000000,1.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//89
initialize({2.000000,1.000000,3.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//90
initialize({2.000000,1.000000,3.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//91
initialize({2.000000,3.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//92
initialize({2.000000,3.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//93
initialize({2.000000,3.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//94
initialize({2.000000,3.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//95
initialize({2.000000,3.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//96
initialize({2.000000,3.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//97
initialize({3.000000,1.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//98
initialize({3.000000,1.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//99
initialize({3.000000,1.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//100
initialize({3.000000,1.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//101
initialize({3.000000,1.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//102
initialize({3.000000,1.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//103
initialize({3.000000,1.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//104
initialize({3.000000,1.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//105
initialize({3.000000,1.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//106
initialize({3.000000,1.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//107
initialize({3.000000,1.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//108
initialize({3.000000,1.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//109
initialize({3.000000,1.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//110
initialize({3.000000,1.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//111
initialize({3.000000,1.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//112
initialize({3.000000,1.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//113
initialize({3.000000,1.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//114
initialize({3.000000,1.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//115
initialize({3.000000,2.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//116
initialize({3.000000,2.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//117
initialize({3.000000,2.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//118
initialize({3.000000,2.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//119
initialize({3.000000,2.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//120
initialize({3.000000,2.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
std::cerr << "test_merge_sort_case_23()" << " - OK.\n";
}
void test_merge_sort_case_24()
{
std::initializer_list<float> list = {1.000000,1.000000,1.000000,2.000000,2.000000};
size_t N = list.size();
int32_t operations = 0;
bool increasing = true;
float A[N];
display(list);
//1
initialize({1.000000,1.000000,1.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//2
initialize({1.000000,1.000000,1.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//3
initialize({1.000000,1.000000,2.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//4
initialize({1.000000,1.000000,2.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//5
initialize({1.000000,1.000000,2.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//6
initialize({1.000000,1.000000,2.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//7
initialize({1.000000,1.000000,1.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//8
initialize({1.000000,1.000000,1.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//9
initialize({1.000000,1.000000,2.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//10
initialize({1.000000,1.000000,2.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//11
initialize({1.000000,1.000000,2.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//12
initialize({1.000000,1.000000,2.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//13
initialize({1.000000,2.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//14
initialize({1.000000,2.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//15
initialize({1.000000,2.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//16
initialize({1.000000,2.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//17
initialize({1.000000,2.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//18
initialize({1.000000,2.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//19
initialize({1.000000,2.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//20
initialize({1.000000,2.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//21
initialize({1.000000,2.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//22
initialize({1.000000,2.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//23
initialize({1.000000,2.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//24
initialize({1.000000,2.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//25
initialize({1.000000,1.000000,1.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//26
initialize({1.000000,1.000000,1.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//27
initialize({1.000000,1.000000,2.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//28
initialize({1.000000,1.000000,2.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//29
initialize({1.000000,1.000000,2.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//30
initialize({1.000000,1.000000,2.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//31
initialize({1.000000,1.000000,1.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//32
initialize({1.000000,1.000000,1.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//33
initialize({1.000000,1.000000,2.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//34
initialize({1.000000,1.000000,2.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//35
initialize({1.000000,1.000000,2.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//36
initialize({1.000000,1.000000,2.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//37
initialize({1.000000,2.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//38
initialize({1.000000,2.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//39
initialize({1.000000,2.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//40
initialize({1.000000,2.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//41
initialize({1.000000,2.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//42
initialize({1.000000,2.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//43
initialize({1.000000,2.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//44
initialize({1.000000,2.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//45
initialize({1.000000,2.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//46
initialize({1.000000,2.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//47
initialize({1.000000,2.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//48
initialize({1.000000,2.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//49
initialize({1.000000,1.000000,1.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//50
initialize({1.000000,1.000000,1.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//51
initialize({1.000000,1.000000,2.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//52
initialize({1.000000,1.000000,2.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//53
initialize({1.000000,1.000000,2.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//54
initialize({1.000000,1.000000,2.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//55
initialize({1.000000,1.000000,1.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//56
initialize({1.000000,1.000000,1.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//57
initialize({1.000000,1.000000,2.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//58
initialize({1.000000,1.000000,2.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//59
initialize({1.000000,1.000000,2.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//60
initialize({1.000000,1.000000,2.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//61
initialize({1.000000,2.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//62
initialize({1.000000,2.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//63
initialize({1.000000,2.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//64
initialize({1.000000,2.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//65
initialize({1.000000,2.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//66
initialize({1.000000,2.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//67
initialize({1.000000,2.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//68
initialize({1.000000,2.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//69
initialize({1.000000,2.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//70
initialize({1.000000,2.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//71
initialize({1.000000,2.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//72
initialize({1.000000,2.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//73
initialize({2.000000,1.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//74
initialize({2.000000,1.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//75
initialize({2.000000,1.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//76
initialize({2.000000,1.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//77
initialize({2.000000,1.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//78
initialize({2.000000,1.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//79
initialize({2.000000,1.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//80
initialize({2.000000,1.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//81
initialize({2.000000,1.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//82
initialize({2.000000,1.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//83
initialize({2.000000,1.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//84
initialize({2.000000,1.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//85
initialize({2.000000,1.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//86
initialize({2.000000,1.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//87
initialize({2.000000,1.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//88
initialize({2.000000,1.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//89
initialize({2.000000,1.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//90
initialize({2.000000,1.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//91
initialize({2.000000,2.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//92
initialize({2.000000,2.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//93
initialize({2.000000,2.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//94
initialize({2.000000,2.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//95
initialize({2.000000,2.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//96
initialize({2.000000,2.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//97
initialize({2.000000,1.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//98
initialize({2.000000,1.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//99
initialize({2.000000,1.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//100
initialize({2.000000,1.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//101
initialize({2.000000,1.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//102
initialize({2.000000,1.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//103
initialize({2.000000,1.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//104
initialize({2.000000,1.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//105
initialize({2.000000,1.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//106
initialize({2.000000,1.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//107
initialize({2.000000,1.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//108
initialize({2.000000,1.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//109
initialize({2.000000,1.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//110
initialize({2.000000,1.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//111
initialize({2.000000,1.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//112
initialize({2.000000,1.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//113
initialize({2.000000,1.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//114
initialize({2.000000,1.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//115
initialize({2.000000,2.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//116
initialize({2.000000,2.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//117
initialize({2.000000,2.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//118
initialize({2.000000,2.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//119
initialize({2.000000,2.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//120
initialize({2.000000,2.000000,1.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
std::cerr << "test_merge_sort_case_24()" << " - OK.\n";
}
void test_merge_sort_case_25()
{
std::initializer_list<float> list = {1.000000,1.000000,2.000000,3.000000,4.000000};
size_t N = list.size();
int32_t operations = 0;
bool increasing = true;
float A[N];
display(list);
//1
initialize({1.000000,1.000000,2.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//2
initialize({1.000000,1.000000,2.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//3
initialize({1.000000,1.000000,3.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//4
initialize({1.000000,1.000000,3.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//5
initialize({1.000000,1.000000,4.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//6
initialize({1.000000,1.000000,4.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//7
initialize({1.000000,2.000000,1.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//8
initialize({1.000000,2.000000,1.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//9
initialize({1.000000,2.000000,3.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//10
initialize({1.000000,2.000000,3.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//11
initialize({1.000000,2.000000,4.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//12
initialize({1.000000,2.000000,4.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//13
initialize({1.000000,3.000000,1.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//14
initialize({1.000000,3.000000,1.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//15
initialize({1.000000,3.000000,2.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//16
initialize({1.000000,3.000000,2.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//17
initialize({1.000000,3.000000,4.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//18
initialize({1.000000,3.000000,4.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//19
initialize({1.000000,4.000000,1.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//20
initialize({1.000000,4.000000,1.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//21
initialize({1.000000,4.000000,2.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//22
initialize({1.000000,4.000000,2.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//23
initialize({1.000000,4.000000,3.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//24
initialize({1.000000,4.000000,3.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//25
initialize({1.000000,1.000000,2.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//26
initialize({1.000000,1.000000,2.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//27
initialize({1.000000,1.000000,3.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//28
initialize({1.000000,1.000000,3.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//29
initialize({1.000000,1.000000,4.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//30
initialize({1.000000,1.000000,4.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//31
initialize({1.000000,2.000000,1.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//32
initialize({1.000000,2.000000,1.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//33
initialize({1.000000,2.000000,3.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//34
initialize({1.000000,2.000000,3.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//35
initialize({1.000000,2.000000,4.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//36
initialize({1.000000,2.000000,4.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//37
initialize({1.000000,3.000000,1.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//38
initialize({1.000000,3.000000,1.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//39
initialize({1.000000,3.000000,2.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//40
initialize({1.000000,3.000000,2.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//41
initialize({1.000000,3.000000,4.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//42
initialize({1.000000,3.000000,4.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//43
initialize({1.000000,4.000000,1.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//44
initialize({1.000000,4.000000,1.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//45
initialize({1.000000,4.000000,2.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//46
initialize({1.000000,4.000000,2.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//47
initialize({1.000000,4.000000,3.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//48
initialize({1.000000,4.000000,3.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//49
initialize({2.000000,1.000000,1.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//50
initialize({2.000000,1.000000,1.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//51
initialize({2.000000,1.000000,3.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//52
initialize({2.000000,1.000000,3.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//53
initialize({2.000000,1.000000,4.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//54
initialize({2.000000,1.000000,4.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//55
initialize({2.000000,1.000000,1.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//56
initialize({2.000000,1.000000,1.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//57
initialize({2.000000,1.000000,3.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//58
initialize({2.000000,1.000000,3.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//59
initialize({2.000000,1.000000,4.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//60
initialize({2.000000,1.000000,4.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//61
initialize({2.000000,3.000000,1.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//62
initialize({2.000000,3.000000,1.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//63
initialize({2.000000,3.000000,1.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//64
initialize({2.000000,3.000000,1.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//65
initialize({2.000000,3.000000,4.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//66
initialize({2.000000,3.000000,4.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//67
initialize({2.000000,4.000000,1.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//68
initialize({2.000000,4.000000,1.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//69
initialize({2.000000,4.000000,1.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//70
initialize({2.000000,4.000000,1.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//71
initialize({2.000000,4.000000,3.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//72
initialize({2.000000,4.000000,3.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//73
initialize({3.000000,1.000000,1.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//74
initialize({3.000000,1.000000,1.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//75
initialize({3.000000,1.000000,2.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//76
initialize({3.000000,1.000000,2.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//77
initialize({3.000000,1.000000,4.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//78
initialize({3.000000,1.000000,4.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//79
initialize({3.000000,1.000000,1.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//80
initialize({3.000000,1.000000,1.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//81
initialize({3.000000,1.000000,2.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//82
initialize({3.000000,1.000000,2.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//83
initialize({3.000000,1.000000,4.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//84
initialize({3.000000,1.000000,4.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//85
initialize({3.000000,2.000000,1.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//86
initialize({3.000000,2.000000,1.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//87
initialize({3.000000,2.000000,1.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//88
initialize({3.000000,2.000000,1.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//89
initialize({3.000000,2.000000,4.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//90
initialize({3.000000,2.000000,4.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//91
initialize({3.000000,4.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//92
initialize({3.000000,4.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//93
initialize({3.000000,4.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//94
initialize({3.000000,4.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//95
initialize({3.000000,4.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//96
initialize({3.000000,4.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//97
initialize({4.000000,1.000000,1.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//98
initialize({4.000000,1.000000,1.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//99
initialize({4.000000,1.000000,2.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//100
initialize({4.000000,1.000000,2.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//101
initialize({4.000000,1.000000,3.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//102
initialize({4.000000,1.000000,3.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//103
initialize({4.000000,1.000000,1.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//104
initialize({4.000000,1.000000,1.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//105
initialize({4.000000,1.000000,2.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//106
initialize({4.000000,1.000000,2.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//107
initialize({4.000000,1.000000,3.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//108
initialize({4.000000,1.000000,3.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//109
initialize({4.000000,2.000000,1.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//110
initialize({4.000000,2.000000,1.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//111
initialize({4.000000,2.000000,1.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//112
initialize({4.000000,2.000000,1.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//113
initialize({4.000000,2.000000,3.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//114
initialize({4.000000,2.000000,3.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//115
initialize({4.000000,3.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//116
initialize({4.000000,3.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//117
initialize({4.000000,3.000000,1.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//118
initialize({4.000000,3.000000,1.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//119
initialize({4.000000,3.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//120
initialize({4.000000,3.000000,2.000000,1.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
std::cerr << "test_merge_sort_case_25()" << " - OK.\n";
}
void test_merge_sort_case_26()
{
std::initializer_list<float> list = {1.000000,2.000000,2.000000,3.000000,3.000000,4.000000};
size_t N = list.size();
int32_t operations = 0;
bool increasing = true;
float A[N];
display(list);
//1
initialize({1.000000,2.000000,2.000000,3.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//2
initialize({1.000000,2.000000,2.000000,3.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//3
initialize({1.000000,2.000000,2.000000,3.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//4
initialize({1.000000,2.000000,2.000000,3.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//5
initialize({1.000000,2.000000,2.000000,4.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//6
initialize({1.000000,2.000000,2.000000,4.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//7
initialize({1.000000,2.000000,3.000000,2.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//8
initialize({1.000000,2.000000,3.000000,2.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//9
initialize({1.000000,2.000000,3.000000,3.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//10
initialize({1.000000,2.000000,3.000000,3.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//11
initialize({1.000000,2.000000,3.000000,4.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//12
initialize({1.000000,2.000000,3.000000,4.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//13
initialize({1.000000,2.000000,3.000000,2.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//14
initialize({1.000000,2.000000,3.000000,2.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//15
initialize({1.000000,2.000000,3.000000,3.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//16
initialize({1.000000,2.000000,3.000000,3.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//17
initialize({1.000000,2.000000,3.000000,4.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//18
initialize({1.000000,2.000000,3.000000,4.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//19
initialize({1.000000,2.000000,4.000000,2.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//20
initialize({1.000000,2.000000,4.000000,2.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//21
initialize({1.000000,2.000000,4.000000,3.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//22
initialize({1.000000,2.000000,4.000000,3.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//23
initialize({1.000000,2.000000,4.000000,3.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//24
initialize({1.000000,2.000000,4.000000,3.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//25
initialize({1.000000,2.000000,2.000000,3.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//26
initialize({1.000000,2.000000,2.000000,3.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//27
initialize({1.000000,2.000000,2.000000,3.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//28
initialize({1.000000,2.000000,2.000000,3.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//29
initialize({1.000000,2.000000,2.000000,4.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//30
initialize({1.000000,2.000000,2.000000,4.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//31
initialize({1.000000,2.000000,3.000000,2.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//32
initialize({1.000000,2.000000,3.000000,2.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//33
initialize({1.000000,2.000000,3.000000,3.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//34
initialize({1.000000,2.000000,3.000000,3.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//35
initialize({1.000000,2.000000,3.000000,4.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//36
initialize({1.000000,2.000000,3.000000,4.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//37
initialize({1.000000,2.000000,3.000000,2.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//38
initialize({1.000000,2.000000,3.000000,2.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//39
initialize({1.000000,2.000000,3.000000,3.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//40
initialize({1.000000,2.000000,3.000000,3.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//41
initialize({1.000000,2.000000,3.000000,4.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//42
initialize({1.000000,2.000000,3.000000,4.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//43
initialize({1.000000,2.000000,4.000000,2.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//44
initialize({1.000000,2.000000,4.000000,2.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//45
initialize({1.000000,2.000000,4.000000,3.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//46
initialize({1.000000,2.000000,4.000000,3.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//47
initialize({1.000000,2.000000,4.000000,3.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//48
initialize({1.000000,2.000000,4.000000,3.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//49
initialize({1.000000,3.000000,2.000000,2.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//50
initialize({1.000000,3.000000,2.000000,2.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//51
initialize({1.000000,3.000000,2.000000,3.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//52
initialize({1.000000,3.000000,2.000000,3.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//53
initialize({1.000000,3.000000,2.000000,4.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//54
initialize({1.000000,3.000000,2.000000,4.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//55
initialize({1.000000,3.000000,2.000000,2.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//56
initialize({1.000000,3.000000,2.000000,2.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//57
initialize({1.000000,3.000000,2.000000,3.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//58
initialize({1.000000,3.000000,2.000000,3.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//59
initialize({1.000000,3.000000,2.000000,4.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//60
initialize({1.000000,3.000000,2.000000,4.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//61
initialize({1.000000,3.000000,3.000000,2.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//62
initialize({1.000000,3.000000,3.000000,2.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//63
initialize({1.000000,3.000000,3.000000,2.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//64
initialize({1.000000,3.000000,3.000000,2.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//65
initialize({1.000000,3.000000,3.000000,4.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//66
initialize({1.000000,3.000000,3.000000,4.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//67
initialize({1.000000,3.000000,4.000000,2.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//68
initialize({1.000000,3.000000,4.000000,2.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//69
initialize({1.000000,3.000000,4.000000,2.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//70
initialize({1.000000,3.000000,4.000000,2.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//71
initialize({1.000000,3.000000,4.000000,3.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//72
initialize({1.000000,3.000000,4.000000,3.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//73
initialize({1.000000,3.000000,2.000000,2.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//74
initialize({1.000000,3.000000,2.000000,2.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//75
initialize({1.000000,3.000000,2.000000,3.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//76
initialize({1.000000,3.000000,2.000000,3.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//77
initialize({1.000000,3.000000,2.000000,4.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//78
initialize({1.000000,3.000000,2.000000,4.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//79
initialize({1.000000,3.000000,2.000000,2.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//80
initialize({1.000000,3.000000,2.000000,2.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//81
initialize({1.000000,3.000000,2.000000,3.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//82
initialize({1.000000,3.000000,2.000000,3.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//83
initialize({1.000000,3.000000,2.000000,4.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//84
initialize({1.000000,3.000000,2.000000,4.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//85
initialize({1.000000,3.000000,3.000000,2.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//86
initialize({1.000000,3.000000,3.000000,2.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//87
initialize({1.000000,3.000000,3.000000,2.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//88
initialize({1.000000,3.000000,3.000000,2.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//89
initialize({1.000000,3.000000,3.000000,4.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//90
initialize({1.000000,3.000000,3.000000,4.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//91
initialize({1.000000,3.000000,4.000000,2.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//92
initialize({1.000000,3.000000,4.000000,2.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//93
initialize({1.000000,3.000000,4.000000,2.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//94
initialize({1.000000,3.000000,4.000000,2.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//95
initialize({1.000000,3.000000,4.000000,3.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//96
initialize({1.000000,3.000000,4.000000,3.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//97
initialize({1.000000,4.000000,2.000000,2.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//98
initialize({1.000000,4.000000,2.000000,2.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//99
initialize({1.000000,4.000000,2.000000,3.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//100
initialize({1.000000,4.000000,2.000000,3.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//101
initialize({1.000000,4.000000,2.000000,3.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//102
initialize({1.000000,4.000000,2.000000,3.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//103
initialize({1.000000,4.000000,2.000000,2.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//104
initialize({1.000000,4.000000,2.000000,2.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//105
initialize({1.000000,4.000000,2.000000,3.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//106
initialize({1.000000,4.000000,2.000000,3.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//107
initialize({1.000000,4.000000,2.000000,3.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//108
initialize({1.000000,4.000000,2.000000,3.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//109
initialize({1.000000,4.000000,3.000000,2.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//110
initialize({1.000000,4.000000,3.000000,2.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//111
initialize({1.000000,4.000000,3.000000,2.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//112
initialize({1.000000,4.000000,3.000000,2.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//113
initialize({1.000000,4.000000,3.000000,3.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//114
initialize({1.000000,4.000000,3.000000,3.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//115
initialize({1.000000,4.000000,3.000000,2.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//116
initialize({1.000000,4.000000,3.000000,2.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//117
initialize({1.000000,4.000000,3.000000,2.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//118
initialize({1.000000,4.000000,3.000000,2.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//119
initialize({1.000000,4.000000,3.000000,3.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//120
initialize({1.000000,4.000000,3.000000,3.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//121
initialize({2.000000,1.000000,2.000000,3.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//122
initialize({2.000000,1.000000,2.000000,3.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//123
initialize({2.000000,1.000000,2.000000,3.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//124
initialize({2.000000,1.000000,2.000000,3.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//125
initialize({2.000000,1.000000,2.000000,4.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//126
initialize({2.000000,1.000000,2.000000,4.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//127
initialize({2.000000,1.000000,3.000000,2.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//128
initialize({2.000000,1.000000,3.000000,2.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//129
initialize({2.000000,1.000000,3.000000,3.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//130
initialize({2.000000,1.000000,3.000000,3.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//131
initialize({2.000000,1.000000,3.000000,4.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//132
initialize({2.000000,1.000000,3.000000,4.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//133
initialize({2.000000,1.000000,3.000000,2.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//134
initialize({2.000000,1.000000,3.000000,2.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//135
initialize({2.000000,1.000000,3.000000,3.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//136
initialize({2.000000,1.000000,3.000000,3.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//137
initialize({2.000000,1.000000,3.000000,4.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//138
initialize({2.000000,1.000000,3.000000,4.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//139
initialize({2.000000,1.000000,4.000000,2.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//140
initialize({2.000000,1.000000,4.000000,2.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//141
initialize({2.000000,1.000000,4.000000,3.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//142
initialize({2.000000,1.000000,4.000000,3.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//143
initialize({2.000000,1.000000,4.000000,3.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//144
initialize({2.000000,1.000000,4.000000,3.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//145
initialize({2.000000,2.000000,1.000000,3.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//146
initialize({2.000000,2.000000,1.000000,3.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//147
initialize({2.000000,2.000000,1.000000,3.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//148
initialize({2.000000,2.000000,1.000000,3.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//149
initialize({2.000000,2.000000,1.000000,4.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//150
initialize({2.000000,2.000000,1.000000,4.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//151
initialize({2.000000,2.000000,3.000000,1.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//152
initialize({2.000000,2.000000,3.000000,1.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//153
initialize({2.000000,2.000000,3.000000,3.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//154
initialize({2.000000,2.000000,3.000000,3.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//155
initialize({2.000000,2.000000,3.000000,4.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//156
initialize({2.000000,2.000000,3.000000,4.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//157
initialize({2.000000,2.000000,3.000000,1.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//158
initialize({2.000000,2.000000,3.000000,1.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//159
initialize({2.000000,2.000000,3.000000,3.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//160
initialize({2.000000,2.000000,3.000000,3.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//161
initialize({2.000000,2.000000,3.000000,4.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//162
initialize({2.000000,2.000000,3.000000,4.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//163
initialize({2.000000,2.000000,4.000000,1.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//164
initialize({2.000000,2.000000,4.000000,1.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//165
initialize({2.000000,2.000000,4.000000,3.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//166
initialize({2.000000,2.000000,4.000000,3.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//167
initialize({2.000000,2.000000,4.000000,3.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//168
initialize({2.000000,2.000000,4.000000,3.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//169
initialize({2.000000,3.000000,1.000000,2.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//170
initialize({2.000000,3.000000,1.000000,2.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//171
initialize({2.000000,3.000000,1.000000,3.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//172
initialize({2.000000,3.000000,1.000000,3.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//173
initialize({2.000000,3.000000,1.000000,4.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//174
initialize({2.000000,3.000000,1.000000,4.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//175
initialize({2.000000,3.000000,2.000000,1.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//176
initialize({2.000000,3.000000,2.000000,1.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//177
initialize({2.000000,3.000000,2.000000,3.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//178
initialize({2.000000,3.000000,2.000000,3.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//179
initialize({2.000000,3.000000,2.000000,4.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//180
initialize({2.000000,3.000000,2.000000,4.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//181
initialize({2.000000,3.000000,3.000000,1.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//182
initialize({2.000000,3.000000,3.000000,1.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//183
initialize({2.000000,3.000000,3.000000,2.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//184
initialize({2.000000,3.000000,3.000000,2.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//185
initialize({2.000000,3.000000,3.000000,4.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//186
initialize({2.000000,3.000000,3.000000,4.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//187
initialize({2.000000,3.000000,4.000000,1.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//188
initialize({2.000000,3.000000,4.000000,1.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//189
initialize({2.000000,3.000000,4.000000,2.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//190
initialize({2.000000,3.000000,4.000000,2.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//191
initialize({2.000000,3.000000,4.000000,3.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//192
initialize({2.000000,3.000000,4.000000,3.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//193
initialize({2.000000,3.000000,1.000000,2.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//194
initialize({2.000000,3.000000,1.000000,2.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//195
initialize({2.000000,3.000000,1.000000,3.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//196
initialize({2.000000,3.000000,1.000000,3.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//197
initialize({2.000000,3.000000,1.000000,4.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//198
initialize({2.000000,3.000000,1.000000,4.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//199
initialize({2.000000,3.000000,2.000000,1.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//200
initialize({2.000000,3.000000,2.000000,1.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//201
initialize({2.000000,3.000000,2.000000,3.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//202
initialize({2.000000,3.000000,2.000000,3.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//203
initialize({2.000000,3.000000,2.000000,4.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//204
initialize({2.000000,3.000000,2.000000,4.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//205
initialize({2.000000,3.000000,3.000000,1.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//206
initialize({2.000000,3.000000,3.000000,1.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//207
initialize({2.000000,3.000000,3.000000,2.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//208
initialize({2.000000,3.000000,3.000000,2.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//209
initialize({2.000000,3.000000,3.000000,4.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//210
initialize({2.000000,3.000000,3.000000,4.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//211
initialize({2.000000,3.000000,4.000000,1.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//212
initialize({2.000000,3.000000,4.000000,1.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//213
initialize({2.000000,3.000000,4.000000,2.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//214
initialize({2.000000,3.000000,4.000000,2.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//215
initialize({2.000000,3.000000,4.000000,3.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//216
initialize({2.000000,3.000000,4.000000,3.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//217
initialize({2.000000,4.000000,1.000000,2.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//218
initialize({2.000000,4.000000,1.000000,2.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//219
initialize({2.000000,4.000000,1.000000,3.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//220
initialize({2.000000,4.000000,1.000000,3.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//221
initialize({2.000000,4.000000,1.000000,3.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//222
initialize({2.000000,4.000000,1.000000,3.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//223
initialize({2.000000,4.000000,2.000000,1.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//224
initialize({2.000000,4.000000,2.000000,1.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//225
initialize({2.000000,4.000000,2.000000,3.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//226
initialize({2.000000,4.000000,2.000000,3.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//227
initialize({2.000000,4.000000,2.000000,3.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//228
initialize({2.000000,4.000000,2.000000,3.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//229
initialize({2.000000,4.000000,3.000000,1.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//230
initialize({2.000000,4.000000,3.000000,1.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//231
initialize({2.000000,4.000000,3.000000,2.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//232
initialize({2.000000,4.000000,3.000000,2.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//233
initialize({2.000000,4.000000,3.000000,3.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//234
initialize({2.000000,4.000000,3.000000,3.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//235
initialize({2.000000,4.000000,3.000000,1.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//236
initialize({2.000000,4.000000,3.000000,1.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//237
initialize({2.000000,4.000000,3.000000,2.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//238
initialize({2.000000,4.000000,3.000000,2.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//239
initialize({2.000000,4.000000,3.000000,3.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//240
initialize({2.000000,4.000000,3.000000,3.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//241
initialize({2.000000,1.000000,2.000000,3.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//242
initialize({2.000000,1.000000,2.000000,3.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//243
initialize({2.000000,1.000000,2.000000,3.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//244
initialize({2.000000,1.000000,2.000000,3.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//245
initialize({2.000000,1.000000,2.000000,4.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//246
initialize({2.000000,1.000000,2.000000,4.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//247
initialize({2.000000,1.000000,3.000000,2.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//248
initialize({2.000000,1.000000,3.000000,2.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//249
initialize({2.000000,1.000000,3.000000,3.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//250
initialize({2.000000,1.000000,3.000000,3.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//251
initialize({2.000000,1.000000,3.000000,4.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//252
initialize({2.000000,1.000000,3.000000,4.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//253
initialize({2.000000,1.000000,3.000000,2.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//254
initialize({2.000000,1.000000,3.000000,2.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//255
initialize({2.000000,1.000000,3.000000,3.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//256
initialize({2.000000,1.000000,3.000000,3.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//257
initialize({2.000000,1.000000,3.000000,4.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//258
initialize({2.000000,1.000000,3.000000,4.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//259
initialize({2.000000,1.000000,4.000000,2.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//260
initialize({2.000000,1.000000,4.000000,2.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//261
initialize({2.000000,1.000000,4.000000,3.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//262
initialize({2.000000,1.000000,4.000000,3.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//263
initialize({2.000000,1.000000,4.000000,3.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//264
initialize({2.000000,1.000000,4.000000,3.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//265
initialize({2.000000,2.000000,1.000000,3.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//266
initialize({2.000000,2.000000,1.000000,3.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//267
initialize({2.000000,2.000000,1.000000,3.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//268
initialize({2.000000,2.000000,1.000000,3.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//269
initialize({2.000000,2.000000,1.000000,4.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//270
initialize({2.000000,2.000000,1.000000,4.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//271
initialize({2.000000,2.000000,3.000000,1.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//272
initialize({2.000000,2.000000,3.000000,1.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//273
initialize({2.000000,2.000000,3.000000,3.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//274
initialize({2.000000,2.000000,3.000000,3.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//275
initialize({2.000000,2.000000,3.000000,4.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//276
initialize({2.000000,2.000000,3.000000,4.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//277
initialize({2.000000,2.000000,3.000000,1.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//278
initialize({2.000000,2.000000,3.000000,1.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//279
initialize({2.000000,2.000000,3.000000,3.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//280
initialize({2.000000,2.000000,3.000000,3.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//281
initialize({2.000000,2.000000,3.000000,4.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//282
initialize({2.000000,2.000000,3.000000,4.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//283
initialize({2.000000,2.000000,4.000000,1.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//284
initialize({2.000000,2.000000,4.000000,1.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//285
initialize({2.000000,2.000000,4.000000,3.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//286
initialize({2.000000,2.000000,4.000000,3.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//287
initialize({2.000000,2.000000,4.000000,3.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//288
initialize({2.000000,2.000000,4.000000,3.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//289
initialize({2.000000,3.000000,1.000000,2.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//290
initialize({2.000000,3.000000,1.000000,2.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//291
initialize({2.000000,3.000000,1.000000,3.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//292
initialize({2.000000,3.000000,1.000000,3.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//293
initialize({2.000000,3.000000,1.000000,4.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//294
initialize({2.000000,3.000000,1.000000,4.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//295
initialize({2.000000,3.000000,2.000000,1.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//296
initialize({2.000000,3.000000,2.000000,1.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//297
initialize({2.000000,3.000000,2.000000,3.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//298
initialize({2.000000,3.000000,2.000000,3.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//299
initialize({2.000000,3.000000,2.000000,4.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//300
initialize({2.000000,3.000000,2.000000,4.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//301
initialize({2.000000,3.000000,3.000000,1.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//302
initialize({2.000000,3.000000,3.000000,1.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//303
initialize({2.000000,3.000000,3.000000,2.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//304
initialize({2.000000,3.000000,3.000000,2.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//305
initialize({2.000000,3.000000,3.000000,4.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//306
initialize({2.000000,3.000000,3.000000,4.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//307
initialize({2.000000,3.000000,4.000000,1.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//308
initialize({2.000000,3.000000,4.000000,1.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//309
initialize({2.000000,3.000000,4.000000,2.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//310
initialize({2.000000,3.000000,4.000000,2.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//311
initialize({2.000000,3.000000,4.000000,3.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//312
initialize({2.000000,3.000000,4.000000,3.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//313
initialize({2.000000,3.000000,1.000000,2.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//314
initialize({2.000000,3.000000,1.000000,2.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//315
initialize({2.000000,3.000000,1.000000,3.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//316
initialize({2.000000,3.000000,1.000000,3.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//317
initialize({2.000000,3.000000,1.000000,4.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//318
initialize({2.000000,3.000000,1.000000,4.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//319
initialize({2.000000,3.000000,2.000000,1.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//320
initialize({2.000000,3.000000,2.000000,1.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//321
initialize({2.000000,3.000000,2.000000,3.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//322
initialize({2.000000,3.000000,2.000000,3.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//323
initialize({2.000000,3.000000,2.000000,4.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//324
initialize({2.000000,3.000000,2.000000,4.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//325
initialize({2.000000,3.000000,3.000000,1.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//326
initialize({2.000000,3.000000,3.000000,1.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//327
initialize({2.000000,3.000000,3.000000,2.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//328
initialize({2.000000,3.000000,3.000000,2.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//329
initialize({2.000000,3.000000,3.000000,4.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//330
initialize({2.000000,3.000000,3.000000,4.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//331
initialize({2.000000,3.000000,4.000000,1.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//332
initialize({2.000000,3.000000,4.000000,1.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//333
initialize({2.000000,3.000000,4.000000,2.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//334
initialize({2.000000,3.000000,4.000000,2.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//335
initialize({2.000000,3.000000,4.000000,3.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//336
initialize({2.000000,3.000000,4.000000,3.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//337
initialize({2.000000,4.000000,1.000000,2.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//338
initialize({2.000000,4.000000,1.000000,2.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//339
initialize({2.000000,4.000000,1.000000,3.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//340
initialize({2.000000,4.000000,1.000000,3.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//341
initialize({2.000000,4.000000,1.000000,3.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//342
initialize({2.000000,4.000000,1.000000,3.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//343
initialize({2.000000,4.000000,2.000000,1.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//344
initialize({2.000000,4.000000,2.000000,1.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//345
initialize({2.000000,4.000000,2.000000,3.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//346
initialize({2.000000,4.000000,2.000000,3.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//347
initialize({2.000000,4.000000,2.000000,3.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//348
initialize({2.000000,4.000000,2.000000,3.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//349
initialize({2.000000,4.000000,3.000000,1.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//350
initialize({2.000000,4.000000,3.000000,1.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//351
initialize({2.000000,4.000000,3.000000,2.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//352
initialize({2.000000,4.000000,3.000000,2.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//353
initialize({2.000000,4.000000,3.000000,3.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//354
initialize({2.000000,4.000000,3.000000,3.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//355
initialize({2.000000,4.000000,3.000000,1.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//356
initialize({2.000000,4.000000,3.000000,1.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//357
initialize({2.000000,4.000000,3.000000,2.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//358
initialize({2.000000,4.000000,3.000000,2.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//359
initialize({2.000000,4.000000,3.000000,3.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//360
initialize({2.000000,4.000000,3.000000,3.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//361
initialize({3.000000,1.000000,2.000000,2.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//362
initialize({3.000000,1.000000,2.000000,2.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//363
initialize({3.000000,1.000000,2.000000,3.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//364
initialize({3.000000,1.000000,2.000000,3.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//365
initialize({3.000000,1.000000,2.000000,4.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//366
initialize({3.000000,1.000000,2.000000,4.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//367
initialize({3.000000,1.000000,2.000000,2.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//368
initialize({3.000000,1.000000,2.000000,2.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//369
initialize({3.000000,1.000000,2.000000,3.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//370
initialize({3.000000,1.000000,2.000000,3.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//371
initialize({3.000000,1.000000,2.000000,4.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//372
initialize({3.000000,1.000000,2.000000,4.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//373
initialize({3.000000,1.000000,3.000000,2.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//374
initialize({3.000000,1.000000,3.000000,2.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//375
initialize({3.000000,1.000000,3.000000,2.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//376
initialize({3.000000,1.000000,3.000000,2.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//377
initialize({3.000000,1.000000,3.000000,4.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//378
initialize({3.000000,1.000000,3.000000,4.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//379
initialize({3.000000,1.000000,4.000000,2.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//380
initialize({3.000000,1.000000,4.000000,2.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//381
initialize({3.000000,1.000000,4.000000,2.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//382
initialize({3.000000,1.000000,4.000000,2.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//383
initialize({3.000000,1.000000,4.000000,3.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//384
initialize({3.000000,1.000000,4.000000,3.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//385
initialize({3.000000,2.000000,1.000000,2.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//386
initialize({3.000000,2.000000,1.000000,2.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//387
initialize({3.000000,2.000000,1.000000,3.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//388
initialize({3.000000,2.000000,1.000000,3.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//389
initialize({3.000000,2.000000,1.000000,4.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//390
initialize({3.000000,2.000000,1.000000,4.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//391
initialize({3.000000,2.000000,2.000000,1.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//392
initialize({3.000000,2.000000,2.000000,1.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//393
initialize({3.000000,2.000000,2.000000,3.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//394
initialize({3.000000,2.000000,2.000000,3.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//395
initialize({3.000000,2.000000,2.000000,4.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//396
initialize({3.000000,2.000000,2.000000,4.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//397
initialize({3.000000,2.000000,3.000000,1.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//398
initialize({3.000000,2.000000,3.000000,1.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//399
initialize({3.000000,2.000000,3.000000,2.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//400
initialize({3.000000,2.000000,3.000000,2.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//401
initialize({3.000000,2.000000,3.000000,4.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//402
initialize({3.000000,2.000000,3.000000,4.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//403
initialize({3.000000,2.000000,4.000000,1.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//404
initialize({3.000000,2.000000,4.000000,1.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//405
initialize({3.000000,2.000000,4.000000,2.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//406
initialize({3.000000,2.000000,4.000000,2.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//407
initialize({3.000000,2.000000,4.000000,3.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//408
initialize({3.000000,2.000000,4.000000,3.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//409
initialize({3.000000,2.000000,1.000000,2.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//410
initialize({3.000000,2.000000,1.000000,2.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//411
initialize({3.000000,2.000000,1.000000,3.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//412
initialize({3.000000,2.000000,1.000000,3.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//413
initialize({3.000000,2.000000,1.000000,4.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//414
initialize({3.000000,2.000000,1.000000,4.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//415
initialize({3.000000,2.000000,2.000000,1.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//416
initialize({3.000000,2.000000,2.000000,1.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//417
initialize({3.000000,2.000000,2.000000,3.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//418
initialize({3.000000,2.000000,2.000000,3.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//419
initialize({3.000000,2.000000,2.000000,4.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//420
initialize({3.000000,2.000000,2.000000,4.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//421
initialize({3.000000,2.000000,3.000000,1.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//422
initialize({3.000000,2.000000,3.000000,1.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//423
initialize({3.000000,2.000000,3.000000,2.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//424
initialize({3.000000,2.000000,3.000000,2.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//425
initialize({3.000000,2.000000,3.000000,4.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//426
initialize({3.000000,2.000000,3.000000,4.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//427
initialize({3.000000,2.000000,4.000000,1.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//428
initialize({3.000000,2.000000,4.000000,1.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//429
initialize({3.000000,2.000000,4.000000,2.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//430
initialize({3.000000,2.000000,4.000000,2.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//431
initialize({3.000000,2.000000,4.000000,3.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//432
initialize({3.000000,2.000000,4.000000,3.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//433
initialize({3.000000,3.000000,1.000000,2.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//434
initialize({3.000000,3.000000,1.000000,2.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//435
initialize({3.000000,3.000000,1.000000,2.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//436
initialize({3.000000,3.000000,1.000000,2.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//437
initialize({3.000000,3.000000,1.000000,4.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//438
initialize({3.000000,3.000000,1.000000,4.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//439
initialize({3.000000,3.000000,2.000000,1.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//440
initialize({3.000000,3.000000,2.000000,1.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//441
initialize({3.000000,3.000000,2.000000,2.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//442
initialize({3.000000,3.000000,2.000000,2.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//443
initialize({3.000000,3.000000,2.000000,4.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//444
initialize({3.000000,3.000000,2.000000,4.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//445
initialize({3.000000,3.000000,2.000000,1.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//446
initialize({3.000000,3.000000,2.000000,1.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//447
initialize({3.000000,3.000000,2.000000,2.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//448
initialize({3.000000,3.000000,2.000000,2.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//449
initialize({3.000000,3.000000,2.000000,4.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//450
initialize({3.000000,3.000000,2.000000,4.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//451
initialize({3.000000,3.000000,4.000000,1.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//452
initialize({3.000000,3.000000,4.000000,1.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//453
initialize({3.000000,3.000000,4.000000,2.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//454
initialize({3.000000,3.000000,4.000000,2.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//455
initialize({3.000000,3.000000,4.000000,2.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//456
initialize({3.000000,3.000000,4.000000,2.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//457
initialize({3.000000,4.000000,1.000000,2.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//458
initialize({3.000000,4.000000,1.000000,2.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//459
initialize({3.000000,4.000000,1.000000,2.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//460
initialize({3.000000,4.000000,1.000000,2.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//461
initialize({3.000000,4.000000,1.000000,3.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//462
initialize({3.000000,4.000000,1.000000,3.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//463
initialize({3.000000,4.000000,2.000000,1.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//464
initialize({3.000000,4.000000,2.000000,1.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//465
initialize({3.000000,4.000000,2.000000,2.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//466
initialize({3.000000,4.000000,2.000000,2.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//467
initialize({3.000000,4.000000,2.000000,3.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//468
initialize({3.000000,4.000000,2.000000,3.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//469
initialize({3.000000,4.000000,2.000000,1.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//470
initialize({3.000000,4.000000,2.000000,1.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//471
initialize({3.000000,4.000000,2.000000,2.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//472
initialize({3.000000,4.000000,2.000000,2.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//473
initialize({3.000000,4.000000,2.000000,3.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//474
initialize({3.000000,4.000000,2.000000,3.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//475
initialize({3.000000,4.000000,3.000000,1.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//476
initialize({3.000000,4.000000,3.000000,1.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//477
initialize({3.000000,4.000000,3.000000,2.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//478
initialize({3.000000,4.000000,3.000000,2.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//479
initialize({3.000000,4.000000,3.000000,2.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//480
initialize({3.000000,4.000000,3.000000,2.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//481
initialize({3.000000,1.000000,2.000000,2.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//482
initialize({3.000000,1.000000,2.000000,2.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//483
initialize({3.000000,1.000000,2.000000,3.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//484
initialize({3.000000,1.000000,2.000000,3.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//485
initialize({3.000000,1.000000,2.000000,4.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//486
initialize({3.000000,1.000000,2.000000,4.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//487
initialize({3.000000,1.000000,2.000000,2.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//488
initialize({3.000000,1.000000,2.000000,2.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//489
initialize({3.000000,1.000000,2.000000,3.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//490
initialize({3.000000,1.000000,2.000000,3.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//491
initialize({3.000000,1.000000,2.000000,4.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//492
initialize({3.000000,1.000000,2.000000,4.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//493
initialize({3.000000,1.000000,3.000000,2.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//494
initialize({3.000000,1.000000,3.000000,2.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//495
initialize({3.000000,1.000000,3.000000,2.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//496
initialize({3.000000,1.000000,3.000000,2.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//497
initialize({3.000000,1.000000,3.000000,4.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//498
initialize({3.000000,1.000000,3.000000,4.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//499
initialize({3.000000,1.000000,4.000000,2.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//500
initialize({3.000000,1.000000,4.000000,2.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//501
initialize({3.000000,1.000000,4.000000,2.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//502
initialize({3.000000,1.000000,4.000000,2.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//503
initialize({3.000000,1.000000,4.000000,3.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//504
initialize({3.000000,1.000000,4.000000,3.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//505
initialize({3.000000,2.000000,1.000000,2.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//506
initialize({3.000000,2.000000,1.000000,2.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//507
initialize({3.000000,2.000000,1.000000,3.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//508
initialize({3.000000,2.000000,1.000000,3.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//509
initialize({3.000000,2.000000,1.000000,4.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//510
initialize({3.000000,2.000000,1.000000,4.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//511
initialize({3.000000,2.000000,2.000000,1.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//512
initialize({3.000000,2.000000,2.000000,1.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//513
initialize({3.000000,2.000000,2.000000,3.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//514
initialize({3.000000,2.000000,2.000000,3.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//515
initialize({3.000000,2.000000,2.000000,4.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//516
initialize({3.000000,2.000000,2.000000,4.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//517
initialize({3.000000,2.000000,3.000000,1.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//518
initialize({3.000000,2.000000,3.000000,1.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//519
initialize({3.000000,2.000000,3.000000,2.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//520
initialize({3.000000,2.000000,3.000000,2.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//521
initialize({3.000000,2.000000,3.000000,4.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//522
initialize({3.000000,2.000000,3.000000,4.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//523
initialize({3.000000,2.000000,4.000000,1.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//524
initialize({3.000000,2.000000,4.000000,1.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//525
initialize({3.000000,2.000000,4.000000,2.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//526
initialize({3.000000,2.000000,4.000000,2.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//527
initialize({3.000000,2.000000,4.000000,3.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//528
initialize({3.000000,2.000000,4.000000,3.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//529
initialize({3.000000,2.000000,1.000000,2.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//530
initialize({3.000000,2.000000,1.000000,2.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//531
initialize({3.000000,2.000000,1.000000,3.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//532
initialize({3.000000,2.000000,1.000000,3.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//533
initialize({3.000000,2.000000,1.000000,4.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//534
initialize({3.000000,2.000000,1.000000,4.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//535
initialize({3.000000,2.000000,2.000000,1.000000,3.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//536
initialize({3.000000,2.000000,2.000000,1.000000,4.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//537
initialize({3.000000,2.000000,2.000000,3.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//538
initialize({3.000000,2.000000,2.000000,3.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//539
initialize({3.000000,2.000000,2.000000,4.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//540
initialize({3.000000,2.000000,2.000000,4.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//541
initialize({3.000000,2.000000,3.000000,1.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//542
initialize({3.000000,2.000000,3.000000,1.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//543
initialize({3.000000,2.000000,3.000000,2.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//544
initialize({3.000000,2.000000,3.000000,2.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//545
initialize({3.000000,2.000000,3.000000,4.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//546
initialize({3.000000,2.000000,3.000000,4.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//547
initialize({3.000000,2.000000,4.000000,1.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//548
initialize({3.000000,2.000000,4.000000,1.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//549
initialize({3.000000,2.000000,4.000000,2.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//550
initialize({3.000000,2.000000,4.000000,2.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//551
initialize({3.000000,2.000000,4.000000,3.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//552
initialize({3.000000,2.000000,4.000000,3.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//553
initialize({3.000000,3.000000,1.000000,2.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//554
initialize({3.000000,3.000000,1.000000,2.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//555
initialize({3.000000,3.000000,1.000000,2.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//556
initialize({3.000000,3.000000,1.000000,2.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//557
initialize({3.000000,3.000000,1.000000,4.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//558
initialize({3.000000,3.000000,1.000000,4.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//559
initialize({3.000000,3.000000,2.000000,1.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//560
initialize({3.000000,3.000000,2.000000,1.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//561
initialize({3.000000,3.000000,2.000000,2.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//562
initialize({3.000000,3.000000,2.000000,2.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//563
initialize({3.000000,3.000000,2.000000,4.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//564
initialize({3.000000,3.000000,2.000000,4.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//565
initialize({3.000000,3.000000,2.000000,1.000000,2.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//566
initialize({3.000000,3.000000,2.000000,1.000000,4.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//567
initialize({3.000000,3.000000,2.000000,2.000000,1.000000,4.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//568
initialize({3.000000,3.000000,2.000000,2.000000,4.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//569
initialize({3.000000,3.000000,2.000000,4.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//570
initialize({3.000000,3.000000,2.000000,4.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//571
initialize({3.000000,3.000000,4.000000,1.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//572
initialize({3.000000,3.000000,4.000000,1.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//573
initialize({3.000000,3.000000,4.000000,2.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//574
initialize({3.000000,3.000000,4.000000,2.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//575
initialize({3.000000,3.000000,4.000000,2.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//576
initialize({3.000000,3.000000,4.000000,2.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//577
initialize({3.000000,4.000000,1.000000,2.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//578
initialize({3.000000,4.000000,1.000000,2.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//579
initialize({3.000000,4.000000,1.000000,2.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//580
initialize({3.000000,4.000000,1.000000,2.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//581
initialize({3.000000,4.000000,1.000000,3.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//582
initialize({3.000000,4.000000,1.000000,3.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//583
initialize({3.000000,4.000000,2.000000,1.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//584
initialize({3.000000,4.000000,2.000000,1.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//585
initialize({3.000000,4.000000,2.000000,2.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//586
initialize({3.000000,4.000000,2.000000,2.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//587
initialize({3.000000,4.000000,2.000000,3.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//588
initialize({3.000000,4.000000,2.000000,3.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//589
initialize({3.000000,4.000000,2.000000,1.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//590
initialize({3.000000,4.000000,2.000000,1.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//591
initialize({3.000000,4.000000,2.000000,2.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//592
initialize({3.000000,4.000000,2.000000,2.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//593
initialize({3.000000,4.000000,2.000000,3.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//594
initialize({3.000000,4.000000,2.000000,3.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//595
initialize({3.000000,4.000000,3.000000,1.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//596
initialize({3.000000,4.000000,3.000000,1.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//597
initialize({3.000000,4.000000,3.000000,2.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//598
initialize({3.000000,4.000000,3.000000,2.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//599
initialize({3.000000,4.000000,3.000000,2.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//600
initialize({3.000000,4.000000,3.000000,2.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//601
initialize({4.000000,1.000000,2.000000,2.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//602
initialize({4.000000,1.000000,2.000000,2.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//603
initialize({4.000000,1.000000,2.000000,3.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//604
initialize({4.000000,1.000000,2.000000,3.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//605
initialize({4.000000,1.000000,2.000000,3.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//606
initialize({4.000000,1.000000,2.000000,3.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//607
initialize({4.000000,1.000000,2.000000,2.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//608
initialize({4.000000,1.000000,2.000000,2.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//609
initialize({4.000000,1.000000,2.000000,3.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//610
initialize({4.000000,1.000000,2.000000,3.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//611
initialize({4.000000,1.000000,2.000000,3.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//612
initialize({4.000000,1.000000,2.000000,3.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//613
initialize({4.000000,1.000000,3.000000,2.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//614
initialize({4.000000,1.000000,3.000000,2.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//615
initialize({4.000000,1.000000,3.000000,2.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//616
initialize({4.000000,1.000000,3.000000,2.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//617
initialize({4.000000,1.000000,3.000000,3.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//618
initialize({4.000000,1.000000,3.000000,3.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//619
initialize({4.000000,1.000000,3.000000,2.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//620
initialize({4.000000,1.000000,3.000000,2.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//621
initialize({4.000000,1.000000,3.000000,2.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//622
initialize({4.000000,1.000000,3.000000,2.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//623
initialize({4.000000,1.000000,3.000000,3.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//624
initialize({4.000000,1.000000,3.000000,3.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//625
initialize({4.000000,2.000000,1.000000,2.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//626
initialize({4.000000,2.000000,1.000000,2.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//627
initialize({4.000000,2.000000,1.000000,3.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//628
initialize({4.000000,2.000000,1.000000,3.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//629
initialize({4.000000,2.000000,1.000000,3.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//630
initialize({4.000000,2.000000,1.000000,3.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//631
initialize({4.000000,2.000000,2.000000,1.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//632
initialize({4.000000,2.000000,2.000000,1.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//633
initialize({4.000000,2.000000,2.000000,3.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//634
initialize({4.000000,2.000000,2.000000,3.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//635
initialize({4.000000,2.000000,2.000000,3.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//636
initialize({4.000000,2.000000,2.000000,3.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//637
initialize({4.000000,2.000000,3.000000,1.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//638
initialize({4.000000,2.000000,3.000000,1.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//639
initialize({4.000000,2.000000,3.000000,2.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//640
initialize({4.000000,2.000000,3.000000,2.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//641
initialize({4.000000,2.000000,3.000000,3.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//642
initialize({4.000000,2.000000,3.000000,3.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//643
initialize({4.000000,2.000000,3.000000,1.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//644
initialize({4.000000,2.000000,3.000000,1.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//645
initialize({4.000000,2.000000,3.000000,2.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//646
initialize({4.000000,2.000000,3.000000,2.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//647
initialize({4.000000,2.000000,3.000000,3.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//648
initialize({4.000000,2.000000,3.000000,3.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//649
initialize({4.000000,2.000000,1.000000,2.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//650
initialize({4.000000,2.000000,1.000000,2.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//651
initialize({4.000000,2.000000,1.000000,3.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//652
initialize({4.000000,2.000000,1.000000,3.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//653
initialize({4.000000,2.000000,1.000000,3.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//654
initialize({4.000000,2.000000,1.000000,3.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//655
initialize({4.000000,2.000000,2.000000,1.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//656
initialize({4.000000,2.000000,2.000000,1.000000,3.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//657
initialize({4.000000,2.000000,2.000000,3.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//658
initialize({4.000000,2.000000,2.000000,3.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//659
initialize({4.000000,2.000000,2.000000,3.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//660
initialize({4.000000,2.000000,2.000000,3.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//661
initialize({4.000000,2.000000,3.000000,1.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//662
initialize({4.000000,2.000000,3.000000,1.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//663
initialize({4.000000,2.000000,3.000000,2.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//664
initialize({4.000000,2.000000,3.000000,2.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//665
initialize({4.000000,2.000000,3.000000,3.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//666
initialize({4.000000,2.000000,3.000000,3.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//667
initialize({4.000000,2.000000,3.000000,1.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//668
initialize({4.000000,2.000000,3.000000,1.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//669
initialize({4.000000,2.000000,3.000000,2.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//670
initialize({4.000000,2.000000,3.000000,2.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//671
initialize({4.000000,2.000000,3.000000,3.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//672
initialize({4.000000,2.000000,3.000000,3.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//673
initialize({4.000000,3.000000,1.000000,2.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//674
initialize({4.000000,3.000000,1.000000,2.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//675
initialize({4.000000,3.000000,1.000000,2.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//676
initialize({4.000000,3.000000,1.000000,2.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//677
initialize({4.000000,3.000000,1.000000,3.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//678
initialize({4.000000,3.000000,1.000000,3.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//679
initialize({4.000000,3.000000,2.000000,1.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//680
initialize({4.000000,3.000000,2.000000,1.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//681
initialize({4.000000,3.000000,2.000000,2.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//682
initialize({4.000000,3.000000,2.000000,2.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//683
initialize({4.000000,3.000000,2.000000,3.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//684
initialize({4.000000,3.000000,2.000000,3.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//685
initialize({4.000000,3.000000,2.000000,1.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//686
initialize({4.000000,3.000000,2.000000,1.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//687
initialize({4.000000,3.000000,2.000000,2.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//688
initialize({4.000000,3.000000,2.000000,2.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//689
initialize({4.000000,3.000000,2.000000,3.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//690
initialize({4.000000,3.000000,2.000000,3.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//691
initialize({4.000000,3.000000,3.000000,1.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//692
initialize({4.000000,3.000000,3.000000,1.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//693
initialize({4.000000,3.000000,3.000000,2.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//694
initialize({4.000000,3.000000,3.000000,2.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//695
initialize({4.000000,3.000000,3.000000,2.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//696
initialize({4.000000,3.000000,3.000000,2.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//697
initialize({4.000000,3.000000,1.000000,2.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//698
initialize({4.000000,3.000000,1.000000,2.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//699
initialize({4.000000,3.000000,1.000000,2.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//700
initialize({4.000000,3.000000,1.000000,2.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//701
initialize({4.000000,3.000000,1.000000,3.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//702
initialize({4.000000,3.000000,1.000000,3.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//703
initialize({4.000000,3.000000,2.000000,1.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//704
initialize({4.000000,3.000000,2.000000,1.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//705
initialize({4.000000,3.000000,2.000000,2.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//706
initialize({4.000000,3.000000,2.000000,2.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//707
initialize({4.000000,3.000000,2.000000,3.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//708
initialize({4.000000,3.000000,2.000000,3.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//709
initialize({4.000000,3.000000,2.000000,1.000000,2.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//710
initialize({4.000000,3.000000,2.000000,1.000000,3.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//711
initialize({4.000000,3.000000,2.000000,2.000000,1.000000,3.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//712
initialize({4.000000,3.000000,2.000000,2.000000,3.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//713
initialize({4.000000,3.000000,2.000000,3.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//714
initialize({4.000000,3.000000,2.000000,3.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//715
initialize({4.000000,3.000000,3.000000,1.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//716
initialize({4.000000,3.000000,3.000000,1.000000,2.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//717
initialize({4.000000,3.000000,3.000000,2.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//718
initialize({4.000000,3.000000,3.000000,2.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//719
initialize({4.000000,3.000000,3.000000,2.000000,1.000000,2.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
//720
initialize({4.000000,3.000000,3.000000,2.000000,2.000000,1.000000},N, A);
 merge_sort(A,N,increasing,operations);
assert(equal(list,A,N));
std::cerr << "test_merge_sort_case_26()" << " - OK.\n";
}

void test_merge_sort_cases()
{test_merge_sort_case_1();
test_merge_sort_case_2();
test_merge_sort_case_3();
test_merge_sort_case_4();
test_merge_sort_case_5();
test_merge_sort_case_6();
test_merge_sort_case_7();
test_merge_sort_case_8();
test_merge_sort_case_9();
test_merge_sort_case_10();
test_merge_sort_case_11();
test_merge_sort_case_12();
test_merge_sort_case_13();
test_merge_sort_case_14();
test_merge_sort_case_15();
test_merge_sort_case_16();
test_merge_sort_case_17();
test_merge_sort_case_18();
test_merge_sort_case_19();
test_merge_sort_case_20();
test_merge_sort_case_21();
test_merge_sort_case_22();
test_merge_sort_case_23();
test_merge_sort_case_24();
test_merge_sort_case_25();
test_merge_sort_case_26();
}
