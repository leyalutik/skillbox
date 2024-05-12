#include<iostream>
#include<string>
#include<sstream>


struct  LIGHT
{
	explicit LIGHT(const bool value)
	{
		ON = value;
	}
	bool ON = false;

};

struct COLORFUL_TEMPERATURE
{
	const int TIME_LOWER_BOUNDARY = 16;//hours
	const int TIME_UPPER_BOUNDARY = 20;//hours
	const int TIME_START = 0;


	const float MAX_TEMPERATURE_COLOR = 5000;//K
	const float MIN_TEMPERATURE_COLOR = 2700;		       

	COLORFUL_TEMPERATURE()
	{

	}
	COLORFUL_TEMPERATURE(const int hour, const LIGHT& light_new)
	{
		TIME = hour % 24;
		light = light_new;
		evaluate();
	}

	void set(const int hour, const LIGHT& light_new)
	{
		TIME = hour % 24;
		light=light_new;
		evaluate();
	}


	
	void display()
	{
		if(light.ON)
		{
			std::cout << "Colorful Temperature: " << temperature << "\n";
		}


	}


	
	private:
	int TIME;
	float temperature;
	LIGHT light{false};

	void evaluate()
	{
		if(!light.ON)
		{
			return;
		}
		if(TIME >= TIME_START && TIME < TIME_LOWER_BOUNDARY)
		{
			temperature = MAX_TEMPERATURE_COLOR;
		}
		else if((TIME >= TIME_LOWER_BOUNDARY && 
				TIME <= TIME_UPPER_BOUNDARY)
			  )
			{
				temperature = (MAX_TEMPERATURE_COLOR - (TIME-TIME_LOWER_BOUNDARY)*((MAX_TEMPERATURE_COLOR-MIN_TEMPERATURE_COLOR)/(TIME_UPPER_BOUNDARY-TIME_LOWER_BOUNDARY)));
		}
			else
			{	
				temperature = MIN_TEMPERATURE_COLOR;
			}

	}

};





