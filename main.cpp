#include<iostream>
#include<fstream>
#include<string>



int main()
{
	std::string path_file;

	std::cout << "Enter path to file:\n";
	std::cin >> path_file;

	std::ifstream inf(path_file.c_str(), std::ios::binary );
	while(!inf.is_open()) 
	{
		std::cout << "The program can't open the file."
			<< "Try again.\nEnter path to the file:\n";
		std::cin >> path_file;
		std::ifstream inf(path_file.c_str(), std::ios::binary);


	}

	while(!inf.eof())
	{
		size_t size_page = 100;
		char Page[size_page+1];
		inf.read(Page,size_page);

		Page[inf.gcount()] = '\0';

		std::cout << Page;
	}



	return 0;
}

//--------------------------------------------
