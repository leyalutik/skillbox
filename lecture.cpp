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


	int p = min_index;
	int k = min_index-1;
	int current_index;
	std::cout << "{ ";
	while(p<N || k>=0)
	{
		if(k>=0 && ( (abs(v[p]) > abs( v[k]) || p>=N)))
		{
			current_index = k;
			--k;
		}
		else if(p<N && ( (abs(v[p]) <= abs(v[k])) || k<0))
		{
			current_index = p;
			++p;
		}

			std::cout << v[current_index] << " ";
		//	std::cout << min_index << " " << k << " " << p << "\n";
	}

	std::cout << "}\n";

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

