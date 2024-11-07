#ifndef COMPUTER_H
#define COMPUTER_H

#include <iostream>
#include <string>
#include "ram.h"
#include "central_processor.h"
#include "hard_drive.h"
#include "keyboard.h"
#include "graphic_card.h"



class Computer
{
public:
    void run();
private:
    void launch_command();
    void display_interface();
    void input_command();

    void input();
    void sum();
    void save();
    void load();
    void display();
    void exit();
    std::string command;

    Ram ram;
    Central_Processor cpu{&ram};
    Hard_Drive disk{"data.txt", &ram}; //path to save/load defined in CMakeLists.txt
    Keyboard keyboard{&ram};
    Graphic_Card gpu{&ram};
};

#endif

