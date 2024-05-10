#include<iostream>
#include<string>
#include<sstream>

/*
 *
 *Ввод больше 7 символов
 Ввод ровно 7 символов
 Ввод 0 символов

 Ввод повторяющихся символов
 в начале
 в середине 
 конце

 Ввод нулей

 Ввод других символов

 Ввод 1234567

 Ввод 1

 Ввод 0

 Ввод 77

 Ввод ыавыа*
 *
 *
 *
 *
 */


enum  NOTE
{

	DO = 1,
	   RE = 2,
	   MI = 4,
	   FA = 8,
	   SOL = 16,
	   LA = 32,
	   SI = 64

};


void input_line(std::string& line);
bool valid_input(const std::string& line);
void task4();
void create_bitmask(const std::string& line, int& bitmask);
void output_chord( const int bitmask);



//-----------------------------------------
int main()
{

	task4();


	return 0;
}

//-----------------------------------------


void task4()
{


	std::string line;
	std::cout << "Input chord:\n";

	input_line(line);

	int bitmask = 0;
	create_bitmask(line,bitmask);

	output_chord(bitmask);

}

void input_line(std::string& line)
{
	while(true)
	{

		std::getline(std::cin, line, '\n');
		if(valid_input(line))
		{
			break;
		}
		std::cout << "The chord is not valid. Try again.\n";
	}
	

}
void output_chord(const int bitmask)
{


	if(bitmask & NOTE::DO)
	{
		std::cout << "DO";
	}
	if(bitmask & NOTE::RE)
	{
		std::cout << "RE";
	}
	if(bitmask & NOTE::MI)
	{
		std::cout << "MI";
	}
	if(bitmask & NOTE::FA)
	{
		std::cout << "FA";
	}
	if(bitmask & NOTE::SOL)
	{
		std::cout << "SOL";
	}
	if(bitmask & NOTE::LA)
	{
		std::cout << "LA";
	}
	if(bitmask & NOTE::SI)
	{
		std::cout << "SI";
	}
}

void create_bitmask(const std::string& line, int& bitmask)
{

	bitmask = 0;
	for(size_t i=0; i<line.size(); ++i)
	{
	
		bitmask +=  (1 << int(line[i]));
	}
}


bool valid_input(const std::string& line)
{


	if(line.size() < 1 || line.size() > 7)
	{
		return false;
	}
	



	for(size_t i=0; i<line.size(); ++i)
	{

		//has not digits
		if(!isdigit(line[i]))
		{
			return false;
		}

		if(line[i] == '0')
		{
			return false;
		}


	}
	return true;
}
