
#include <iostream>
#include <cassert>
#include<vector>
#include<iomanip>
//-----------Head functions ------------
void input(float& value);
void input(const int32_t N, std::vector<float>& v);
void input(const int32_t R,const int32_t C, std::vector<std::vector<float>>& m);
void display_vertical(const std::vector<float>& v);
void display_horizontal(const std::vector<float>& v);
void display(const std::vector<std::vector<float>>& m);
//--------------MAIN-----------------
int main()
{
	std::cout << "Enter vector size: ";
	int32_t N = 0;
	std::cin >> N;
	if(!std::cin || N<0)
	{
		std::cout << " Illegal value.\n";
		std::cout << "N= " << N << "\n";
		return 1;
	}
	std::vector<float> v;
	std::cout << "\nEnter elements of vector:\n";
	input(N,v);
	display_vertical(v);
	display_horizontal(v);
	
//Matrix
	std::cout << "\nEnter matrix size\n(number of rows and number of columns): ";
	int32_t R = 0, C = 0;
	std::cin >> R >> C;
	if(!std::cin || R<0 || C<0 )
	{
		std::cout << " Illegal value.\n";
		return 1;
	}
	std::vector<std::vector<float>> m;
	std::cout << "Enter elements of matrix  \n(from left to right, from top to bottom):\n";
	input(R,C,m);
	display(m);
	return 0;
}
//-------------Definitions of functions-----------------

void display(const std::vector<std::vector<float>>& m)
{
	for(size_t i=0; i<m.size(); ++i)
		{
			display_horizontal(m[i]);
			std::cout << "\n";
		}
}

void input(const int32_t R,const int32_t C, std::vector<std::vector<float>>& m)
{
	m.clear();
	if(R<0 || C<0)
	{
		std::cout << "Illegal value of matrix size.\n";
		return;
	}
	for(int32_t i = 0; i<R; ++i)
		{
			std::vector<float> v;
			input(C,v);
			m.push_back(v);
		}
}

void display_vertical(const std::vector<float>& v)
{	
	for(size_t i=0; i<v.size(); i++)
		{
			std::cout << v[i] << "\n";
		}
		
}

void display_horizontal(const std::vector<float>& v)
{	
	bool first = true;
	//std::cout << "{";
	for(size_t i=0; i<v.size(); i++)
		{
			if(!first)
			{
				std::cout << " ";
			}
			first = false;
			
			std::cout << std::setw(10) << v[i];
		}
	//std::cout << "}";
	//std::cout << "\n";
}

void input(const int32_t N, std::vector<float>& v)
{
	if(N<0)
	{
		std::cout << "Illegal value of vector size.\n";
		return;
	}
	v.clear();

	for(int32_t i = 0; i<N; ++i)
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

