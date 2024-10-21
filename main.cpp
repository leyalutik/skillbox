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
	void input(std::string& data); // call check_data and clear , define command
	bool is_surname(const std::string& data);
	bool is_next(const std::string& data);
	void run_command();//add // next (output
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
	bool exit = false;
	while(!exit)
	{

		//display prompt
		std::cout << "Input <Surname> or command <Next>:\n";
		std::string data;
		
		reg.input(data);
		reg.run_command();
		if(reg.current_iterator == reg.list.end())
		{
			exit = true;
		}
	}
	return 0;
}

//----------------------------------


Register::Register()
{
	this->current_iterator = this->list.begin();
}
void Register::run_command()
{
	switch(this->command)
	{
		case COMMAND::ADD : 
		{
				if(this->list.count(this->current_surname))
				{
					++this->list[this->current_surname];
				}
				else
				{

					this->list[this->current_surname] = 1;
				}

				++this->number_is_used;
				auto iterator = this->list.find(this->current_surname);

				if(this->list.size() == 1 || current_iterator->first > iterator->first)
					{
						current_iterator = iterator; //move up of list to display in lexigraphical order
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
				return;
			}
			std::cout << current_iterator->first << "\n";
			--current_iterator->second;//number of equal surnames
		}
		break;

		default: 

		std::cout << "Unknown command. \n";
		break;
	}

	if(this->number_is_used > this->list.size())
{
	std::erase_if(this->list,[](auto& list_elem)
			{
				return list_elem.second == 0;
			}
		     );
			this->number_is_used = 0;


}

}


void Register::input(std::string& data)
{
	std::cin >> data;
	while(!check_data(data))
	{
		
		std::cout << "Invalid data. Try again.\n";
		data.clear();
		std::cin.clear();
		std::cin.ignore(1000,'\n');
		std::cin >> data;
	}
	if(is_next(data))
	{

		command = COMMAND::NEXT;
		return;
	}
	current_surname.clear();
	current_surname = data;
	command = COMMAND::ADD;
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
