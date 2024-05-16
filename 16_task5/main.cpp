#include<iostream>
#include<string>
#include<sstream>
#include "header/LIGHTS_OUTSIDE.h"
#include "header/HEATERS.h"
#include "header/HEATING_PIPE_WATER.h"
#include "header/COLORFUL_TEMPERATURE.h"
#include "header/CONDITIONER.h"


const int TIME_START = 0;
const int TIME_END = 24;




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


	int hour=0;

	float TEMPERATURE_OUTSIDE=0;
	float TEMPERATURE_INSIDE=0;
	LIGHT light{false};
	MOVEMENT move{false};

};

void read(INPUT_PARAMETERS& input_parameters); 
bool parse_line (const std::string& line,INPUT_PARAMETERS& input_parameters);



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
	HEATING_PIPE_WATER water_pipe;
	CONDITIONER conditioner;
	COLORFUL_TEMPERATURE colorful_temperature;

	INPUT_PARAMETERS input_parameters;

	for(int day = 0; day < 2; ++day)
	{
		for(int hour=TIME_START; hour < TIME_END; ++hour)
		{
			input_parameters.set(hour);
			read(input_parameters);

			lights_outside.set(hour,input_parameters.move);
				heaters.set(input_parameters.TEMPERATURE_INSIDE);
				conditioner.set(input_parameters.TEMPERATURE_INSIDE);
				water_pipe.set(input_parameters.TEMPERATURE_OUTSIDE);
				colorful_temperature.set(hour,input_parameters.light);

				lights_outside.display();
				heaters.display();
				conditioner.display();
				water_pipe.display();
				colorful_temperature.display();

		}
	}
}




void read(INPUT_PARAMETERS& input_parameters)
{

	while(true)
	{
		std::cout << "\nTemperature inside, Temperature outside, Movement(yes/no), Light(on/off):\n";
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

	
	bool move  = {(str[0] == 'y' || str[0] == 'Y') ? true :false};


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

	
	
	bool light_on = {(str[1] == 'n' || str[1] == 'N') ? true : false};

	input_parameters.set(temp_inside, temp_outside, MOVEMENT{move}, LIGHT{light_on});

	return true;
}
