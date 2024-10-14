#include<iostream>
#include <iomanip>
#include <cstdlib>
int main()
{
	bool exit = 1;
	while(exit)
	{

		std::cout << std::endl;
		std::cout << std::setw(30) << std::right <<  "Operations of vectors";
		std::cout << std::endl;
		std::cout << std::setw(32) << std::right << "--------------------------------------" << "\n";
		std::cout << std::left << std::setw(35) << "Add 2 vectors:" << std::right << std::setw(15) << "add\n";
		std::cout << std::setw(35) <<  std::left << "Substract 2 vectors" << std::right << std::setw(15) << "substract\n";
		std::cout << std::setw(35) <<  std::left << "Multiply vector and scalar value" << std::right << std::setw(15) << "scale\n";
		std::cout << std::setw(35) <<  std::left << "Evaluate the length of vector:" << std::right << std::setw(15) << "length\n";
		std::cout << std::setw(35) <<  std::left << "Normalization of vector:" << std::right << std::setw(15) << "normalize\n";

		std::cout << std::setw(32) << std::right << "--------------------------------------" << "\n";
			
		std::cout << "Continue the program ? Yes(1)/ No(0):\n";
		std::cin >> exit;
		std::cin.ignore(1000,'\n');
		std::cin.good();
	}

return 0;

}
