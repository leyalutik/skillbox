#include "central_processor.h"

Central_Processor::Central_Processor(Ram* ram1) : ram(ram1) {}

void Central_Processor::compute()
{
    for (int i = 1; i < ram->read().size; ++i)
    {
        ram->write().value[0] += ram->write().value[i];
    }
    ram->write().size = 1;
    ram->update();
}

