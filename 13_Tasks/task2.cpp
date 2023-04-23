
#include <iostream>
#include <cassert>
#include<vector>

int main()
{
	
std::vector<float> prices {2.5, 4.25, 3.0, 10.0};

// Вектор покупок: {1, 1, 0, 3}, то есть два товара по индексу 1 и по одному — индексов 0 и 3.

std::vector<int> items {1, 1, 0, 3};
float sum = 0.;
for(size_t i=0; i< items.size(); ++i)
	{
		if(items[i] >= prices.size() || items[i] < 0)
		{
			std::cout << "Illegal value of vector \"items\" elemens.\nTerminate program.\n";
			return 0;
		}
		sum += prices[items[i]];
	}
	
std::cout << "Суммарная стоимость будет равна " << sum << "\n"; 
	
	return 0;
}



