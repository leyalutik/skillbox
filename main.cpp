/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cassert>

float travelTime(float distance, float speed)
{
    assert(!(distance <= 0));
    assert (!(speed <= 0));
    return (distance/speed);
}

int main()
{
    std::cout << "Input distance and speed, values must be positive: \n";
    float distance = 1, speed = 1;
    while (!(std::cin))
    {
        std::cin.ignore(32767, '\n'); // delete garbage

			std::cout << "Illegal value. Input again:\n";
			std::cin >> distance >> speed;
        
    }
    
    std::cout << "Time = " << travelTime(distance,speed) << std::endl;
    return 0;
}
