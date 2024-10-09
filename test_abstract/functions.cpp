#include "functions.h"
#include <cassert>
// current functions
//----------------------------------------------





int32_t create_number(const int32_t sector, std::vector<bool>&  picked_sectors)
{
	int32_t current_sector = sector;
	int counter = 0;
	while(picked_sectors[current_sector])
	{//find unpicked sector number
		++current_sector;
		++counter;
		if(counter > picked_sectors.size())
		{
			throw std::runtime_error("No unused sectors.\n");
		}
		current_sector = current_sector % picked_sectors.size();
	}
	picked_sectors[current_sector] = 1;

	return current_sector;
}



//create_number(current_sector);

// is_right_answer(const string right_answer, string user_answer);
//"user_answer" must be part of the "right_answer"
//used functions right_answer.find(user_answer) ???












//--------------------------------------------
//UNUSED FUNCTIONS

void get_data(const std::string& input_file, const int32_t size,  std::vector<std::string>& v)
{//size = 13
 //file both must have only 13 not empty lines
 
	if(v.size() != 0)
	{
		v.clear();
	}


	std::ifstream ifs(input_file.c_str(),std::ios_base::in);
	if(!ifs.is_open())
	{
		std::cout << "Input file " << input_file << " for installing game questions can't be opened.\n";
		return ;
	}

	size_t counter = 0;
	std::string line;
	while(getline(ifs,line) && counter <= size)
	{
		assert(!line.empty());
		++counter;
		v.push_back(line);
	}

	assert(counter == size);

}









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









void insert_sort(std::string& line)
{

//initialize
std::vector<int32_t> A;
modify_string_to_vec(line,A);

/*
if(A[0] > A[1])
{
	int key = A[0];
	A[0] = A[1];
	A[1] = key;
}
*/	for(int i=1; i< A.size(); ++i)
	{	int key = A[i];
		for(int j = i-1; j>=0; --j)
		{
			if(key >  A[j])
			{
			
				A[j+1] = key;
				break;
			}
			else if(j == 0 && key <= A[j])
			{
				A[j+1] = A[j];
				A[j] = key;
				break;
			}
			A[j+1] = A[j];
		}

	}
modify_vec_to_string(A,line);
}


