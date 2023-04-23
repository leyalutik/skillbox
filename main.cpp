
#include <iostream>
#include <cassert>
#include<vector>

//add element to the end -> delete element from the beginning

//Fix size and access to any item of matrix
//can use moving index
//shift - difference between current index and original index (in the starting position)
//capacity - max size of store
size_t moving_index(const size_t index_original, const size_t shift, const size_t capacity);
void increment_shift(const size_t capacity,size_t& shift);
void add_element(const int32_t value, size_t& shift, const size_t capacity, std::vector<int32_t>& v);
void display(const std::vector<int32_t>& v,const size_t shift, const size_t capacity);
void input(int32_t& value);

int main()
{
	size_t capacity = 20;
	std::vector<int32_t> v;
	v.reserve(capacity);

	int32_t value = 0;
	size_t shift = 0; // difference current and  original indices
	while(value != -2) //Terminate the program
		{
			while(value != -1 && value != -2) //display vector
				{	
					std::cout << "Input the value of store :\n";
					input(value);
					if(value != -1 && value != -2)
					{
						add_element(value, shift, capacity, v);
					}
			
				}	
			std::cout << "Current store:\n";
			display(v,shift,capacity);
			std::cout << "\n";
			value = (value == -1 ? 0 : value) ;
		}
	
	return 0;
}
//--------------FUNCTIONS-----------------
void increment_shift(const size_t capacity, size_t& shift)
{
	++shift;
	shift %= capacity;
}

size_t moving_index(const size_t index_original, const size_t shift, const size_t capacity)
{
	size_t result = (index_original + shift)% capacity;
	return result;
}

void add_element(const int32_t value,  size_t& shift, const size_t capacity, std::vector<int>& v)
{
	if(v.size() > capacity)
		{
			std::cout << "Illegal value of capacity.\n The size vector is more than its capacity.\n";
		return;
		}
	else if(v.size() < capacity)
	{
		v.push_back(value);
	}
	else if (v.size() == capacity)
		{
			v[moving_index(0,shift,capacity)] = value;
			increment_shift(capacity,shift);
		}
}


void input(int32_t& value) 
{
	std::cin >> value;
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
			std::cin >> value;
		}

}

void display(const std::vector<int32_t>& v,const size_t shift, const size_t capacity)
{
	size_t shift_temp = shift;
	if(v.size() < capacity)
	{
		shift_temp = 0;
	}
	std::cout  << "{";
	bool first = true;
	for(size_t i= (shift_temp)%capacity, counter = 0; counter<v.size(); ++counter, i = (i+1)%capacity)
		{
			if(!first)
			{
				std::cout << ", "; 
			}
			
			first = false;
			std::cout << v[i];
		}
	std::cout  << "}";
}
