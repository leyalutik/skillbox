#include <iostream>
#include <vector>
#include <string>

#include "output.h"

void output(const char grid[3][3]) {
	std::cout << " " << grid[0][0] << " " << "|" << " " << grid[0][1] << " " << "|" 
		<< " " << grid[0][2] << " " << '\n';
	std::cout << "-" << "-" << "-" << "+" << "-" << "-" << "-" << "+" 
		<< "-" << "-" << "-" << '\n';
	std::cout << " " << grid[1][0] << " " << "|" << " " << grid[1][1] << " " << "|" 
		<< " " << grid[1][2]<< " " << '\n';
	std::cout << "-" << "-" <<  "-" << "+" << "-" << "-" << "-" << "+" 
		<< "-" << "-" << "-" << '\n';
	std::cout << " " << grid[2][0] << " " << "|" << " " << grid[2][1] << " " << "|" 
	<< " " << grid[2][2] << " " << '\n';

}

bool check_string(const std::string& str, const size_t correct_size,
		const std::string& correct_char_set)
{
	if(str.size() != correct_size)
	{
		return false;
	}
	for(const char& ch : str)
	{
		bool match = false;
		for(const char& correct_char : correct_char_set)
		{
			if(ch == correct_char)
			{
				match = true;
			}
		}
		if(!match)
		{
			return false;
		}
	}
	return true;
}

std::string input_grid_lines()
{
	std::string grid;
	for(int line_number = 0; line_number < 3; ++ line_number)
	{
		std::cout << "Input line" << line_number+1 << " of Tic-tac-toe grid: ";
		std::string line;
		getline(std::cin, line, '\n');
		grid += line;
	}
return grid;
}