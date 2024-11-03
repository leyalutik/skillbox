#include <iostream>
#include <ctime>
#include <string>
#include <vector>
#include <map>
#include <iomanip>
#include <sstream>


struct Month_Date
{

int month;
int day;

};
struct Date {
    bool is_valid();
    bool is_leap_year();
    void set(int year1, int month1, int day1) {  // исправлена запятая между параметрами
        day = day1;
        month = month1;
        year = year1;
    }
    void parse(const std::string& line);
    std::string display() const;

    int list_year[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    bool is_valid_date_format = false;
    int32_t day = 0;
    int32_t month = 0;
    int32_t year = 0;
};

class Birthday {
public:
    void set(int year1, int month1, int day1, std::string name1) {
        date.set(year1, month1, day1);
        name = name1;
    }

    Date date;
    std::string name;
};

bool operator<(const Month_Date& b1, const Month_Date& b2) 
{
    return (b1.month < b2.month || 
           (b1.month == b2.month && b1.day < b2.day));
}
bool operator==(const Month_Date& b1, const Month_Date& b2) {  // исправлено на ==
    return (b1.month == b2.month && 
            b1.day == b2.day );
}

class Reminder 
{
public:
	std::map<Month_Date,std::vector<Birthday>> birthdays;
   void input() {
        std::string word;
        while (word != "end") {
            Birthday birthday;
            std::cin >> word;
            if (word != "end") {
                birthday.name = word;
                std::cin >> word;
                birthday.date.parse(word);
                if (birthday.date.is_valid()) 
		{
		Month_Date md; 
		md.month = birthday.date.month;
		md.day = birthday.date.day;
                    birthdays[md].push_back(birthday);
                }
            }
        }
    }

    void display_nearest()
    {
        time_t now = std::time(nullptr);
        struct tm* current_time = std::localtime(&now);


        if (!current_time) {
            std::cout << "Failed to get current time\n";
            return;
        }

        
        Month_Date current_month_day;
	current_month_day.month = current_time->tm_mon+1;
	current_month_day.day = current_time->tm_mday;
        auto it = birthdays.lower_bound(current_month_day);
        if (it == birthdays.end()) 
	{
            std::cout << "All birthdays passed\n";
	    return;
        } 
	else if (it->first.month == current_month_day.month && it->first.day == current_month_day.day) 
	{
            std::cout << "Today!\n";
	    
        } else 
	{

            std::cout << "Nearest!\n";
        }
	for(size_t i=0; i< it->second.size(); ++i)
	    {
		
            std::cout << it->second[i].name << " " << it->second[i].date.display() << "\n";
	    }
    }

};

int main() 
{
    Reminder r;
    r.input();
    r.display_nearest();
    return 0;
}

//---------------------------------------------------

bool Date::is_valid() 
{
    return (is_valid_date_format && day > 0 && 
            month >= 1 && month <= 12 && 
            (((month == 2) && ((day < 29) || (is_leap_year() && day == 29))) || 
            (month != 2 && day <= list_year[month - 1])));
}

bool Date::is_leap_year() 
{
    return (!(year % 400) || (!(year % 4) && (year % 100)));
}

void Date::parse(const std::string& line) 
{
    std::stringstream stream(line);
    char ch1, ch2;
    stream >> day >> ch1 >> month >> ch2 >> year;
    is_valid_date_format = (ch1 == '/' && ch2 == '/' && stream.eof());
}

std::string Date::display() const
{
    std::stringstream ss;
    ss << std::right << std::setw(2) << std::setfill('0') << day << ".";
    ss << std::right << std::setw(2) << std::setfill('0') << month << ".";
    ss << std::setw(4) << year;
    return ss.str();
}

