#ifndef RAM_H
#define RAM_H

#include <iostream>

struct Buffer
{
    const int capacity = 8;
    int size = 0;
    int value[8]  {0};

    void display();
};

class Ram
{
public:
    Buffer read();
    Buffer& write();
    void update(); // reset to zero after size

private:
    Buffer buffer;
};

#endif

