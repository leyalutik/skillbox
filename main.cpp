#include <iostream>
#include <string>
#include <cassert>
#include<vector>
#include<fstream>

void get_data(const std::string& filename, const int32_t size, std::vector<std::string>& v);




int32_t create_number(const int32_t sector, std::vector<bool>&  picked_sectors);


int main()
{

const std::string input_file_questions("q1");
const std::string input_file_right_answers("ra1");
const int32_t NUMBER_SECTORS=13;
const int32_t LIMIT_RIGHT_ANSWER_NUMBER = 6;

int32_t current_sector = 0; //0-12 13 sectors
int32_t right_answers_player=0, right_answers_computer=0;
std::vector<bool> picked_sectors(NUMBER_SECTORS,0);

std::vector<std::string> questions, right_answers;

get_data(input_file_questions,NUMBER_SECTORS,questions);//size = 13
get_data(input_file_right_answers,NUMBER_SECTORS,right_answers);//size = 13

while( right_answers_computer < LIMIT_RIGHT_ANSWER_NUMBER &&  right_answers_player < LIMIT_RIGHT_ANSWER_NUMBER )
{
	//choose the question number
	std::cout << "Input sector shift :\n";
	int32_t shift=0;
	std::cin >> shift;
	while(!std::cin)
	{
		std::cout << "Input valid data:\n";
		std::cin.ignore(10000);
		std::cin.good();
		std::cin >> shift;
	}
	current_sector =  create_number(((current_sector+shift)%NUMBER_SECTORS), picked_sectors);
	// answer the question
	std::cout << "Number question = " <<current_sector << "\n";
	std::cout << questions[current_sector] << "\n";
	std::string answer_player;
	std::cin >> answer_player;
	
	// evaluate the result
	
	if( right_answers[current_sector].find(answer_player) != std::string::npos)
	{
		std::cout <<"There is a right answer!\n";
		++right_answers_player;
	}
	else
	{
		std::cout <<"There is not  a right answer!\n";
		++right_answers_computer;
	}

}

if(right_answers_computer == LIMIT_RIGHT_ANSWER_NUMBER)
{
	std::cout << "Computer wins.\n";
}
else
{
	std::cout << "You wins.\n";
}




	return 0;
}


//-------------------------------------------
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


