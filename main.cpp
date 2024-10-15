
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
	double  evaluate_area();


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
	void write_data(); //number_add_buildings and resize capacity for vector
	bool check_data();
	void print_data();
	double  evaluate_area();

	int32_t number_add_buildings;
	std::vector<Building> additional_buildings;
	House house;

	double  S = 0;

};


struct Village
{
	void write_data();
	bool check_data();
	void print_data();
	double evaluate_area();

	int32_t number_sections=0;
	std::vector<Section> sections;
	double  S = 0;
};


//----------------------MAIN START---------------
int main()
{

		Village village;
		village.write_data();
		village.evaluate_area();
		village.print_data();
	return 0;
}


//---------------------MAIN END------------------
// --------------VILLAGE------------------------

bool Village::check_data()
{
 if (this->number_sections < 0)
 {
  return false;
 }
 if (this->S < 0)
 {
  return false;
 }
 return true;
}

void Village::print_data()
{
 std::cout << "Village with " << this->number_sections << " sections:\n";
 for (size_t i = 0; i < sections.size(); ++i)
 {
  std::cout << "Section " << (i + 1) << ":\n";
  sections[i].print_data();
 }
 std::cout << "Total village area: " << this->S << "\n";
}

double  Village::evaluate_area()
{
 this->S = 0;
 for (size_t i = 0; i < sections.size(); ++i)
 {
  sections[i].evaluate_area();
  this->S += sections[i].S;
 }
 return this-> S;
}

void Village::write_data()
{
 while (true)
 {
  std::cout << "Input number of sections:\n";
  std::cin >> this->number_sections;
  if (this->check_data())
  {
   sections.resize(this->number_sections);
   for (size_t i = 0; i < this->number_sections; ++i)
   {
    std::cout << "Section  " << (i + 1) << ":\n";
    sections[i].write_data();
   }
   break;
  }
  else
  {
   std::cout << "Invalid data. Try again.\n";
   std::cin.clear();
   std::cin.ignore(1000, '\n');
  }
 }
}




//-----SECTION------------

// --------------SECTION------------------------

void Section::print_data()
{
 std::cout << "House details:\n";
 house.print_data();
 std::cout << "Additional buildings:\n";
 for (size_t i = 0; i < additional_buildings.size(); ++i)
 {
  std::cout << "Building " << (i + 1) << ":\n";
  additional_buildings[i].print_data();
 }
}

bool Section::check_data()
{
 if (this->number_add_buildings < 0)
 {
  return false;
 }
 if (this->S < 0)
 {
  return false;
 }
 return true;
}

void Section::write_data()
{
 while (true)
 {
  std::cout << "Input number of additional buildings:\n";
  std::cin >> this->number_add_buildings;
  if (this->check_data())
  {
   additional_buildings.resize(this->number_add_buildings);
   for (size_t i = 0; i < this->number_add_buildings; ++i)
   {
    std::cout << "Building " << (i + 1) << ":\n";
    additional_buildings[i].write_data();
   }
   house.write_data();
   break;
  }
  else
  {
   std::cout << "Invalid data. Try again.\n";
   std::cin.clear();
   std::cin.ignore(1000, '\n');
  }
 }
}

double  Section::evaluate_area()
{
 this->S = house.evaluate_area();
 for (size_t i = 0; i < additional_buildings.size(); ++i)
 {
  this->S += additional_buildings[i].evaluate_area();
 }

 return this->S;
}


//-----HOUSE--------------------------


void House::print_data()
{

	//	std::cout << std::setw(20) << std::left << "Floor : " << this->floor_number << "\n";
	std::cout << std::setw(20) << std::left << "\tNumber of floors: " << this->number_floors << "\n";
	std::cout << (this->has_pipe_furnace ? "a " : "no ") << "furnace and a pipe.\n";

	std::cout << std::setw(20) << std::left <<  "House area: " << this->S << "\n";

	for(size_t i=0; i<this->number_floors; ++i)
	{
		std::cout << "Floor " << (i+1) << "\n";
		floors[i].print_data();
	}


}


bool House::check_data()
{

	if (this->number_floors <  0) 
	{
		return 0;
	}

	if(this->has_pipe_furnace != 1 && this->has_pipe_furnace != 0)
	{
		return 0;
	}

	if (this->S < 0)
	{
		return 0;
	}
	return 1;
}

void House::write_data()
{
	while(true)
	{

		std::cout << "In a house input number of floors:\n";


		std::cin >> this->number_floors;
		if(this-> check_data())
		{
			floors.resize(this->number_floors);
			for(size_t i=0; i<this->number_floors; ++i)
			{
				std::cout << "Floor " << (i+1) << "\n";
				floors[i].write_data();
			}
		}

		std::cout << "Input the size of the house  area:\n";
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
double House:: evaluate_area()
{

	return this->S;

}









//----FLOOR---------------------------

void Floor::print_data()
{
	
//	std::cout << std::setw(20) << std::left << "Floor : " << this->floor_number << "\n";
	std::cout << std::setw(20) << std::left << "\tNumber of rooms: " << this->number_rooms << "\n";
	std::cout << std::setw(20) << std::left << "Floor height: " << this->height << "\n";
	std::cout << std::setw(20) << std::left <<  "Floor area: " << this->S << "\n";
	for(size_t i=0; i<this->number_rooms; ++i)
		{
			std::cout << "Room " << (i+1) << "\n";
			rooms[i].print_data();
		}



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
		if(this->check_data())
		{
		rooms.resize(this->number_rooms);
		for(size_t i=0; i<this->number_rooms; ++i)
		{
			std::cout << "Room " << (i+1) << "\n";
			rooms[i].write_data();
		}
		
		evaluate_area();
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
		std::cout << "Has the building a furnace with a pipe? Yes(1) / No(0)\n";
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



