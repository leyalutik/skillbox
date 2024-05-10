#include<iostream>
#include<string>
#include<sstream>
#include<bitset>

/*

void switch(SWITCHES);
void turn_ON(SWITCHES);
void turn_OFF(SWITCHES);
void all_turn_ON(SWITCHES);
void all_turn_OFF(SWITCHES);
bool switch_state(SWITCHES);


*/

enum class SWITCHES
{

	LIGHTS_INSIDE = 1,
	LIGHTS_OUTSIDE = 2


};

//int convert(SWITCHES sw)


//-----------------------------------------
int main()
{


	int switches_state = 1;

	if(switches_state & static_cast<int>(SWITCHES::LIGHTS_OUTSIDE))
	{
		std::cout << "LIGHTS_OUTSIDE is ONN\n";
	}


	return 0;
}

//-----------------------------------------


