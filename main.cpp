#include<string>
#include<iostream>
#include<vector>
#include<ctime>
#include<cstdlib>
#include<fstream>
#include<cctype>
#include<sstream>
#include<map>
#include<set>

enum class COMMAND
{
	ADD_NUMBER_SURNAME = 0,
	FIND_SURNAME = 1,
	FIND_NUMBER = 2
};

struct  Phone_book
{

	bool parse_query(const std::string& line);
	bool is_valid_number(const std::string& word);
	bool is_valid_surname(const std::string& word);
	bool is_number(const std::string& word);
	bool is_surname(const std::string& word);

	void run_command(const std::string& line);

	COMMAND command;
	std::map<std::string,std::vector<std::string>> book;

	std::string number;
	std::string surname;
};




int main()
{
	while(true)
	{

		std::cout << std::left <<std::setw(30)  <<  "Input a query:" << std::endl;
		std::cout  << "-------------------------------\n";
		std::cout << std::setw(30) << std::left <<  "Templates:" << std::endl;
		std::cout  << std::setw(30)<< std::left << "<number>(xx-xx-xx) <surname>" << std::endl;
		std::cout << std::setw(30) <<  std::left << "<number>(xx-xx-xx)" << std::endl;
		std::cout << std::setw(30) <<  std::left << "<surname>" << std::endl;

		std::cout << std::setw(32) << std::left << "--------------------------------------" << std::endl;

		Phone_book phone_book;
		std::string line;
		std::getline(std::cin,line);
		phone_book.run_command(line);

		std::cout << "Continue the program ? Yes(1)/ No(0):\n";
		int32_t exit;
		std::cin >> exit;
		std::cin.clear();
		std::cin.ignore(1000,'\n');
		if(exit == 0)
		{
			break;
		}

	}

	return 0;
}

//----------END---------MAIN--------------


bool  Phone_book::parse_query(const std::string& line)
{	
	std::string word;

	std::stringstream ss(line);
	if(!(ss >> word))
	{
		return false;
	}

	if(this->is_number(word) && this->is_valid_number(word))
	{
		this->number = word;
		this->command = COMMAND::FIND_NUMBER;
		if(ss >> word)
		{
			if(this->is_surname(word) && is_valid_surname(word))
			{
				this->surname = word;
				this->command = COMMAND::ADD_NUMBER_SURNAME;
				return (!(ss >> word));
			}
			
		}
		else
		{
			return true;
		}


	}
	else if(this->is_surname(word) && this->is_valid_surname(word))
	{
		this->surname = word;
		this->command = COMMAND::FIND_SURNAME;
		return (!(ss >> word));
	}
	return false;

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


bool Phone_book::is_valid_number(const std::string& word)
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

bool Phone_book::is_valid_surname(const std::string& word)
{
	if(this->surname.size() == 0)
	{
		return 0;
	}
	for(const auto& w : this->surname)
	{
		if(!std::isalpha(w))
		{
			return 0;
		}
	}

	return 1;

}

void Phone_book::run_command(const std::string& line)
{

	if(!(this->parse_query(line)))
	{
		std::cout << "Invalid data.\n";
		return;
	}

	switch(this->command)
	{
		case COMMAND::ADD_NUMBER_SURNAME :
			{
				std::cout << "Command:\nAdd a number and surname\n";
				this->book[this->surname].push_back(this->number);
			}
			break;

		case COMMAND::FIND_SURNAME :
			{
				std::cout << "Command:\nFind a surname\n";
				auto it = book.find(this->surname);
				if(it != book.end())
				{

					for(size_t i=0; i<it->second.size(); ++i)
					{
						std::cout << "{" << it->first << ", " << it->second[i] << "}\n"; 
					}
				}
				else
				{
					std::cout << "Surname's not found.\n";
				}
			}
			break;
		case COMMAND::FIND_NUMBER :
			{
				std::cout << "Command:\nFind a number\n";
				bool found = false;
				for(auto it=book.begin(); it!=book.end(); ++it)
				{
					for(size_t i=0; i<it->second.size(); ++i)
					{
						if(it->second[i] == this->number)
						{
							std::cout << "{" << it->first << ", " << it->second[i] << "}\n";
							found = true;
						}
					}
				}

				if(!found)
				{
					std::cout << "Telephone number's not found.\n";
				}
			}
			break;
		default: std::cout << "Unknown command.\n";
			 break;
	}

}

