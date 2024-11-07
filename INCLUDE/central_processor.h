#ifndef CENTRAL_PROCESSOR_H
#define CENTRAL_PROCESSOR_H

#include "ram.h"

class Central_Processor
{
public:
    Central_Processor(Ram* ram);
    void compute();

private:
    Ram* ram;
};

#endif

