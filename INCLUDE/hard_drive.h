#ifndef HARD_DRIVE_H
#define HARD_DRIVE_H

#include "ram.h"
#include <iostream>
#include <fstream>

class Hard_Drive
{
public:
    Hard_Drive(const std::string& filename1, Ram* ram1);
    void save();
    void load();

private:
    std::string filename;
    Ram* ram;
    int size = 0;
};

#endif

