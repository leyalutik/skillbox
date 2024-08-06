#include <iostream>




int rabbit(int n, int k=3);



int main()
{
	int n=0, k=0;

	std::cout << "Enter n, k :\n";
	std::cin >> n >> k;

	std::cout << (n != 0 ?  rabbit(n,k) : 0);

	return 0;
}







int rabbit(int n, int k)
{
	if(n < 0 ||  k<= 0)
	{
		return 0;
	}
	if(n == 0)
	{
		return 1;
	}
	int sum = 0;
	for(int i=1; i<= k; ++i)
	{

		sum += rabbit(n-i,k);
	}

	return sum;
}
