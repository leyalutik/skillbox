#include<iostream>
#include<vector>


void add_element_to_fix_sorted_massive(std::vector<int>& massive, const int element);

void output(const std::vector<int>& massive);

void run();




int main()
{
	run();

	return 0;
}



void run()
{

	int number;
	std::vector<int> massive;
	while(( std::cout << "Input number:\n") &&
  std::cin >> number)
	{
		if(number == -2)
		{
			return;
		}
		if(number == -1)
		{
			output(massive);
		}
		else
		{
			add_element_to_fix_sorted_massive(massive,number);
		}
			}

	std::cout << "Incorrect input.\n";

}


void add_element_to_fix_sorted_massive(std::vector<int>& massive, const int element)
{
	int N = massive.size();
	
	if(N>5)
	{
		std::cout << "Incorrect size of massive.\n";
		return;
	}
	if(N==0)
	{
		massive.push_back(element);
		return;
	}

	int index = 0;
	//find index
	
	if(element >= massive[massive.size()-1])
	{//last element
		if(N<5)
		{
			massive.push_back(element);
		}
		return;
	}

	if(element < massive[0])
	{//first element
		index = 0;
	}

	while(element > massive[index] && index < 5)
	{
		++index;
	}

	//insert element

	if(N<5)
	{
		++N;
	}

	for(int i=N-1; i>index; --i)
	{
		massive[i] = massive[i-1];
	}

	massive[index] = element;

}

void output(const std::vector<int>& v)
{
	bool isFirst = true;
	std::cout << "{ ";
	for(int i=0; i<v.size(); ++i)
	{

		if(!isFirst)
		{
			std::cout << ",";
		}
		isFirst = false;
		std::cout << v[i];
	}
	std::cout << " }\n";
}

