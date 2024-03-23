#include<iostream>
#include<vector>
#include<cstdlib>



void run();
bool is_sorted(const std::vector<int>& v);

//------------------------------------------
int main()
{
	run();
	return 0;
}


//------------------------------------------

void run()
{
	//given data
	std::vector v = {-100,-50,-5,0,5,10,30};
	if(!is_sorted(v))
	{
		std::cout << "The vector is unsorted.\n";
	}
	
	int N = v.size();
	int min_index =0;
	while(v[min_index]<0)
	{
		++min_index;
	}

	if(min_index > 0 && v[min_index] > abs( v[min_index-1]))
	{
		--min_index;
	}
	else if(min_index == N-1)
	{
		min_index = 0;
	}

	int p = min_index+1;
	int k = min_index;
	int current_index;
	std::cout << "{ ";
	while(p<N || k>=0)
	{
		if(k>=0 && p<N && abs(v[p]) > abs( v[k]))
		{
			current_index = k;
			--k;
		}
		else if(p<N && k>=0 &&   abs(v[p]) <= abs(v[k]))
		{
			current_index = p;
			++p;
		}
		else if(k<0)
		{
			p = current_index;
			++p;
		}
		else if(p>=N)
		{
			current_index = k;
			--k;
		}

			std::cout << v[current_index] << " ";
		//	std::cout << min_index << " " << k << " " << p << "\n";
	}

	std::cout << " }\n";

}


bool is_sorted(const std::vector<int>& v)
{
	for(int i=0; i<v.size()-1; ++i)
	{
		if(v[i] > v[i+1])
		{
			return false;
		}
	}
	return true;
}

