#include<iostream>
#include<fstream>
#include<string>


explicit struct Date
{
	Date();
	Date(const int32_t day1, const int32_t month1,
			const int32_t year1)
		: day(day1), month(month1), year(year1) {}
	void set(const int32_t day1, const int32_t month1,
			const int32_t year1)
		: day(day1), month(month1), year(year1) {}
	bool is_valid() 
	{
		return (day >0 && 
			( (month == 2 && is_leap_year() && day <= 29) 
			  || (month != 2 && day <= list_year[month-1])
			)  
			&&  month >= 1 && month <=12 
			&& year > 2019);
	}
	bool is_leap_year() 
	{
		return (!(year%400) 
			|| (!(year%4) && (year%100))
		       );
	}

	void display_date()
	{
		std::cout << day << "." << month << "." << year ;
	}
	int list_year[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
	
	int32_t day = 1;
	int32_t month = 1;
	int32_t year = 2000;
	
};

explicit struct Person
{
	Person();
	Person(const std::string& name1,
		const std::string& surname1,
		const std::int32_t money_amount1, 
		const Date& date1)) 
		: name(name1), surname(surname1),
		money_amount(amount1), date(date1){} 

	void set(const std::string& name1,
		const std::string& surname1,
		const std::int32_t money_amount1, 
		const Date& date1)) 
		: name(name1), surname(surname1),
		money_amount(amount1), date(date1){} 


	void set(const Person& p): name(p.name), surname(p.surname), money_amount(p.money_amount), date(p.date) []
	istream& >> ( istream& stream, Person& data);
	
	bool is_valid() 
	{
		return ( !name.empty() && !surname.empty() 
				&& (money_amount >= 0) && date.is_valid() ); 
	}

	void display_information()
	{
		std::cout << name << " " << surname << " " 
			<< money_amount << " " << date.display();
	}
	std::string name;
	std::string surname;
	std::int32_t money_amount = 0;

	Date date;

};


struct Payment
{

Payment(const std::string& filename)
{
	


}

void read_line();
void ErrorHadler();
bool is_data_valid();



Person current;

int64_t N_line=0; // input current line  
bool end_file = 0;



};






int main()
{
const std::string filename;
Payment person(filename);
int32_t sum = 0;
inr32_t max_money = 0;
bool first_apperance = 1;
Person person_max_money;
while (!person.end_file)
{

	int32_t money =  person.current.money_amount;
	person.read_line();
	if(first_apperance)
	{
		max_money = money;
		first_apperance = 0;
	}
	sum += money;
	if( money > max_money)
	{
		person_max_money.set(person.current);
	}

}

std::cout << "Total sum : " << sum << "\n";
std::cout << "Person with maximum payout amount : \n";
person_max_money.display_information();

	return 0;
}

//--------------------------------------------
