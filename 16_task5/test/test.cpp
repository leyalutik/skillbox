#include<iostream>
#include<string>
#include<sstream>
#include "header/LIGHTS_OUTSIDE.h"
#include "header/HEATERS.h"
#include "header/WATER_PIPE_HEATING.h"
#include "header/COLORFUL_TEMPERATURE.h"
#include "header/CONDITIONER.h"


const int TIME_START = 0;
const int TIME_END = 24;



enum class SWITCHES
{

	LIGHTS_INSIDE = 1,
	LIGHTS_OUTSIDE = 2,
	HEATERS = 4,
	WATER_PIPE_HEATING = 8,
	CONDITIONER = 16


};

struct INPUT_PARAMETERS
{

	INPUT_PARAMETERS()
	{
	}
	
	void set (const int hour_new)
	{
		hour = hour_new;
	}
	void set(const float temp_inside_new, 
		const float temp_outside_new,
		const MOVEMENT move_new, 
		const LIGHT light_new)
	{
		TEMPERATURE_OUTSIDE = temp_inside_new;
		TEMPERATURE_OUTSIDE = temp_outside_new;
		move = move_new;
		light = light_new;
	}

	private:

	int hour=0;

	float TEMPERATURE_OUTSIDE=0;
	float TEMPERATURE_INSIDE=0;
	LIGHT light{false};
	MOVEMENT move{false};

};

void read(INPUT_PARAMETERS& input_parameters); 
bool parse_line (const std::string& line,INPUT_PARAMETERS& input_parameters);

void turn_on(const SWITCHES& sw, int& bitmask);
void turn_off(const SWITCHES& sw, int& bitmask);
bool switch_state(const SWITCHES& sw, int& bitmask);
void turn_all_off(int& bitmask);

void adjust_switches(const std::tuple<float,float,MOVEMENT,LIGHT>& input_parameters, const int hour, int& bitmask); 
void display_all_switches(const int bitmask);
void display_changed_switches(const int bimask_old, const int bitmask_new);
void display_vehicles(const int bitmask_old, const int bitmask_new, const COLOR_TEMPERATURE& color_temp);
void display(const SWITCHES& sw,const int  bitmask);
void display(const LIGHT& light);
void display(const MOVEMENT& move);

bool check_temperature(const float temp);
bool check_movement(const std::string& move);
bool check_light(const std::string& light);


void task5();
//-----------------------------------------
int main()
{
	task5();

	return 0;

}

//-----------------------------------------

void task5()
{

	LIGHTS_OUTSIDE lights_outside;
	HEATERS heaters;
	WATER_PIPE_HEATING water_pipe;
	CONDITIONER conditioner;
	COLORFUL_TEMPERATURE colorful_temperature;

	INPUT_PARAMETERS input_parameters;

	for(int day = 0; day < 2; ++day)
	{
		for(int hour=TIME_START; hour < TIME_END; ++hour)
		{
			input_parameters.set(hour);
			read(input_parameters);

			lights_outside.set(hour,input_parameters.move.yes);
				heaters.set(input_parameters.TEMPERATURE_INSIDE);
				conditioner.set(input_parameters.TEMPERATURE_INSIDE);
				water_pipe.set(input_parameters.TEMPERATURE_OUTSIDE);
				colorful_temperature.set(hour,input_parameters.light.ON);

				lights_outside.display();
				heaters.display();
				conditioner.display();
				water_pipe.display();
				colorful_temperature.dislpay();


			//	adjust(input_parameters,hour,COLOR_TEMPERATURE, bitmask);

			//	display_switches(bitmask);
			//	display_color_temperature(hour, bitmask);

		}


	}


}

void adjust_switches(const std::tuple<float,float,MOVEMENT,LIGHT>& input_parameters, const int hour, int& bitmask)
{



}
void display(const SWITCHES& sw, const int bitmask)
{
	int index = static_cast<int>(sw);

	switch(index)
	{
		case 1: std::cout << "LIGHTS INSIDE: ";
			if(bitmask & 1) 
			{
				std::cout << "ON\n";
				return;
			}
			std::cout << "OFF\n";
			return;
		case 2: std::cout << "LIGHTS OUTSIDE: ";
			if(bitmask & 2) 
			{
				std::cout << "ON\n";
				return;
			}
			std::cout << "OFF\n";
			return;
		case 4: std::cout << "HEATERS: ";
			if(bitmask & 4) 
			{
				std::cout << "ON\n";
				return;
			}
			std::cout << "OFF\n";
			return;
		case 8: std::cout << "WATER_PIPE_HEATING: ";
			if(bitmask & 8) 
			{
				std::cout << "ON\n";
				return;
			}
			std::cout << "OFF\n";
			return;
		case 16: std::cout << "CONDITIONER: ";
			if(bitmask & 16) 
			{
				std::cout << "ON\n";
				return;
			}
			std::cout << "OFF\n";
			return;





	}

}

void display_all_switches(const int bitmask)
{
	if(bitmask & static_cast<int>(SWITCHES::LIGHTS_INSIDE))
	{
		std::cout << "LIGHTS INSIDE: ON\n";
	}
	else
	{

		std::cout << "LIGHTS INSIDE: OFF\n";
	}

		if(bitmask & static_cast<int>(SWITCHES::LIGHTS_OUTSIDE))
	{
		std::cout << "LIGHTS OUTSIDE: ON\n";
	}
	else
	{

		std::cout << "LIGHTS OUTSIDE: OFF\n";
	}
	if(bitmask & static_cast<int>(SWITCHES::HEATERS))
	{
		std::cout << "HEATERS: ON\n";
	}
	else
	{

		std::cout << "HEATERS: OFF\n";
	}
	if(bitmask & static_cast<int>(SWITCHES::WATER_PIPE_HEATING))
	{
		std::cout << "WATER_PIPE_HEATING: ON\n";
	}
	else
	{

		std::cout << "WATER_PIPE_HEATING: OFF\n";
	}


	if(bitmask & static_cast<int>(SWITCHES::CONDITIONER))
	{
		std::cout << "CONDITIONER: ON\n";
	}
	else
	{

		std::cout << "CONDITIONER: OFF\n";
	}


}
void display(const LIGHT& light)
{
	int a;
}
void display(const MOVEMENT& move)
{
	std::cout << "MOVEMENT: ";
	if(static_cast<int>(move))
	{
		std::cout << "YES\n";
		return;
	}
	std::cout << "NO\n";
}

void turn_on(const SWITCHES& sw,int& bitmask)
{
	bitmask = bitmask | static_cast<int>(sw);
}
void turn_off(const SWITCHES& sw,int& bitmask)
{
	bitmask = bitmask & ~(static_cast<int>(sw));
}
bool switch_state(const SWITCHES& sw,int& bitmask)
{
	return (bitmask | static_cast<int>(sw));
}
void turn_all_off(int& bitmask)
{
	bitmask = 0;
}


void input_line(INPUT_PARAMETERS& input_parameters)
{

	while(true)
	{
		std::cout << "Temperature inside, temperature outside, movement, lights:\n";
		std::string line;
		std::getline(std::cin,line,'\n');

		if(parse_line(line,input_parameters))
		{
			break;
		}
		else
		{
			std::cout << "Invalid data. Please, try again.\n";
		}


	}
}



bool parse_line(const std::string& line, INPUT_PARAMETERS& input_parameters)
{
	std::stringstream s(line);
	
	float temp_inside;

	s >> temp_inside;
	if(s.fail() || s.bad() || s.eof())
	{
		return false;
	}

	
	float temp_outside;
	s >> temp_outside;;
	if(s.fail() || s.bad() || s.eof())
	{
		return false;
	}


	std::string str;
	s >> str;
	if(s.eof())
	{
		return false;
	}
	if(str != std::string("no") &&
			str != std::string("No") &&
			str != std::string("NO") &&
			str != std::string("yes") &&
			str !=std::string("Yes") &&
			str !=std::string("YES")
	  )
	{
		return false;
	}

	
	MOVEMENT move  = {(str[0] == 'y' || str[0] == 'Y') ? MOVEMENT{true} : MOVEMENT{false}};


	str.clear();
	s >> str;
	if(!s.eof())
	{
		return false;
	}
	if(str != std::string("ON") &&
			str != std::string("On") &&
			str != std::string("on") &&
			str != std::string("OFF") &&
			str !=std::string("Off") &&
			str !=std::string("off")
	  )
	{
		return false;
	}

	
	bool  light_is_on  = {(str[1] == 'n' || str[1] == 'N') ? true : false};

	input_parameters.set(temp_inside, temp_outside, move, light_is_on);

	return true;
}
