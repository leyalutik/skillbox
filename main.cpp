#include<iostream>
#include<vector>
#include<cstdlib>


// input - 2bit string   output - 10 число

int converttodecimal (const std::string& str)
{
int sum = 0;
int e = 1;
	for(int i=str.size()-1; i>=0; --i)
	{
		sum += (str[i]-'0')*e;
		e *= 2;
	}
return sum;
}


int main()
{

	std::string str;
	std::cout << "Input sequence of bit :\n";
	std::cin >> str;
	std::cout << "\n" << converttodecimal(str) << "\n";;

	return 0;
}
