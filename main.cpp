#include<iostream>
#include<fstream>
#include<string>
#include<sstream>




bool is_PNG_filename(const std::string& path_to_file);
bool  is_PNG_filecontent(const std::string& path_to_file);




int main()
{
	std::string path_to_file;
	std::cout << "Is it PNG file ?\n";
	std::cout << "Input path to file:\n";
	std::getline(std::cin,path_to_file);
	std::cout << (is_PNG_filename(path_to_file) && is_PNG_filecontent(path_to_file) ? "YES" : "NO") << "\n";
	return 0;
}


//-----------------------------------
//suportive functions

bool is_PNG_filename(const std::string& path_to_file)
{
	if(path_to_file.size() < 5)
	{
		return false;
	}

	if(path_to_file.substr(path_to_file.size()-4,4) != ".png")
	{
		std::cout << path_to_file.substr(4) << "\n";
		return false;
	}





	return true;
}
bool  is_PNG_filecontent(const std::string& path_to_file)

{
//	std::ifstream ifs(" ~/git/skillbox/test_abstract/file.png" ,std::ios_base::in | std::ios_base::binary);
	std::ifstream ifs(path_to_file.c_str(),std::ios_base::in | std::ios_base::binary);
	if(!ifs.is_open())
	{
		std::cout << "file " << path_to_file << " was not opened.\n"; 
		return false;
	}
	unsigned char header[8];
	unsigned char PNG_header[8] = { 137, 80, 78, 71, 13, 10, 26, 10 };
	ifs.read(reinterpret_cast<char*>(header),8);
	std::cout << "\n";
	for (size_t i=0; i<8; ++i)
	{
		if(header[i] != PNG_header[i])
		{
			return false;
		}
	}
	return true;
}


