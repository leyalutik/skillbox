#include "hard_drive.h"

Hard_Drive::Hard_Drive(const std::string& filename1, Ram* ram1): filename(filename1), ram(ram1) {}

void Hard_Drive::save() // to hard drive
{
    std::ofstream ofs(filename.c_str(), std::ios::binary);
    if (!ofs.is_open())
    {
        std::cout << "Could not open file for saving.\n";
        return;
    }
    size = ram->read().size;
    for (int i = 0; i < size; ++i)
    {
        ofs.write(reinterpret_cast<const char*>(&ram->write().value[i]), sizeof(ram->read().value[i]));
    }
}

void Hard_Drive::load() //from
{
    std::ifstream ifs(filename.c_str(), std::ios::binary);
    if (!ifs.is_open())
    {
        std::cout << "Could not open file for loading.\n";
        return;
    }
    ram->write().size = 0;
    for (int i = 0; i < size; ++i)
    {
        ifs.read(reinterpret_cast<char*>(&ram->write().value[i]), sizeof(ram->write().value[i]));
        if (ifs)
        {
            ++ram->write().size;
        }
        else
        {
            break;
        }
    }

    ram->update();
}

