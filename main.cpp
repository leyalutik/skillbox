#include<string>
#include<iostream>
#include<vector>
#include<ctime>
#include<cstdlib>
#include<fstream>

int main()
{
bool exit = 1;
	while(exit)
	{

		std::cout << std::endl;
		std::cout << std::setw(30) << std::left <<  " Input a query:";
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::setw(32) << std::left << "--------------------------------------" << "\n";
		std::cout << std::setw(30) << std::left <<  "Templates:\n";
		std::cout  << std::setw(30)<< std::left << "<number>(xx-xx-xx) <surname>\n";
		std::cout << std::setw(30) <<  std::left << "<number>(xx-xx-xx)" << "\n";
		std::cout << std::setw(30) <<  std::left << "<surname>" << "\n";

		std::cout << std::setw(32) << std::left << "--------------------------------------" << "\n";
		std::cout << "Continue the program ? Yes(1)/ No(0):\n";
		std::cin >> exit;
		std::cin.ignore(1000,'\n');
		std::cin.good();

	}


	return 0;
}
