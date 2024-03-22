#include<iostream>
#include<cassert>
#include<string>
#include<vector>
#include<tuple>
#include<exception>



int max_accumulator(const std::vector<int>& seq);
void test();


int main()
{
//	test();

	std::vector<int> v = {1,2,3};
	max_accumulator(v);
}

int max_accumulator(const std::vector<int>& seq)
{
	if(seq.size() <2)
	{
		std::cout << "Incorrect input data.\n";
		return -1;
	}
int N = seq.size();
int left=0, right=1;
int max = seq[0]+seq[1];

for(int i=0; i<N-1; ++i)
{
	int sum = seq[i];
	for(int j=i+1;j<N;++j)
	{
		sum +=seq[j];
		if(sum > max)
		{
			max = sum;
			left = i;
			right = j;
		}
	}
}
	std::cout << "Left index = " << left << "\nRight index = " << right <<"\nmax sum = " << max << "\n";;
	return max;

}

void test()
{
	//input data - right answer
	std::vector<std::vector<int>> input_data = {
		{1,2,3,4,5},
		{-10,5,6,7},
		{1,2,3,-6,1,2,4},
		{1,2,3,-6,1,2,3},
		{1,2,3,-10},
		{1,1,1,-10,5,6,7,-10,1,1,1},
		{1,2,3,-10,1,1,1,-10,1,1,1},
		{1,2,3,-10,1,1,1,-10,1,2,3},

	};
	std::vector<int> right_answer = {15,18,7,6,6,18,6,6};

	//check function
	for(int i=0; i<input_data.size(); ++i)
	{


		assert(max_accumulator(input_data[i]) == right_answer[i]);
		
	}

	std::cerr << "TEST - OK.";

}


