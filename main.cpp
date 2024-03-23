#include<iostream>
#include<cassert>
#include<string>
#include<vector>
#include<tuple>
#include<exception>



void find_sum_pair(const int REZ, const std::vector<int>& sorted_list);
void sort(std::vector<int>& v);
void test();


int main()
{
	//test();
	std::vector<int> v = {1,2,3,4,5,6,7};
	sort(v);
	find_sum_pair(9,v);

	return 0;
}



void find_sum_pair(const int REZ, const std::vector<int>& sorted_list)
{
	if(sorted_list.size() < 2)
	{
		std::cerr << "Incorrect number of elements in sequence.\n";
		return;
	}
	
	int i = 0, j = sorted_list.size() - 1;
	while(i < j)
	{
		int sum = sorted_list[i] + sorted_list[j];
		if(sum < REZ)
		{
			++i;
		}
		else if(sum > REZ)
		{
			--j;
		}
		else
		{
			std::cout << "\nThe given number = " << REZ << "\nNum1 = " << sorted_list[i] << " Num2 = " << sorted_list[j] << "\n"; 
			return;
		}
	}
	std::cerr << "No valid pair found.\n";
}
void sort(std::vector<int>& v)
{
	std::sort(v.begin(), v.end());
}

void test()
{
	std::vector<std::vector<int>> v = {
		{0},
		{-1,-2,-3,-4,5,6,7},//-4
		{0,5,6,2,3,6,1,-1},//1
		{6,7,-1,8,2}, //1
		{4,3,6,2,4,8,1,10},//18
		{3,8,2,3,9,-1,0}, //9
		{0,-1,-2,-3,1,2,3} //0
	};
	std::vector<int> REZ =  {1,-4,1,1,18,9,0};
	for(int i=0; i< v.size(); ++i)
	{
  sort(v[i]);
		find_sum_pair(REZ[i],v[i]);
	}
}
