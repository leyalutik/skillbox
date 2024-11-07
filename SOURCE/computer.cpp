#include "computer.h"
#include <iostream>



void Computer::run()
{
	while(true)
	{
		display_interface();
		input_command();
		
		if(command == "exit")
		{
			break;
		}

		launch_command();

	}



}
void Computer::input_command()
{
	std::cin >> command;

}


void Computer::display_interface()
{
    std::cout << "     Input  commands:\n";
    std::cout << "1. input     - Enter data\n";
    std::cout << "2. sum       - Compute sum\n";
    std::cout << "3. save      - Save data to hard drive\n";
    std::cout << "4. load      - Load data from hard drive\n";
    std::cout << "5. display   - Display data\n";
    std::cout << "6. exit      - Exit the program\n";
    std::cout << "Enter a command: ";
}



void Computer::launch_command()
{
    if (command == "sum")
    {
        sum();
        return;
    }
    if (command == "save")
    {
        save();
        return;
    }
    if (command == "load")
    {
        load();
        return;
    }
    if (command == "input")
    {
        input();
        return;
    }
    if (command == "display")
    {
        display();
        return;
    }

    std::cout << "Unknown command.\n";
}

void Computer::input()
{
    keyboard.input();
}

void Computer::sum()
{
    cpu.compute();
}

void Computer::save()
{
    disk.save();
}

void Computer::load()
{
    disk.load();
}

void Computer::display()
{
    gpu.display();
}

