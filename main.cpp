#include<iostream>


void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;

}

int main()

{
	int a = 10;
	int b = 5;
	swap(a,b);

	std::cout << "a = " << a << " b = " << b << "\n";

	return 0;

}
