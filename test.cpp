#include <iostream>
#include<vector>
#include<string>
#include<initializer_list>

#include "source/input/standart_type.h"
#include "source/test/create_test_cases.h"
#include "source/test/create_permutations.h"

#include "source/test/test_cases.h"



void menu(); //display menu
void create_cases();


void create_cases()
{
	std::vector<std::initializer_list<float>> lists = {
	{1},
	{1,2},
	{1,2,3},
	{1,2,3,4},
	{1,2,3,4,5},
	{1,2,3,4,5,6},
	{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15},
	{1,1},
	{1,1,2},
	{1,1,1,3},
	{1,1,2},
	{1,3,3,3},
	{1,2,3,3},
	{1,1,2,2},
	{1,1,2,3},
	{1,1,1,2},
	{1,4,4,4,4},
	{1,2,3,4,4},
	{1,2,3,3,3},
	{1,2,2,2,2},
	{1,1,1,1,1},
	{1,1,1,1,2},
	{1,1,1,2,3},
	{1,1,1,2,2},
	{1,1,2,3,4},
	{1,2,2,3,3,4}
	};
	create_test(lists);
}

int main()
{

	
	//float M15[15] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	//permutations_15(M15);
  int32_t answer = 0;
	while(answer != 3)
		{	
			menu();
			input(answer);
			switch(answer)
				{
					case 1 :run_test_cases();
						
				break;
					case 2 : create_cases();
									 std::cerr << "The test cases have been created.\nClose this program,\nMove test_cases.h and test_cases.cpp from \"build\" directory to \"test\" directory.\nLaunch \"make\" in build directory again.\n";
										break;
							
					case 3 : std::cerr << "Exit menu.\n";
									return 0;
					default: std::cerr << "Illegal value. Try again.\n";
										break;
				}
		}
	
return 0;
	
}

void menu()
{
	std::cerr << "Launch Tests(1)\n" << "Create Tests(2)\n" << "Exit(3)\n\n";
}
