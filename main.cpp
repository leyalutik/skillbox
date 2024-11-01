#include <iostream>
#include <ctime>
#include <string>
#include <vector>

class Birthday
{

	
	bool is_valid_date();
	bool is_valid_name();
	void parse_date(const std::string& word);

	int year = 0;
	int month = 0;
	int day = 0;

	std::string name;

};

bool operator<(const Birthday& b1, const Birthday& b2)
{
	return (b1.month <= b2.month && b1.day < b2.day);
}

bool operator=(const Birthday& b1, const Birthday& b2)
{
	return (b1.month == b2.month && b1.day == b2.day); 
}


class Reminder
{

	void input()
	{
		std::string word1,word2;
		while(word != "end")
		{
			Birthday birthday;

			std::cin >> word;
			if(word != "end" && is_valid_name(word))
			{
				birthday.name = word;
			}

			std::cin >> word;
			if(is_valid_date(word))
			{

				birthday.parse_date(word);
				birthdays.push_back(birthday);

			}
		}
	}

	std::map<Birthday> birthdays;
	Birthday given_day;

};


int main()
{





	return 0;
}
