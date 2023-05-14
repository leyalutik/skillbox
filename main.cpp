
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
void product(const std::vector<std::vector<float>>& m, const std::vector<float>& v, std::vector<float>& result);
//--------------MAIN-----------------
int main()
{
	
	
//Matrix
	int32_t N = 4;

	std::vector<float> v;
	std::vector<std::vector<float>> m;
	std::cout << "Enter elements of matrix:\n";
	input(N,N,m);
	display(m);
	std::cout << "\n";
	std::cout << "Enter elements of vector:\n";
	input(N,v);
	display_horizontal(v);
	std::cout << "\n";

	std::vector<float> result;
	product(m,v,result);
	std::cout << "Product of matrix and vector:\n";
	display_horizontal(result);
	
	return 0;
}
//-------------Definitions of functions-----------------

void product(const std::vector<std::vector<float>>& m, const std::vector<float>& v, std::vector<float>& result)
{
	//check matrix size
	for(size_t i=0; i<m.size(); ++i)
	{
		if(m[i].size() != v.size())
		{
		std::cout << "Incorrect sizes of vector and matrix.\n";
			return;
		}
	}
	result.clear();
	for(size_t i=0; i<v.size(); ++i)
		{
			float sum = 0;
			for(size_t j=0; j<m[i].size(); ++j)
				{
					sum += m[i][j]*v[j];
				}
			result.push_back(sum);
		}
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

