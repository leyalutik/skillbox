#include<iostream>
#include<fstream>
#include<string>
#include<sstream>


struct Date
{
	void set(const Date& d)
	{
		day = d.day;
		month = d.month;
		year = d.year;
	}
	bool is_valid() 
	{
		return (is_valid_date_format && day >0  
			&&  month >= 1 && month <= 12 
			&& (( (month == 2) && 
			((day < 29) || (is_leap_year() && day == 29)))
			|| ( (month != 2 && day <= list_year[month-1])))  
			&& year >= 2000);
	}
	bool is_leap_year() 
	{
		return (!(year%400) 
				|| (!(year%4) && (year%100))
		       );
	}



	void parse(const std::string& line)
	{
		std::stringstream stream(line);
		char ch1,ch2;
		stream >> day >> ch1 >> month >> ch2 >> year;

		is_valid_date_format = 	(ch1 == ch2 && ch1 == '.' && stream.eof() == true  ? true : false );





	}

	void display()
	{
		std::cout << day << "." << month << "." << year ;
	}
	int list_year[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 

	bool is_valid_date_format;
	int32_t day = 0;
	int32_t month = 0;
	int32_t year = 0;

};

struct Person
{

	void set(const Person& p)
	{
		name = p.name;
		surname = p.surname;
		money_amount =p.money_amount;
		date.set(p.date);
	}

	bool is_valid() 
	{
		return ( !name.empty() && !surname.empty() 
				&& (money_amount >= 0) 
				&& date.is_valid() ); 
	}

	void parse(const std::string& line)
	{
		std::stringstream stream(line);
		stream >> name >> surname >> money_amount;
		std::string line1;
		stream >> line1;
		date.parse(line1);
	}
	void display_information()
	{
		std::cout << name << " " << surname << " " 
			<< money_amount << " ";
		date.display();
	}
	std::string name;
	std::string surname;
	std::int32_t money_amount = 0;

	Date date;

};






int main()
{
	const std::string filename("payment.txt");

	int32_t sum = 0;
	int32_t max_money = 0;
	Person person_max_money;

	bool first_apperance = true;
	int32_t number_line = 0;

	std::ifstream inf(filename.c_str(), std::ios::in);
	if(!inf.is_open())
	{
		std::cout << "The file \"" << filename << "\" was not opened.\n";
		return 1;
	}
	while (!inf.eof() && number_line < 3000000)
	{
		Person person_current;
		std::string line;
		std::getline(inf, line, '\n');

		person_current.parse(line);
		++number_line;

		if(person_current.is_valid())
		{

			int32_t money =  person_current.money_amount;
			if(first_apperance)
			{
				max_money = money;
				first_apperance = 0;
			}
			sum += money;
			if( money > max_money)
			{
				person_max_money.set(person_current);
			}
		}
		else
		{
			std::cout << "In the file \"" <<  filename 
				<< "\"\nThe line \""; 
			person_current.display_information(); 
			std::cout <<  "\" is not valid.\n";
		}

	}

	std::cout << "Total sum : " << sum << "\n";
	std::cout << "Person with maximum payout amount : \n";
	person_max_money.display_information();

	return 0;
}

//--------------------------------------------
