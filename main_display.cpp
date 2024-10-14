#include<fstream>
#include<string>
#include<sstream>
#include<cstdlib>
#include<vector>
#include <iostream>
#include <ctime>
#include <cstdlib>

struct CashPoint
{
	void evaluate(); // evaluate sum_total number_total
	bool is_full() { return total_number == 1000;}
	bool is_valid();//  return total_number < 0 or >1000 no_file -? or n_100 or n_5000 < 0 or > 1000

	void display_state(); 
	void reset_to_zero();

	int32_t total_number = 0;
	int32_t total_sum = 0;

	const int32_t  banknotes[6]={100,200,500,1000,2000,5000};

	int32_t numbers[6]  = {0,0,0,0,0,0};
	int32_t MAX_NUMBER = 1000;
};


bool read_file(const std::string& filename, CashPoint& b);
bool write_file(const std::string& filename, const CashPoint& b);

void refill(CashPoint& b);
void withdraw(CashPoint& b);


int main()
{
	std::string input_file = "init.bin";
	CashPoint b;
	if(!	read_file(input_file,b))
	{
		std::cout << "\n    ATM is empty.\n";
		b.reset_to_zero();
		write_file(input_file,b);
	}
	else
	{
		b.display_state();
	}
	bool exit = 1;
	while(exit)
	{

		std::cout << std::endl;
		std::cout << std::setw(30) << std::right <<  " ATM operations";
		std::cout << std::endl;
		std::cout << std::setw(32) << std::right << "--------------------------------------" << "\n";
		std::cout << std::left << std::setw(15) << "refilling" << std::right << std::setw(15) << "\'+\'\n";
		std::cout << std::setw(15) <<  std::left << "withdrow" << std::right << std::setw(15) << "\'-\'\n";

		std::cout << std::setw(32) << std::right << "--------------------------------------" << "\n";
		char ch;
		std::cin >> ch;
		std::cin.ignore(1000, '\n');
		std::cin.good();

		switch (ch)
		{
			case '+' : refill(b);
				   break;
			case '-' : withdraw(b);
				   break;
			default : break;
		}
		b.display_state();

		
		std::cout << "Continue the program ? Yes(1)/ No(0):\n";
		std::cin >> exit;
		std::cin.ignore(1000,'\n');
		std::cin.good();
	}
	if(!b.is_valid())
	{
		std::cout << "Invalid data. The process's interrupted. The data are signed 0.\n";
		write_file("error.bin",b);
		b.reset_to_zero();
	}

	while(!write_file(input_file,b))
	{
		std::cout << "The data can't be saved in the file " << input_file << ".Input an other name:\n";
		std::cin >> input_file;
	}

	return 0;
}
//---------------------------------------
//supportive functions


bool read_file(const std::string& filename, CashPoint& b)
{
	std::ifstream ifs(filename.c_str(),std::ios_base::binary);
	if(!ifs.is_open())
	{
		return false;
	}

	int32_t number=0;
	ifs.read((char*)&b.total_sum,sizeof(number));
	ifs.read((char*)&b.total_number,sizeof(number));

	for(int i=0; i<6; ++i)
	{
		ifs.read((char*)&b.numbers[i],sizeof(number));
	}

	return true;

}
bool write_file(const std::string& filename, const CashPoint& b)
{
	std::ofstream ofs(filename.c_str(), std::ios_base::binary | std::ios_base::out);
	if(!ofs.is_open())
	{
		return 0;
	}

	int32_t number=0;
	ofs.write((char*)&b.total_sum,sizeof(number));

	ofs.write((char*)&b.total_number,sizeof(number));

	for(int i=0; i<6; ++i)
	{
		ofs.write((char*)&b.numbers[i],sizeof(number));
	}
	return 1;
}

void refill(CashPoint& b)
{
	if(!b.is_valid())
	{
		std::cout << "Invalid data.\n";
		return;
	}

	if(b.is_full())
	{
		return;
	}
	std::srand(std::time(nullptr));
	while(b.total_number < b.MAX_NUMBER)
	{//refilling of random banknotes
		++b.total_number;

		int32_t index = rand() % 6;
		++b.numbers[index];

	}
	b.evaluate();


}

void withdraw(CashPoint& b)
{
	if(!b.is_valid())
	{
		std::cout << "Invalid data.\n";
		return;
	}
	std::cout << "Input the amount of money in multiples of 100:\n";

	int32_t user_amount;
	std::cin >> user_amount;
	if(user_amount < 0 || (user_amount % 100 != 0))
	{
		std::cout << "Incorrent number.\n";
		return;
	}

	std::vector<int32_t> numbers_modified;
	for(size_t i=0; i<6; ++i)
	{
		numbers_modified.push_back(b.numbers[i]);
				}

	int32_t current_index = 5;
	while(user_amount > 0 &&  current_index > -1 )
	{
		if(user_amount >= b.banknotes[current_index])
		{
			if(numbers_modified[current_index] >0)
			{
				--numbers_modified[current_index];
				user_amount -=b.banknotes[current_index];
			}
			else
			{
				--current_index;
			}
		}
		else
		{

			--current_index;

		}
	}
	if(current_index == -1)
	{
		std::cout << "No banknotes.\n";

		return;
	}

	for(size_t i=0; i<6; ++i)
	{
		b.numbers[i] = numbers_modified[i];
	}
	b.evaluate();
}

void CashPoint::reset_to_zero()
{
	total_sum = 0;
	total_number = 0;
	for(size_t i=0; i<6; ++i)
	{
		numbers[i] = 0;
	}

}
void CashPoint::evaluate() // evaluate sum_total number_total
{
	
	total_sum = 0;
	total_number = 0;
	for(size_t i=0; i<6; ++i)
	{
		total_sum += numbers[i] * banknotes[i];
		total_number += numbers[i];
	}
	
}

bool CashPoint::is_valid()
{
	if(total_number > MAX_NUMBER || total_number < 0)
	{
		return false;
	}
	for(size_t i=0; i<6; ++i)
	{
		if(numbers[i] > MAX_NUMBER || numbers[i] < 0)
		{
			return false;
		}
	}
	return true;
	
}

void CashPoint::display_state()
{
	std::cout << std::setw(30) << std::right << "ATM STATE\n";
	std::cout << std::setw(30) << std::right << "------------" << "\n";




	std::cout << std::setw(30) << std::left << "Total amount:" << total_sum << "\n";
	std::cout << std::setw(30) << std::left << "Total number of banknotes:" << total_number << "\n";
	
	for(int i=0; i<6; ++i)
	{

		std::cout << std::setw(30) << std::left << banknotes[i] << numbers[i] << "\n";
	}
}




