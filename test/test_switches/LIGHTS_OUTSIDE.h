#include<iostream>
#include<string>
#include<sstream>


struct  MOVEMENT
{
	explicit MOVEMENT(const bool value)
	{
		yes = value;
	}
	bool	yes = 1;

};

struct LIGHTS_OUTSIDE
{
	const int TIME_LOWER_BOUNDARY = 16;//hours
	const int TIME_UPPER_BOUNDARY = 5;//hours
	const int TIME_START = 0;
	const int TIME_END = 24;

	LIGHTS_OUTSIDE()
	{

	}
	LIGHTS_OUTSIDE(const int hour, const MOVEMENT& move_new)
	{
		TIME = hour % 24;
		move = move_new;
		evaluate();
	}

	void set(const int hour, const MOVEMENT& move_new)
	{
		TIME = hour % 24;
		move=move_new;
		evaluate();
	}


	void evaluate()
	{
		bool switch_ON_new;
		if(move.yes)
		{
			if((TIME > TIME_LOWER_BOUNDARY && 
						TIME < TIME_END)
					||
					(TIME >= TIME_START && TIME < TIME_UPPER_BOUNDARY)
			  )
			{
				switch_ON_new = true;
			}
			else
			{
				switch_ON_new = false;
			}

		}
		else
		{
			switch_ON_new = false;
		}
		is_switch_changed = switch_ON ^ switch_ON_new;
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
			std::string light_on = {switch_ON ? "ON" : "OFF"};
			std::cout << "LIGHTS OUTSIDE: " << light_on << "\n";
		}
	}

	private:
	bool switch_ON;
	int TIME;
	bool is_switch_changed;
	bool first_switch = true;
	MOVEMENT move{false};
	std::string switch_state()
	{
		return {switch_ON ? "ON" : "OFF"};
	}




};

