
#include <iostream>
#include <cassert>
#include<vector>

//--------------------------MAIN-------
vold input(float& value);
int main()
{
	for (int ch = -128; ch < 128; ++ch)
		{
			char sym = ch;
			std::cout << " Code = " << ch << " sym = " <<  sym << " ;";
			if(ch % 2 == 0)
			{
				std::cout << std::endl;
			}
		}
	
	return 0;
}

vold input(float& value)
{
	
}

