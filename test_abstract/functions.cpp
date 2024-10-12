#include "functions.h"
// current functions
//----------------------------------------------

void withdrawal(std::string& line)
{
	std::vector<int32_t> banknotes = {100,200,500,1000,2000,5000};
	std::vector<int32_t> numbers;
	modify_string_to_vec(line,numbers);
	
	std::vector<int32_t> unchanged_numbers(numbers);
	int32_t user_amount = numbers[6];
	if(user_amount < 0 || (user_amount % 100) != 0)
	{
		std::cout << "Invalid amount.\n";
		return ;
	}

	int32_t current_index = 5;
	while(user_amount > 0 &&  current_index > -1 )
	{
		if(user_amount >= banknotes[current_index])
		{
			if(numbers[current_index] >0)
			{
			    --numbers[current_index];
			    user_amount -=banknotes[current_index];
			}
			else
			{
				--current_index;
			}
		}
		else
		{
			
			--current_index;

		}
	}
	if(current_index == -1)
	{
		std::cout << "No banknotes.\n";
	modify_vec_to_string(unchanged_numbers,line);
		return;
	}

	modify_vec_to_string(numbers,line);

}







//--------------------------------------------
//UNUSED FUNCTIONS
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


