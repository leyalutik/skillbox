
#include <iostream>
#include <cassert>
#include<vector>

//--------------------------MAIN-------
void input(float& value);
void input(std::vector<float>& v);
void display(const std::vector<float>& v);
int main()
{
	std::cout << "Enter value: ";
	float value = 0;
	input(value);
	std::cout << value << "\n";
	std::vector<float> v = {1,2,3};
	std::cout << "Size = " << v.size();
	v.clear();
	std::cout << "Size = " << v.size();
	return 0;
}
//-------------MAIN-----------------

void display(const std::vector<float>& v);


void input(std::vector<float> v)
{
	v.clear();

	for(size_t i = 0; i<v.size(); ++i)
		{
			float value = 0;
			input(value);
			v.push_back(value);
		}
}



void input(float& value)
{
	std::cin >> value;
	while(!std::cin)
	{
		if(std::cin.bad())  //поток повреждён; Отправляем отчет об ошибке внешней программе
		{
			std::cout << "In function stream cin was corrupted";
			std::getchar();
			return ;
		}
		if(std::cin.eof())
		{
			std::cout << "The input stream is overloaded.\n";
			std::getchar();
			return ;
		
			//Больше никаких входных данных
			//Последовательность символов правильно должна оканчиваться именно так
		}
		if(std::cin.fail()) // поток столкнулся с чем-то неожиданным
		{
			std::cin.clear();// make ready for more input
			std::cin.ignore(32767, '\n'); // очищаем поток от мусора
			std::cin >> value;
		}
	}
	
	
}

