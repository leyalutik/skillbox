#include<string>
#include<iostream>
#include<vector>
#include<ctime>
#include<cstdlib>
#include<fstream>
#include<cctype>
#include<sstream>
enum class COMMAND
{
	ADD_NUMBER_SURNAME = 0,
	FIND_SURNAME = 1,
	FIND_NUMBER = 2
};

struct  Phone_book
{

	COMMAND input_query(std::istream& is);
	bool is_valid_number();
	bool is_valid_surname();
	bool is_number(const std::string& word);
	bool is_surname(const std::string& word);

	void run_command(COMMAND command);
	std::string number;
	std::string surname;
};




int main()
{
	bool exit = 1;
	while(exit)
	{

		std::cout << std::left <<std::setw(30)  <<  "Input a query:" << std::endl;
		std::cout  << "-------------------------------\n";
		std::cout << std::setw(30) << std::left <<  "Templates:" << std::endl;
		std::cout  << std::setw(30)<< std::left << "<number>(xx-xx-xx) <surname>" << std::endl;
		std::cout << std::setw(30) <<  std::left << "<number>(xx-xx-xx)" << std::endl;
		std::cout << std::setw(30) <<  std::left << "<surname>" << std::endl;

		std::cout << std::setw(32) << std::left << "--------------------------------------" << std::endl;

		Phone_book phone_book;
		phone_book.run_command(phone_book.input_query(std::cin));

		std::cout << "Continue the program ? Yes(1)/ No(0):\n";
		std::cin >> exit;
		std::cin.clear();
		std::cin.ignore(1000,'\n');

	}

	return 0;
}

//----------END---------MAIN--------------


COMMAND Phone_book::input_query(std::istream& is)
{
	
	COMMAND command;
	int32_t LIMIT = 0;

	while(LIMIT < 1000)
	{
		++LIMIT;
		std::vector<std::string> words;
		std::string line;
		std::string word;
		std::getline(std::cin, line, '\n');
		std::stringstream ss(line);
		while(ss >> word)
		{
			words.push_back(word);
		}


		if(words.size() ==0 || words.size() > 2)
		{
			std::cout << "Invalid number of words.Try again.\n";
			continue;
		}

		if(is_number((words[0])))
		{
			this->number = words[0];
			if(this->is_valid_number() && (words.size() == 1))
			{
				command = COMMAND::FIND_SURNAME;
				break;
			}
		}
		else if(is_surname((words[0])))
		{
			this->surname = words[0];
			if(this->is_valid_surname())
			{
				command = COMMAND::FIND_NUMBER;
				break;

			}
		}

		else if(words.size() == 2)
		{
			this->number = words[0];
			this->surname = words[1];
		}
		if(this->is_valid_number() && this->is_valid_surname())
		{


			command = COMMAND::ADD_NUMBER_SURNAME;
			break;
		}

		else
		{

			std::cout << "Invalid number of words.Try again.\n";
		}
	}
	if(LIMIT == 1000)
	{
		std::cout << "Multiplying invalid input.Program terminates.\n";
	}
	return command;

}

bool Phone_book::is_number(const std::string& word)
{
	if(word.size() == 0)
	{
		return 0;
	}
	return std::isdigit(word[0]);
}

bool Phone_book::is_surname(const std::string& word)
{
	if(word.size() == 0)
	{
		return 0;
	}
	return std::isalpha(static_cast<unsigned char>(word[0]));

}


bool Phone_book::is_valid_number()
{
	if(this->number.size() == 0 || this->number.size() != 8)
	{
		return 0;
	}
	for(size_t i=0; i<this->number.size(); ++i)
	{
		if(i == 2 || i ==5)
		{
			if(this->number[i] != '-')
			{
				return 0;
			}
		}
		else
		{
			if(!std::isdigit(this->number[i]))
			{
				return 0;
			}

		}
	}
		return 1;

}

bool Phone_book::is_valid_surname()
{
	if(this->surname.size() == 0)
	{
		return 0;
	}
	for(const auto& w : this->surname)
	{
		if(!std::isdigit(w))
		{
			return 0;
		}
	}

	return 1;

}

void Phone_book::run_command(COMMAND command)
{

	switch(command)
	{
		case COMMAND::ADD_NUMBER_SURNAME:
			std::cout << "Command add a number and surname\n";
			break;
		case COMMAND::FIND_NUMBER:
			std::cout << "Command:find a number\n";
			break;
		case COMMAND::FIND_SURNAME:
			std::cout << "Command:find a surname\n";
			break;
		default: std::cout << "Unknown command.\n";
	}

	this->number.clear();
	this->surname.clear();
}

