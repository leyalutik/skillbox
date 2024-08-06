#include <iostream>
const int64_t MAX_LONG = 9223372036854775807;
const int64_t MAX_LONG_NEG  =  -9223372036854775808;


void evendigits(int64_t& number, int16_t& ans);

int64_t max_int64_t();
int main()
{

	int64_t number;
	int16_t ans = 0;
	std::cout << "Enter number in [" << MAX_LONG_NEG << ", " << MAX_LONG << "]\n:";
	std::cin >> number;
	evendigits(number,ans);
	std::cout << "ans = " << ans << "\n";
	return 0;
}



void evendigits(int64_t& number, int16_t& ans)
{
	if(number == 0)
	{
		return;
	}
	ans =( ((number % 10) % 2) == 0 ? ++ans : ans );
	number /= 10;
	evendigits(number,ans);
}


int64_t max_int64_t()
{
	int64_t max = 0;
	int64_t stepen = 1;

	for(int i=0; i<63; ++i)
	{
		max += stepen;
		stepen *= 2;
	}
	return max;
}

