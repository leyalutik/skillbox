#include<iostream>
#include<string>
#include<sstream>
#include<tuple>

#define COUT(x) \
	std::cout << #x << " = " << x << "\n";
struct HEATING_PIPE_WATER 
{

	float TEMPERATURE_OUTSIDE_LOWER_BOUNDARY = 0; //Celsius
	float TEMPERATURE_OUTSIDE_UPPER_BOUNDARY = 5;
	
	HEATING_PIPE_WATER()
	{

	}
	HEATING_PIPE_WATER(const float temperature_new)
	{
		temperature = temperature_new;
		evaluate();
	}

	
	void set(const float temperature_new)
	{
		temperature = temperature_new;
		evaluate();
	}
	void evaluate()
	{
		bool switch_ON_new;
		if(temperature < TEMPERATURE_OUTSIDE_LOWER_BOUNDARY)
		{
			switch_ON_new = true;
		}
		else if(temperature > TEMPERATURE_OUTSIDE_UPPER_BOUNDARY)
		{
			switch_ON_new = false;


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
	void display()
	{
		if(is_switch_changed)
		{
			std::cout << "WATER_PIPE_HEATING: " << switch_state() << "\n";
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




};

void test_cases()
{
	{
		HEATING_PIPE_WATER pipe_water;

		for(int temp = -1; temp <=6; temp +=1)
		{
			COUT(temp);
			pipe_water.set(float(temp));
			pipe_water.display();
		}

	}

	{

		HEATING_PIPE_WATER pipe_water;
		for(int temp = 6; temp >= -1; --temp)
		{
			COUT(temp);
			pipe_water.set(float(temp));
			pipe_water.display();
		}
	}
	{
		HEATING_PIPE_WATER pipe_water;

		for(int temp = 0; temp <=6; temp +=1)
		{
			COUT(temp);
			pipe_water.set(float(temp));
			pipe_water.display();
		}

	}

	{

		HEATING_PIPE_WATER pipe_water;
		for(int temp = 5; temp >= -1; --temp)
		{
			COUT(temp);
			pipe_water.set(float(temp));
			pipe_water.display();
		}
	}



}

int main()
{

	test_cases();
	return 0;
}

