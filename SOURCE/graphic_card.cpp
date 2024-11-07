#include "graphic_card.h"

Graphic_Card::Graphic_Card(Ram* ram1) : ram(ram1) {}

void Graphic_Card::display()
{
    ram->read().display();
}

