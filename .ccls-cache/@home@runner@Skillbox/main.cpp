
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

bool is_equal(const std::vector<std::vector<float>>& m1, const std::vector<std::vector<float>>& m2);
void to_diagonal_type( std::vector<std::vector<float>>& m);
//--------------MAIN-----------------
int main()
{
	
	
//Matrix
	int32_t N = 4;
	
	std::vector<std::vector<float>> m1,m2;
	std::cout << "Enter elements of matrix m1 and m2:\n";
	input(N,N,m1);
	input(N,N,m2);
	display(m1);
	std::cout << "\n";
	display(m2);
	if(!is_equal(m1,m2))
	{
		std::cout << "Matrices are not equal.\n";
		std::getchar();
		return 0;
	}
	std::cout << "Matrices are equal.\n";
	to_diagonal_type(m1);
	std::cout << "Diagonal type: \n";
	display(m1);
	
	return 0;
}
//-------------Definitions of functions-----------------

void to_diagonal_type( std::vector<std::vector<float>>& m)
{
	for(size_t i=0; i<m.size(); ++i)
		{
			for(size_t j=0; j<m[i].size(); ++j)
				{
					if(i != j)
					{	
						m[i][j] = 0;
					}
				}
		}
}

bool is_equal(const std::vector<std::vector<float>>& m1, const std::vector<std::vector<float>>& m2)
{
	if(m1.size() != m2.size())
	{
		return false;
	}
	for(size_t i=0; i<m1.size(); ++i)
		{
			if(m1[i].size() != m2.size())
			{
				return false;
			}
			for(size_t j=0; j<m1[i].size(); ++j)
				{
					if(m1[i][j] != m2[i][j])
					{
						return false;
					}
				}
		}
	return true;
}

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

