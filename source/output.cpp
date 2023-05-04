#include <iostream>
#include <vector>
#include <string>

#include "output.h"

void output(const std::string& grid)
{
	if(!check_string(grid,9,".XO"))
	{
		//std::cout << "Incorrect grid for Tic-tac-toe\n";
		return;
	}
	std::cout << " " << grid[0] << " " << "|" << " " << grid[1] << " " << "|" 
		<< " " << grid[2] << " " << '\n';
	std::cout << "-" << "-" << "-" << "+" << "-" << "-" << "-" << "+" 
		<< "-" << "-" << "-" << '\n';
	std::cout << " " << grid[3] << " " << "|" << " " << grid[4] << " " << "|" 
		<< " " << grid[5]<< " " << '\n';
	std::cout << "-" << "-" <<  "-" << "+" << "-" << "-" << "-" << "+" 
		<< "-" << "-" << "-" << '\n';
	std::cout << " " << grid[6] << " " << "|" << " " << grid[7] << " " << "|" 
		<< " " << grid[8] << " " << '\n';

}