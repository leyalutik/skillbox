#include "keyboard.h"

Keyboard::Keyboard(Ram* ram1) : ram(ram1) {}

void Keyboard::input()
{
    ram->write().size = 0;
    for (int i = 0; i < ram->read().capacity; ++i)
    {
    	 std::cin >> ram->write().value[i];
	if (std::cin)
        {
            ++ram->write().size;
        }
	else
	{
		ram->write().value[i] = 0;
		break;
	}
    }

    std::cin.clear();
    std::cin.ignore(1000,'\n');
    ram->update();
}

