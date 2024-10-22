#include<string>
#include<iostream>
#include<map>

enum class COMMAND
{

ADD = 0,
NEXT = 1

};

struct  Register
{
	Register();
	
	bool parse_input(const std::string& data);
// call check_data and clear , define command
	bool is_surname(const std::string& data);
	bool is_next(const std::string& data);
	void run_command(const std::string& data);//add // next (output
	bool check_data(const std::string& data)
	{ return (is_surname(data) || is_next(data));}
	std::map<std::string, int32_t> list;// surname, is_called (0 - all surnames are called, 1,2,3.. - surnames to be called)
					    //	     void clear(); //if (is_called > list.size()/2) -> erase 
	int32_t number_is_used = 0;
	std::map<std::string , int32_t>::iterator current_iterator;
	COMMAND command;
	std::string current_surname;

};


int main()
{

	Register reg;
	int32_t exit = 1;
	while(exit != 0)
	{

		//display prompt
		std::cout << "Input <Surname> or command <Next>:\n";
		std::string data;
		std::cin >> data;
		reg.run_command(data);
		std::cout << "Continue the program. Yes(1) / No(0) \n";
		std::cin >> exit;
		
	}
	return 0;
}

//----------------------------------


Register::Register()
{
	this->current_iterator = this->list.begin();
}


void Register::run_command(const std::string& line)
{

	if(!(this->parse_input(line)))
	{

		std::cout << "Invalid data. Try again.\n";
		return;
	}
	
	switch(this->command)
	{
		case COMMAND::ADD : 
		{

		++this->list[this->current_surname];

		++this->number_is_used;

		if(this->list.size() == 1 || this->current_iterator->first > this->current_surname || this->current_iterator == this->list.end())
		{
			current_iterator = this->list.find(this->current_surname);; //move up of list to display in lexigraphical order
		}
		}
		break;
		case COMMAND::NEXT : 
		{
			while(current_iterator != list.end() && current_iterator->second <=  0  ) // end of list or used surname
			{
				++current_iterator;
			}
			if(current_iterator == this->list.end())
			{
				std::cout << "The end of list.\n";
			
			}
			else
			{
			std::cout << current_iterator->first << "\n";
			--current_iterator->second;//number of equal surnames
			}
		}

		break;

		default: 

		std::cout << "Unknown command. \n";
		break;
	}

	if(this->number_is_used > this->list.size()/2)
{
	std::erase_if(this->list,[](auto& list_elem)
			{
				return list_elem.second == 0;
			}
		     );
			this->number_is_used = 0;


}

}


bool Register::parse_input(const std::string& data)
{
	if(is_next(data))
	{

		command = COMMAND::NEXT;
		return true;
	}
	if(is_surname(data))
	{
		current_surname = data;
		command = COMMAND::ADD;
		return true;
	}
	return false;
}
bool Register::is_next(const std::string& data)
{
	return ((data == "Next" ||   data == "next"));
}

bool Register::is_surname(const std::string& data)
{
	for(size_t i=0; i<data.size(); ++i)
	{
		if(!isalpha(data[i]))
		{
			return false;
		}
	}
	return true;
}
