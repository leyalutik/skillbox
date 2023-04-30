
#include <iostream>
#include <cassert>
#include<vector>

bool is_positive(const int32_t number)
{
	return (number >= 0);
}

template <class T>
void input(T& elem) // T standart types 
{
	std::cin >> elem;
		while (!std::cin ) {
			if (std::cin.bad()) //поток повреждён; Отправляем отчет об ошибке
								//внешней программе
			{
				std::cout << "In function stream cin was corrupted";
				return ;
			}
			if (std::cin.eof()) {
				std::cout << "The input stream is overloaded.\n";
				return ;
			}
			if (std::cin.fail())		  // unexpected value			{
				std::cin.clear();		  // make ready for more input
			std::cin.ignore(32767, '\n'); // delete garbage

			std::cout << "Illegal value. Input again:\n";
			std::cin >> elem;
		}

}
template <class T>
std::ostream& operator<< (std::ostream& os, const std::vector<T> v)
{
	os << "{";
	bool first = true;
	for(const auto& elem : v)
		{
			if(!first)
			{
				os << ", "; 
			}
			
			first = false;
			os << elem;
		}
	os << "}";
	return os;
}


void remove_value(const int32_t value, std::vector<int32_t>& v)
{
	int k = 0;
	for(size_t i=0; i<v.size(); ++i)
		{
			if(v[i] != value)
			{
				v[k] = v[i];
				++k;
			}
		}
	v.resize(k);
}

//--------------------------MAIN-------

int main()
{
	int32_t N = 0;
	std::cout << "Input vector size:";
	input(N); 
	while(!is_positive(N))
		{
			std::cout << "The vector_size must be positive.\nTry again:\n";
			input(N);
		}
	
	std::vector<int32_t> v(N);
	for(size_t i=0; i<N; ++i)
		{
			std::cout << "Input number:\n";
			input(v[i]); 
		}
	int32_t number = 0;
	std::cout << "Input number to delete:";
	input(number);
	remove_value(number,v);
	std::cout << "Result : " << v << "\n";
  
	return 0;
}



