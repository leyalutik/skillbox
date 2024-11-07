#include "ram.h"




void Buffer::display()
{
    for (int i = 0; i < size; ++i)
    {
        std::cout << value[i] << " ";
    }
    std::cout << "\n";
}

Buffer Ram::read()
{
    return buffer;
}

Buffer& Ram::write()
{
    return buffer;
}

void Ram::update()
{
    // reset to zero unused
    for (int i = buffer.size; i < buffer.capacity; ++i)
    {
        buffer.value[i] = 0;
    }
}

