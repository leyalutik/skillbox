#include<fstream>
#include<string>
#include<sstream>
#include<set>
#include<map>
#include<cstdlib>
#include<vector>
#include <iostream>
int main()
{

	std::string input_file = "river.txt";
	std::string output_file = "basket.txt";

	std::set<std::string> FISHES = {"sunfish","shad","carp","bass", "bullhead", "walleye", "catfish"};

	std::map<std::string, int32_t> recorder ;

	std::ofstream to_basket(output_file.c_str(), std::ios_base::app);
	if(!to_basket.is_open())
	{
		std::cout << "There is no basket.\n";
		return 1;
	}

	int32_t exit = 1;
	while(exit != 2)
	{
		std::cout << "Input the fish:\n";
		std::string user_goal_fish;
		std::cin >> user_goal_fish;

		std::cout << "Caught fish in this cycle:\n----------------\n";
		if(FISHES.count(user_goal_fish))
		{

			std::ifstream from_river(input_file.c_str(), std::ios_base::in);
			if(!from_river.is_open())
			{
				std::cout << "There is no access to the river.\n";
				return 1;
			}

			std::string rod;
			while(from_river >> rod)
			{
				if(rod == user_goal_fish)
				{
					++recorder[rod];
					to_basket << rod << '\n';
				}
			}
			from_river.close();


		std::cout << user_goal_fish  << ": " << recorder[user_goal_fish]<< "\n"; 
		}
		else
		{
			std::cout << "No fish.\n";
		}
		std::cout << "Continue fishing? Yes(1)/No(2)\n";
		std::cin >> exit;
		std::cin.ignore(1000,'\n');
		std::cin.good();
	}

	to_basket.close();

	std::cout << "Caught fish:\n----------------\n";
	for(const auto& [fish,number]: recorder)
	{
		std::cout << fish  << ": " << number << "\n"; 
	}
	if(recorder.empty())
	{
		std::cout << "No fish.\n";
	}
	return 0;
}
