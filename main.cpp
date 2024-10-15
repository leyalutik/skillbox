
#include<iostream>
#include<iomanip>
#include<vector>
#include<string>
#include<fstream>
#include<sstream>

const std::string filename = "register";
struct Date
{
	bool is_valid();
	bool is_leap_year() ;

	void parse(const std::string& line);
	std::string  display();

	int list_year[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 

	bool is_valid_date_format;
	int32_t day = 0;
	int32_t month = 0;
	int32_t year = 0;
};

struct Person
{
	std::string name;
	std::string surname;
	double  money_amount = 0;


	bool is_valid() ;
	void parse(const std::string& line);
	void display_information();

		Date date;
};






void add();
void list();


int main()
{

bool exit = 1;
	while(exit)
	{

		std::cout << "Input a command:\n";

		std::string line;
		std::getline(std::cin,line,'\n');

	
	if(line.find("add") != std::string::npos)
	{
		add();
	}
	else if (line.find("list") != std::string::npos)
	{
		list();
	}
	else
	{
		std::cout << "Uknown command.\n";
	}
		std::cout << "Continue the program ? Yes(1)/ No(0):\n";
		std::cin >> exit;
		std::cin.clear();
		std::cin.ignore(1000,'\n');
	}





	return 0;
}


void add()
{



	std::ofstream ofs(filename.c_str(), std::ios_base::app);
	if(!ofs.is_open())
	{
		std::cout << "Can't be opened the file for record.\n";
	}

	int32_t exit = 1;
	while (exit != 2)
	{
		std::cout << "Input the name, the surname, payment amount, date and press the key \'Enter\'.\n";
		std::string input_line;
		int32_t LIMIT = 0;
		Person person;

		while(LIMIT < 1000)
		{

			++LIMIT;
			std::getline(std::cin,input_line);	
			person.parse(input_line);
			if(person.is_valid())
			{
				break;

			}

			std::cout << "Incorrect data. Try again.\n";

		}
		if(LIMIT == 1000)
		{
			std::cout << "Many invalid inputs.The program will be terminated.\n";
			return ;
		}

		ofs.setf(std::ios::left);
		ofs.width(13);
		ofs << person.name;
		ofs.width(13);
		ofs << person.surname ;
		ofs.width(13);
		ofs.setf(std::ios::fixed);
		ofs.precision(2);
		ofs <<  person.money_amount ;

		ofs.width(10);
		ofs << person.date.display() << '\n';
		std::cout << "Continue to add 1(yes)/2(no). \n";
		std::cin >> exit;
		std::cin.ignore(1000,'\n');
		std::cin.good();
	}

	ofs.close();

}

void list()
{

	

	Person person_max_money;

	bool first_apperance = true;
	int32_t number_line = 0;

	std::ifstream inf(filename.c_str(), std::ios::in);
	if(!inf.is_open())
	{
		std::cout << "The file \"" << filename << "\" was not opened.\n";
		return ;
	}
		std::string line;
	while (std::getline(inf,line,'\n'))
	{
		Person person_current;

		person_current.parse(line);
		person_current.display_information();
		line.clear();
		std::cout << "\n";
	}
}

//--------------------------------------------
bool Date::is_valid() 
{
	return (is_valid_date_format && day >0  
			&&  month >= 1 && month <= 12 
			&& (( (month == 2) && 
					((day < 29) || (is_leap_year() && day == 29)))
				|| ( (month != 2 && day <= list_year[month-1])))  
			);
	}
	bool Date::is_leap_year()
	{
		return (!(year%400) 
				|| (!(year%4) && (year%100))
		       );
	}



	void Date::parse(const std::string& line)
	{
		std::stringstream stream(line);
		char ch1,ch2;
		stream >> day >> ch1 >> month >> ch2 >> year;

		is_valid_date_format = 	(ch1 == ch2 && ch1 == '.' && stream.eof() == true  ? true : false );





	}

	std::string  Date::display()
	{
		std::stringstream ss;
		ss << std::right << std::setw(2) <<  std::setfill('0') << day << ".";
		ss << std::right << std::setw(2) <<  std::setfill('0') << month << ".";
	ss << std::setw(4) << year;
		return ss.str();
	}
	int list_year[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 





	bool Person::is_valid() 
	{
		return ( !name.empty() && !surname.empty() 
				&& (money_amount >= 0) 
				&& date.is_valid() ); 
	}

	void Person::parse(const std::string& line)
	{
		std::stringstream stream(line);
		stream >> name >> surname >> money_amount;
		std::string line1;
		stream >> line1;
		date.parse(line1);
	}

void Person::display_information()
	{
		std::cout << name << " " << surname << " " 
			<< money_amount << " ";
		std::cout << date.display();
	}

