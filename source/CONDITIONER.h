#include<iostream>
#include<string>
#include<sstream>

struct CONDITIONER
{

	float TEMPERATURE_INSIDE_LOWER_BOUNDARY = 25; //Celsius
	float TEMPERATURE_INSIDE_UPPER_BOUNDARY = 30;
	
	CONDITIONER()
	{

	}
	CONDITIONER(const float temperature_new)
	{
		temperature = temperature_new;
		evaluate();
	}

	
	void set(const float temperature_new)
	{
		temperature = temperature_new;
		evaluate();
	}
	void display()
	{
		if(is_switch_changed)
		{
			std::cout << "CONDITIONER: " << switch_state() << "\n";
		}
	}
	
	private:
	float temperature;
	
	bool switch_ON;
	bool is_switch_changed;
	bool first_switch = true;
	std::string switch_state()
	{
		return {switch_ON ? "ON" : "OFF"};
	}
	void evaluate()
	{
		bool switch_ON_new;
		if(temperature <= TEMPERATURE_INSIDE_LOWER_BOUNDARY)
		{
			switch_ON_new = false;
		}
		else if(temperature >= TEMPERATURE_INSIDE_UPPER_BOUNDARY)
		{
			switch_ON_new = true;


		}
		else
		{
			switch_ON_new = switch_ON;
		}

		is_switch_changed =  switch_ON ^ switch_ON_new ;
		switch_ON = switch_ON_new;
		
		if(first_switch)
		{
			is_switch_changed = true;
			first_switch = false;
		}



	}




};

