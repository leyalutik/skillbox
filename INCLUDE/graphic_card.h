#ifndef GRAPHIC_CARD_H
#define GRAPHIC_CARD_H

#include "ram.h"

class Graphic_Card
{
public:
    Graphic_Card(Ram* ram);
    void display();

private:
    Ram* ram;
};

#endif

