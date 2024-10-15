
#include<iostream>
#include<iomanip>
#include<vector>
#include<string>
/*
enum class  RoomType
{
	bedroom = 1,
	kitchen = 2,
	bathromm = 3,
	children_room = 4,
	dining_room = 5
};

enum class BuildingType
{
	garage = 1;
	shed = 2;
	sauna = 3;
};

*/


struct Room
{
	void write_data();
	bool check_data();
	void print_data();
	double  evaluate_area();


	std::vector<std::string> room_names = {"Bedroom", "Kitchen", "Bathroom", "Children\'s room","Dining room" };
int32_t room_type = 0;
	double  S=0;

	
};

struct Floor
{

	void write_data();
	bool check_data();
	void print_data();
	double evaluate_area();

	std::vector<Room> rooms;

//	int32_t floor_number = 1;
	int32_t number_rooms=0;
	double  height=0;
	double S=0;

};


struct House
{
	void write_data();
	bool check_data();
	void print_data();
	void evaluate_area();


	int32_t number_floors=0;
	bool has_pipe_furnace=0;
	std::vector<Floor> floors;


	double  S = 0;

};

struct Building
{

void print_data();
bool check_data();
void write_data();

double  evaluate_area();

std::vector<std::string> building_names = {"Garage", "Shed", "Sauna"};
int32_t building_type = 0;
double S = 0.0;
bool has_pipe_furnace = 0;

};
struct Section
{
	void write_data(); //number_add_buildings and reserve capacity for vector
	bool check_data();
	void print_data();
	void evaluate_area();

	int32_t number_add_buildings;
	std::vector<Building> additional_buildings;
	House house;
	
	int32_t S = 0;

};


struct Village
{
	/*void write_data()
	{
		while(true)
		{



			if(check())
			{
				sections.reserve(number_sections);
				for(size_t i=0; i<number_sections; ++i)
				{
					sections[i].write_data();
				}
			}
		}
	}*/
	bool check_data();
	void print_data();
	void evaluate_area();

	int32_t number_sections=0;
	std::vector<Section> sections;
	int32_t S = 0;
};


//----------------------MAIN START---------------
int main()
{
	while(true)
	{
Floor b;
b.write_data();
b.print_data();
	}
//	Village village;
//	village.write_data();
//	village.evaluate_area();
//	village.print_data();

	return 0;
}


//---------------------MAIN END------------------

//----FLOOR---------------------------

void Floor::print_data()
{
	
//	std::cout << std::setw(20) << std::left << "Floor : " << this->floor_number << "\n";
	std::cout << std::setw(20) << std::left << "\tNumber of rooms: " << this->number_rooms << "\n";
	for(size_t i=0; i<this->number_rooms; ++i)
		{
			std::cout << "Room " << (i+1) << "\n";
			rooms[i].print_data();
		}


	std::cout << std::setw(20) << std::left << "\tHeight: " << this->height << "\n";

	std::cout << "\tArea: " << this->S << "\n";
}


bool Floor::check_data()
{

	if (this->number_rooms <  0) 
	{
		return 0;

	}
	if (this->height <  0) 
	{
		return 0;

	}


	if (this->S < 0)
	{
		return 0;
	}
	return 1;
}

void Floor::write_data()
{
	while(true)
	{
		std::cout << "In a floor input number of rooms:\n";
		

		std::cin >> this->number_rooms;
		rooms.reserve(this->number_rooms);
		for(size_t i=0; i<this->number_rooms; ++i)
		{
			std::cout << "Room " << (i+1) << "\n";
			rooms[i].write_data();
		}

	std::cout << "In a floor input the height:\n";
		

		std::cin >> this->height;



		if(this->check_data() && std:: cin)
		{

			break;
		}
		else
		{
			std::cout << "Invalid data. Try again.\n";
			std::cin.clear();
				
			std::cin.ignore(1000,'\n');
		}
	}
}
double Floor:: evaluate_area()
{

	this->S=0;
	for(size_t i=0; i<this->number_rooms; ++i)
		{
			this->S +=rooms[i].evaluate_area();
		}

return this->S;
}







//-----ROOM------------------------

void Room::print_data()
{
	std::cout << std::setw(10) << std::left << "Room: " << this->room_names[this->room_type] << "\n";

	std::cout << "Area: " << this->S << "\n";
}


bool Room::check_data()
{
	if (this->room_type <0  ||  this->room_type > 4) 
	{
		return 0;

	}
	if (this->S < 0)
	{
		return 0;
	}
	return 1;
}

void Room::write_data()
{
	while(true)
	{
		std::cout << "Input room type number:\n";
		for(size_t i=0; i<this->room_names.size(); ++i)
		{
		std::cout << std::setw(15) << std::left << this->room_names[i];
		
		std::cout << std::setw(10) << std::right << i;
		std::cout << std::endl;
		}

		std::cin >> this->room_type;
		std::cout << "Input the size of the area:\n";
		std::cin >> this->S;

		if(this->check_data() && std:: cin)
		{

			break;
		}
		else
		{
			std::cout << "Invalid data. Try again.\n";
			std::cin.clear();
				
			std::cin.ignore(1000,'\n');
		}
	}
}
double  Room:: evaluate_area()
{
return this->S;
}







//--------------BUILDING---------------



void Building::print_data()
{
	std::cout << std::setw(10) << "Building: " << this->building_names[this->building_type] << " with ";

	std::cout << (this->has_pipe_furnace ? "a " : "no ") << "furnace and a pipe.\n";
	std::cout << "Area: " << this->S << "\n";
}


bool Building::check_data()
{
	if (this->building_type != 0 &&  this->building_type != 1 && this->building_type != 2) 
	{
		return 0;

	}
	if (this->S < 0)
	{
		return 0;
	}
	if(this->has_pipe_furnace != 1 && this->has_pipe_furnace != 0)
	{
		return 0;
	}
	return 1;
}

void Building::write_data()
{
	while(true)
	{
		std::cout << "Input building type number:\n";
		for(size_t i=0; i<this->building_names.size(); ++i)
		{
		std::cout << std::setw(10) << std::left << this->building_names[i];
		
		std::cout << std::setw(10) << std::right << i;
		std::cout << std::endl;
		}

		std::cin >> this->building_type;
		std::cout << "Input whether the house hase furnace with a pipe. Yes(1) / No(0)\n";
		std::cin >> this->has_pipe_furnace;
		std::cout << "Input the size of the area:\n";
		std::cin >> this->S;

		if(this->check_data() && std:: cin)
		{

			break;
		}
		else
		{
			std::cout << "Invalid data. Try again.\n";
			std::cin.clear();
				
			std::cin.ignore(1000,'\n');
		}
	}
}
double  Building:: evaluate_area()
{
return this->S;
}



