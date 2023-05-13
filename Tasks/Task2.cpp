#include <iostream>
#include <cassert>
#include<vector>
//--------------------------MAIN-------
bool equal(const int32_t x, const int32_t y, const int32_t z)
{
	if(x == y && x == z && y == z)
	{
		return true;
	}
	return false;
}
bool check_is_empty(const char grid[3][3], const int32_t x, const int32_t y)
{
	if(x < 0 || y < 0 || x > 2 || y > 2)
	{
		std::cout << "Out of range.\n";
		return false;
	}
	if(grid[x][y] != '.')
	{
		return false;
	}
	return true;
}
bool check_is_victory(const char grid[3][3])
{
	
	for(size_t i=0; i<3; ++i)
		{
			//row of equal elements
			if( grid[i][0] != '.' && equal(grid[i][0],grid[i][1],grid[i][2]))
			{
				return true;
			}
			//column 
			if(grid[0][i]  != '.' && equal(grid[0][i],grid[1][i],grid[2][i]))
			{
				return true;
			}
		}

	if(grid[0][0]  != '.' &&  equal(grid[0][0],grid[1][1],grid[2][2]))
	{
		return true;
	}
	if(grid[0][2]  != '.' &&  equal(grid[0][2],grid[1][1],grid [2][0]))
	{
		return true;
	}
	return false;
	}
bool input(int32_t& x)
{
	std::cin >> x;
	while(!std::cin)
	{
		if(std::cin.bad())  //поток повреждён; Отправляем отчет об ошибке внешней программе
		{
			std::cout << "In function stream cin was corrupted";
			return false;
		}
		if(std::cin.eof())
		{
			std::cout << "The input stream is overloaded.\n";
			return false;
			//Больше никаких входных данных
			//Последовательность символов правильно должна оканчиваться именно так
		}
		if(std::cin.fail()) // поток столкнулся с чем-то неожиданным
		{
			std::cin.clear();// make ready for more input
			std::cin.ignore(32767, '\n'); // очищаем поток от мусора
			std::cin >> x;
		}
	}
	return true;
}

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


//---------------MAIN------------
int main()
{
	char grid[3][3];
	for(size_t i=0; i<9; ++i)
		{//Initialization grid
			grid[i/3][i%3] = '.';
		}

	std::cout << "\n--Game grid--\n\n";
	output(grid);

	int32_t turn_X = true;
	while(true)
		{
			std::cout << std::endl << "Turn for " << (turn_X ? 'X' : 'O') << ":\nEnter x,y of grid where 0 <= x,y <= 2.\n";
			int32_t x=0, y=0;
			while(input(x) && input(y) && !check_is_empty(grid,x,y) )
				{
					std::cout << "Incorrect x,y. Input other values:\n";
				}
			grid[x][y] = (turn_X ? 'X' : 'O');
			std::cout << std::endl;
			output(grid);
			if(check_is_victory(grid))
			{
				std::cout << std::endl << (turn_X ? 'X' : 'O') << " wins.\n";
				return 0;
			}
			++turn_X;
			turn_X %= 2;
		}
	
	return 0;
}

//Нет автоматической инициализация массива имволов

