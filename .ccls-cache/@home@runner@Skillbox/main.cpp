
#include <iostream>
#include <cassert>
#include<vector>
#include "source/output.h"
//--------------------------MAIN-------

int main()
{
	char grid[3][3];
	for(size_t i=0; i<9; ++i)
		{//Initialization grid
			grid[i/3][i%3] = '.';
		}
	output(grid);

	char gamers[2] = {'X','O'};
	bool turn_X = true;
	while()
		{
			std::cout << "Turn for " << (turn_X ? 'X' : 'O') << ":\nEnter x,y of grid where 1 ";
		}
	
	return 0;
}

//Нет автоматической инициализация массива имволов

