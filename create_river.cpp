#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include<set>
#include<map>
#include<cstdlib>
#include<vector>
#include<ctime>
int main()
{

	std::srand(std::time(nullptr));
	std::string input_file = "river.txt";

	std::vector<std::string> FISHES = {"sunfish","shad","carp","bass", "bullhead", "walleye", "catfish"};

	std::ofstream to_river(input_file.c_str());
	for(int i=0; i<20; ++i)
	{
		auto s = FISHES[std::rand()%7];
		to_river << s << "\n";
	}
	return 0;

}
