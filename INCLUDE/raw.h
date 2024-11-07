#ifndef RAM_H
#define RAM_H

class Computer
{

public:

void start(const std::string& command)
{
if(command == "sum")
{
sum();
return;
}
if("save")
{
save();
}
if()
load();

if()
input();

if()
display();

if()
exit

std::cout << "Unknown command.\n";
}

void input()
{
	keyboard.input();

}

void sum()
{
cpu.compute();
}

void save()
{
	disk.save();	
}

void load()
{

	disk.load();
}

void display()
{
gpu.display();

}

private:
Ram ram;
Central_Processor cpu(&ram);
Hard_Drive disk(&ram);
Keybord keyboard(&ram);
Graphic_Card gpu(&ram);

};



struct Buffer
{
    int capacity = 8;
    int size = 0;
    int value[8] = {0, 0, 0, 0, 0, 0, 0, 0};

    void set_values(const Buffer& b);
    void display()
    {
        for (int i = 0; i < size; ++i)
        {
            value[i];
        }
    }
};

class Ram
{
public:
    void reset_to_zero();
    Buffer read()
    {
        return buffer;
    }
    Buffer& write()
    {
        return buffer;
    }
    void update()
    {
        for (int i = buffer.size; i < buffer.capacity; ++i)
        {
            buffer.value[i] = 0;
        }
    }

private:
    Buffer buffer;
};

class Keybord
{
public:
    Keybord(Ram* ram1) : ram(ram1) {}
    Buffer input()
    {
        ram->write().size = 0;
        for (int i = 0; i < ram->read().capacity; ++i)
        {
            if (std::cin)
            {
                std::cin >> ram->write().value[i];
                ++ram->write().size;
            }
        }
        ram->update();
    }

private:
    Ram* ram;
};

class Graphic_Card
{
public:
    Graphic_Card(Ram* ram1) : ram(ram1) {}
    void display()
    {
        ram->read().display();
    }

private:
    Ram* ram;
};

class Central_Processor
{
public:
    Central_Processor(Ram* ram1) : ram(ram1) {}
    void compute()
    {
        for (int i = 1; i < ram->read().size; ++i)
        {
            ram->write().value[0] += ram->write().value[i];
        }
        ram->write().size = 1;
        ram->update();
    }

private:
    Ram* ram;
};

class Hard_Drive
{
public:
    Hard_Drive(Ram* ram1) : ram(ram1) {}
    void save()
    {
        std::ifstream ifs(filename);
        if (!ifs.is_open())
        {
            std::cout << "Could not open file for saving.\n";
            return;
        }
        int size = ram->read().size;
        for (int i = 0; i < size; ++i)
        {
            ifs.write(reinterpret_cast<char*>(&ram->read().value[i]), sizeof(ram->read().value[i]));
        }
    }

    void load()
    {
        std::ofstream ofs(filename);
        if (!ofs.is_open())
        {
            std::cout << "Could not open file for loading.\n";
            return;
        }
        for (int i = 0; i < ram->write().size; ++i)
        {
            ofs.read(reinterpret_cast<char*>(&ram->write().value[i]), sizeof(ram->write().value[i]));
        }
        ram->write().size = ram->read().size;
        ram->update();
    }

private:
    int size = 0;
    const char* filename = "data.txt";
    Ram* ram;
};

#endif

