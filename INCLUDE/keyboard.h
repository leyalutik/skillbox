#ifndef KEYBOARD_H
#define KEYBOARD_H

#include "ram.h"
#include <iostream>

class Keyboard
{
public:
    Keyboard(Ram* ram);
    void input();

private:
    Ram* ram;
};

#endif

