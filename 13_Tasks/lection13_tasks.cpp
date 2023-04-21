
#include <iostream>
#include <cassert>
#include<vector>

bool is_positive(int32_t number)
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

std::vector<int32_t> add_to_position(const std::vector<int32_t>& vec, const int32_t val, const int32_t position);

std::vector<int32_t> remove_from_position(const std::vector<int32_t>& vec, const int32_t position);

int main()
{

	//Lection5
	std::vector<int32_t> v;
	int value = 0;
	while(value != -1)
		{
			std::cout << "Input value:\n";
			input(value); //number of robots
	while(!is_positive(value) && value != -1)
		{
			std::cout << "The value must be positive.\nTry again:\n";
			input(value);
		}
			v.push_back(value);
			
			if(v.capacity() - v.size() == 2)
			{
				std::cout << "There are 2 elements to change the vector capacity\n";
				std::cout << "Size = " << v.size() << " Capacity = " << v.capacity() << "\n";
		v.clear();
		std::cout << "Clear vector.\nSize = " << v.size() << " Capacity = " << v.capacity() << "\n";
		
			}
			
		}
	std::cout << v << "\n";

//Lection 4
	//task2
/*	std::vector<int32_t> v;
	int value = 0;
	while(value != -1)
		{
			std::cout << "Input value:\n";
			input(value); //number of robots
	while(!is_positive(value) && value != -1)
		{
			std::cout << "The value must be positive.\nTry again:\n";
			input(value);
		}
			v.push_back(value);
			
			if(v.capacity() - v.size() == 2)
			{
				std::cout << "There are 2 elements to change the vector capacity\n";
				std::cout << "Size = " << v.size() << " Capacity = " << v.capacity() << "\n";
		
			}
			
		}
	std::cout << v << "\n";
	
//task1
	
 std::vector<int32_t> v;
	int value = 0;
	while(value != -1)
		{
			std::cout << "Input value:\n";
			input(value); //number of robots
	while(!is_positive(value) && value != -1)
		{
			std::cout << "The value must be positive.\nTry again:\n";
			input(value);
		}
			v.push_back(value);
		}
	std::cout << v << "\n";
	
	//Лекция 4
	//test capacity and size
	std::vector<int32_t> v = {1,2,3};
	for(size_t i=0; i<1000; ++i)
		{
			v.push_back(i);
			std::cout << "Size = " << v.size() << " Capacity = " << v.capacity() << "\n";
		}
	for(size_t i=0; i<1000; ++i)
		{
			v.pop_back();
			std::cout << "Size = " << v.size() << " Capacity = " << v.capacity() << "\n";
		}
	
	//task 4 (lection 3 task1)
	//test ip=input nonpositive values, no values, ni size,
	int32_t N = 0; //number of robots

	std::cout << "Enter the N (number of robots) : \n";
	input(N); //number of robots
	while(!is_positive(N))
		{
			std::cout << "The N must be positive.\nTry again:\n";
			input(N);
		}
	
	std::vector<int32_t> v(N);
	for(size_t i=0; i<N; ++i)
		{
			std::cout << "Input value:\n";
			input(v[i]); //number of robots
	while(!is_positive(v[i]))
		{
			std::cout << "The N must be positive.\nTry again:\n";
			input(v[i]);
		}
		}
	std::cout << v << "\n";
	
	int32_t position = 0;
	while(position != -1)
		{
			std::cout << "Enter the position (to terminate enter \"-1\"):\n";
			input(position);
			while((position != -1) && (!is_positive(position) || position >= v.size()) )
		{
			std::cout << "The illegal value of \"position\".\nTry again:\n";
			input(position);
		}
			v = remove_from_position(v, position);	
			std::cout << v << "\n";		
		}
	std::cout << v << "\n";
	
	//task3
	std::vector<int32_t> v;

	
	int32_t value = 0, position = 0;
	while(value != -1 && position != -1)
		{
			std::cout << "Enter the value and position (to terminate enter \"-1\"):\n";
			input(value);
			input(position);
			v = add_to_position(v, value, position);	
		}
	std::cout << v << "\n";
	//task2

	std::vector<int32_t> v;

	
	int32_t element = 0;;
	while(element != -1)
		{
			std::cout << "Enter the element(to terminate enter \"-1\"):\n";
			input(element);
			
			std::vector<int32_t> v_temp(v.size()+1);
			for(size_t i=0; i<v.size(); ++i)
				{
					v_temp[i] = v[i];
				}
			v_temp[v.size()] = element;
			v = v_temp;
		}
	
		std::cout << v << "\n";

		float mid = 0;
  	for(size_t i=0; i< (v.size()-1); ++i)
			{
				if(!is_positive(v[i]))
				{
				std::cout << "Non positive value. Terminate program.\n";
				return 0;
				}
				mid += v[i];
			}
	mid = (v.size() != 1 ? mid/(v.size()-1) : 0);
	std::cout << "\nAverage value is " << mid << '\n';
	std::vector<int32_t> v;

	//task1
	int32_t element = 0;;
	while(element != -1)
		{
			std::cout << "Enter the element(to terminate enter \"-1\"):\n";
			input(element);
			std::vector<int32_t> v_temp(v.size()+1);
			for(size_t i=0; i<v.size(); ++i)
				{
					v_temp[i] = v[i];
				}
			v_temp[v.size()] = element;
			v = v_temp;
		}
	
		std::cout << v;
  */  
	return 0;
}

std::vector<int32_t> remove_from_position(const std::vector<int32_t>& vec, const int32_t position)
{
	if(position <0 || position >= vec.size())
	{
		return vec;
	}
	std::vector<int32_t> v_temp(vec.size()-1);
	for(size_t i=0,k=0; i<vec.size(); ++i)
		{
			if(i != position)
			{
				v_temp[k] = vec[i];
				++k;
			}
		}
	return v_temp;
}

std::vector<int32_t> add_to_position(const std::vector<int32_t>& vec, const int32_t val, const int32_t position)
{
	if(position < 0 || position > vec.size())
	{
		std::cout << "Illegal value of variable \"position\".\n";
		return vec;
	}
	std::vector<int32_t> v_temp(vec.size()+1);
	
			
			for(size_t i=0; i<position; ++i)
				{
					v_temp[i] = vec[i];
				}
			for(size_t i=position+1; i<v_temp.size(); ++i)
				{
					v_temp[i] = vec[i-1];
				}
			v_temp[position] = val;
	return v_temp;
		}
	

