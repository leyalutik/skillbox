#include<iostream>
#include<vector>



void sort(std::vector<int>& massive);

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
			if(massive.size() >=5)
			{
				std::cout << "{" <<  massive[4] << "}\n";
			}
			else
			{
				std::cout << "Size of massive is less 5.\n";
			}
		}
		else
		{
			if(massive.size() <= 5)
			{
				massive.push_back(number);
			}
			else
			{
				massive[5] = number; //5 auxilary indexto save new element
			}
			sort(massive);
		}
			}

	std::cout << "Incorrect input.\n";

}

void sort(std::vector<int>& massive) //sort ordered massive with last unsorted element
				     
{
	int N = massive.size();
	if(N == 0)
	{
		std::cout << "function sort: massive size = 0.\n";
		return;
	}

	for(int i=N-1; i>0; --i)
	{
		if(massive[i] < massive[i-1])
		{
			std::swap(massive[i],massive[i-1]);
		}
	}
}

/*
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
*/
