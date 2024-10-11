#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include<ctime>
#include<cstdlib>



int main()
{

	std::cout << "Enter the height and the width:\n";
	int32_t height=0, width=0;
	while(!(std::cin >> height) || !(std::cin >>  width) || (height <= 0) || (width <= 0))

	{
		std::cout << "Invalid data.Try again.\n";
		std::cin.ignore(1000,'\n');
		std::cin.good();
	}
	
//	std::cout << "height = " << height << "\nwidth = " << width << "\n";

	const std::string filename("pic.txt");

	std::ofstream ofs(filename.c_str(), std::ios_base::binary | std::ios_base::out);
	if(!ofs.is_open())
	{
		std::cout << "Can't be opened the file for record.\n";
	}

std::srand(std::time(nullptr));
for(size_t i=0; i<height; ++i)
{
	for(size_t j=0; j<width; ++j)
	{
		ofs << std::rand()%2;
		if(j == width-1)
		{
			ofs << '\n';
		}
	}
}
	ofs.close();





	return 0;
}
