#include<iostream>



void swap(int& i, int& j)
{
	int temp = i;
	i = j;
	j = temp;
}

void reverse_massive(const int& N, int* p)
{
	int i=0, j=9;
	while(i<j)
	{
		swap(*(p+i),*(p+j));
		++i;
		--j;
	}
}


void print(const int& N, int* p)
{

	std::cout << std::endl;
	for(size_t i=0; i<N; ++i)
	{
		std::cout << *(p+i);
	}
	std::cout << std::endl;
}


int main()
{

	int a[10] = {0,1,2,3,4,5,6,7,8,9};
	reverse_massive(10,a);
	print(10,a);

	return 0;

}
