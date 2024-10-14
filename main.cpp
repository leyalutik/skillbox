
#include<iostream>

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


struct Room
{
	char* room_names[3] = {"Bedroom", "Kitchen", "Bathroom", "Children\'s room","Dining room" };
int32_t type_room;
	int32_t S=0;

	void write_data();
	bool check_data();


void print_room(const BuildingType& buiding_type);
};

struct Floor
{

	int32_t number_rooms=0;
	int32_t height=0;
	void write_data();
	bool check();

	int32_t S=0;
	std::vector<Room> rooms;
	void evaluate_area();
};


struct House
{
	int32_t number_floors=0;
	bool has_pipe_furnace=0;
	std::vector<Floor> floors;

	void write_data();
	bool check_data();
	void evaluate_S();

	int32_t S = 0;
	void evaluate_area();

};

struct Building
{

void print_data()
{
	std::cout << std::setw(10) << "Additional building: " << building_names[type_building]; << "\n";

	std::cout << "There is " << (has_pipe_furnace ? "a " : "no ") << "furnace with a pipe.\n":
	std::cout << "Area: " << S << "\n":
}

char* building_names[3] = {"Garage", "Shed", "Sauna"};
int32_t type_building;

bool check()
{
	if (building_type != 0 AND  building_type != 1 || building_type != 2) 
	{
		return 0;

	}
	if (S < 0)
	{
		return 0;
	}
	if(has_pipe_furnace != true AND has_pipe_furnace != false)
	{
		return 0;
	}
	return 1;
}

void write_data()
{
	while(true)
	{
		std::cout << "Input buiding type number:\n\n";


		std::cin >> building_type;
		std::cout << "Input whether the house hase furnace with a pipe. Yes(1) / No(0)\n";
		std::cout << "Input the size of the area:\n";
		std::cin >> has_pipe_furnace;

		if(check())
		{

			break;
		}
		else
		{
			std::cout << "Invalid data. Try again.\n";
			std::cin.ignore(1000,'\n');
			std::cin.good();
		}
	}
}
int32_t S=0;
bool has_pipe_furnace = 0;

};
struct Section
{
	void write_data(); //number_add_buildings and reserve capacity for vector
	bool check_data();
	void print_data();
	int32_t number_add_buildings;
	std::vector<Building> additional_buildings;
	House house;
	
	int32_t S = 0;
	void evaluate_area();

};


struct Village
{
	void write_data()
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
	}
	bool check_data();
	void print_data();

	int32_t number_sections=0;
	vector<Section> sections;
	int32_t S = 0;
	void evaluate_area();
};



int main()
{
	Village village;
	village.write_data();
	village.evaluate_area();
	village.print_data();

	return 0;
}


//---------------------------
void Room::print_room(const BuildingType& buiding_type)
{
	switch(buiding_type)
	{
		case BuildingType::bedroom : std::cout <<  "Bedroom";
					     break;
		case BuildingType::kitchen:	std::cout << "Kitchen";
						break;
		case BuildingType::bathroom: std::cout << "Bathroom";
					     break;
		case BuildingType::children_room: std::cout << "Children's room";
						  break;
		case BuildingType::dining_room: std::cout << "Dining room";
						break;
		default : std::cout << "Unknown building type.";
			  break;

	}

}

