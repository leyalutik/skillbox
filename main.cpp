#include<string>
#include<iostream>
#include<vector>
#include<ctime>
#include<cstdlib>

struct Vector
{
	int32_t x=0;
	int32_t y=0;

	void display() { // in QT in map display in special color coordinate
	}
};



struct GAME
{
	const int32_t	VITALITY_MAX = 150;
	const int32_t	VITALITY_MIN = 50;

	const int32_t	ARMOR_MAX = 50;
	const int32_t	ARMOR_MIN = 0;

	const int32_t	DAMAGE_MIN = 0;
	const int32_t	DAMAGE_MAX = 30;

	std::string save_file = "init.bin";

	Vector MAP_SIZE{20,20};

	const int32_t ENEMY_NUMBER = 5;


};

struct Move
{
	Vector current{0,0};
	Vector next{0,0};

	Vector LIMIT{0,0};

	void right(){if( (next.x+1) <= LIMIT.x)
		{
			next.x = current.x+1;
			next.y = current.y;
		}
		else
		{
			next.x = current.x;
			next.y = current.y;

		}

	}

	void left(){ //to fill
	}

	void up() { //to fill
	}

	void down() { //to fill
	}
};

struct Person
{
	int32_t	armor = 0;
	int32_t	health = 0;
	int32_t	damage = 0;
	std::string name = "";

	bool check_data(){return 1; //check the Person atributes in boundarires DAMAGE_MIN and so on
	}
	bool is_dead(){return health == 0;}
	void display()
	{
		std::cout << name << ":\n";
		std::cout << "\thealth = " << health << "\n";
		std::cout << "\tarmor = " << armor << "\n";
		std::cout << "\tdamage = " << damage << "\n";
	}

	void write_data()
	{
		int32_t LIMIT = 0;
		while(LIMIT <1000)
		{
			++LIMIT;
			std::cout << "name:\n";
			std::cin >> name;

			std::cout << "health:\n";
			std::cin >> health;

			std::cout << "armor:\n";
			std::cin >> armor;

			std::cout << "damage:\n";
			std::cin >> damage;

			if(check_data() && std::cin)
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
		if(LIMIT == 1000)
		{
			std::cout << "Error input.\n";
			exit(1);
		}
	}
};

//for QT
/*
 * create class
 with Map with size [0,MAP_SIZE.x]x[0,MAP_SIZE.y]

 this Map has  font with loaded  given picture

 also Brushed_XY (Vector xy, COLOR color){ the coordinate brush(Vector xy, color)


 void display() {display map with given font and on map brush the coordinate xy with color 
 */

struct Ceil
{
	//	Color color=blue;
	int32_t color=0; //1 - Hero 2 - Enemy
			 //	brush(Color color1){color = color1;}
};



struct MAP
{
	Vector SIZE{20,20};

	std::string path_to_picture;
	void display();/* { load the picture as font for map;
			  for(int i=0; i<size.x; ++i)
			  {
			  ceils.display();
			  }
			  }
			  */
//ceils[][] = 0 //no persons
//ceils[][] = 1 // is hero
//ceils[][] = 2 // is enemy
	std::vector<std::vector<int32_t>> ceils(this->SIZE.x, std::vector<int32_t>(SIZE.y,0));

};

int main()
{

	std::srand(std::time(nullptr));
	GAME game;
	std::vector<Person> enemies(game.ENEMY_NUMBER);
	MAP Map{.SIZE{game.MAP_SIZE}};


	for(size_t i=0; i< enemies.size(); ++i)
	{
		enemies[i].health = game.VITALITY_MIN + rand()%( game.VITALITY_MAX-game.VITALITY_MIN)+1;
		enemies[i].damage = game.DAMAGE_MIN + rand()%(game.DAMAGE_MAX-game.DAMAGE_MIN) + 1;
		enemies[i].armor = game.ARMOR_MIN + rand()%(game.ARMOR_MAX-game.ARMOR_MIN) +1;
		enemies[i].name = "Enemy #"+std::to_string(i);
		enemies[i].display();
	}

	Person hero;
	hero.write_data();

	std::vector<Move> enemy_moves(enemies.size());

	Move hero_move (.LIMIT.x=game.MAP_SIZE.x, .LIMIT.y=game.MAP_SIZE.y);;
	//create distincts coordinates for enemies adn hero
	for(size_t i=0; i<enemies.size()+1; ++i)
	{
		while(true)
		{
			int32_t x = std::rand()%game.MAP_SIZE.x;
			int32_t y = std::rand()%game.MAP_SIZE.y;

			if(!Map.ceils[x][y])
			{
				if( i != enemies.size() )
				{
					Map.ceils[x][y] = 2;//enemy color	
					enemy_moves[i].current.x=x;
					enemy_moves[i].current.y=y;
				}
				else
				{

					Map.ceils[x][y] = 1;//hero color	
					hero_move.current.x = x;
					hero_move.current.y = y;
				}
				break;
			}
		}
	}






	return 0;
}
