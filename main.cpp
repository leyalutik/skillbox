#include<string>
#include<iostream>
#include<vector>
#include<ctime>
#include<cstdlib>
#include<fstream>

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

	void reset_data_to_zero(){armor=0;health=0;damage=0;name="";}
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
			std::getline(std::cin, name, '\n');

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
	void display(){}/* 
OUTPUT in QT  a map with colored ceal with coordinates x y created in QT
			   { load the picture as font for map;
			   for(int i=0; i<size.x; ++i)
	for(int j=0;j<SIZE.y;++j)		   {
			   display(ceils[i][j]) ; QT function 
			   
			   }
			   }
			   */
	//ceils[][] = 0 //no persons bleu
	//ceils[][] = 1 // is hero green
	//ceils[][] = 2 // is enemy red
	//ceils[][] = 3 // is dead  black
	std::vector<std::vector<int32_t>> ceils;
	MAP(): ceils(SIZE.x, std::vector<int32_t>(SIZE.y,0)) {}

};

bool is_equal(const Vector& v1, const Vector& v2) {return (v1.x==v2.x && v1.y == v2.y);}
bool fight(Person& p1,Person& p2)
{
	std::cout << p1.name << " took a damage: - " << p1.damage << std::endl;
	p1.armor -=p2.damage;
	if(p1.armor <0)
	{
		p1.health += p1.armor;
		p1.armor = 0;
	}

	std::cout << p2.name << " took a damage: - " << p2.damage << std::endl;
	p2.armor -=p1.damage;
	if(p2.armor <0)
	{
		p2.health += p2.armor;
		p2.armor = 0;
	}


}
//-----------------------------------

int main()
{
	std::srand(std::time(nullptr));
	GAME game;
	std::vector<Person> enemies(game.ENEMY_NUMBER);
	MAP Map;
	Map.SIZE = game.MAP_SIZE;

	int32_t COUNTER_DEAD_ENEMIES = 0;

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

	Move hero_move ;
	hero_move.LIMIT.x=game.MAP_SIZE.x;
	hero_move.LIMIT.y=game.MAP_SIZE.y;
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

	Map.display();
	auto load = [&]()
	{
		std::ifstream ifs(game.save_file.c_str(), std::ios_base::binary | std::ios_base::in);

		if(!ifs.is_open())
		{
			std::cout <<"Can't be opened.'n";
		}


		ifs.read(reinterpret_cast<char*>(&COUNTER_DEAD_ENEMIES),sizeof(COUNTER_DEAD_ENEMIES));
		int32_t length = hero.name.size();
		ifs.read(reinterpret_cast<char*>(&length),sizeof(length));
		char * buffer = new char[length];
		ifs.read(buffer,length);
		hero.name.assign(buffer,length);
		delete[] buffer;
		ifs.read(reinterpret_cast<char*>(&hero.armor),sizeof(hero.armor));
		ifs.read(reinterpret_cast<char*>(&hero.health),sizeof(hero.health));

		ifs.read(reinterpret_cast<char*>(&hero.damage),sizeof(hero.damage));

		for(size_t i=0; i<game.ENEMY_NUMBER; ++i)
		{

			int32_t length;
			ifs.read(reinterpret_cast<char*>(&length),sizeof(length));

			char * buffer = new char[length];
			ifs.read(buffer,length);
			enemies[i].name.assign(buffer,length);
			delete[] buffer;
			ifs.read(reinterpret_cast<char*>(&hero.armor),sizeof(enemies[i].armor));
			ifs.read(reinterpret_cast<char*>(&enemies[i].health),sizeof(enemies[i].health));

			ifs.read(reinterpret_cast<char*>(&enemies[i].damage),sizeof(enemies[i].damage));


		}


		ifs.read(reinterpret_cast<char*>(&hero_move.current.x),sizeof(hero_move.current.x));
		ifs.read(reinterpret_cast<char*>(&hero_move.current.y),sizeof(hero_move.current.y));

		ifs.read(reinterpret_cast<char*>(&hero_move.LIMIT.x),sizeof(hero_move.LIMIT.x));
		ifs.read(reinterpret_cast<char*>(&hero_move.LIMIT.y),sizeof(hero_move.LIMIT.y));


		for(size_t i=0; i<game.ENEMY_NUMBER; ++i)
		{

			ifs.read(reinterpret_cast<char*>(&enemy_moves[i].current.x),sizeof(enemy_moves[i].current.x));
			ifs.read(reinterpret_cast<char*>(&enemy_moves[i].current.y),sizeof(enemy_moves[i].current.y));

			ifs.read(reinterpret_cast<char*>(&enemy_moves[i].LIMIT.x),sizeof(enemy_moves[i].LIMIT.x));
			ifs.read(reinterpret_cast<char*>(&enemy_moves[i].LIMIT.y),sizeof(enemy_moves[i].LIMIT.y));

		}

		for(size_t i=0 ; i<Map.ceils.size();++i)
		{
			for(size_t j=0; j<Map.ceils[i].size(); ++j)
			{

				ifs.read(reinterpret_cast<char*>(&Map.ceils[i][j]),sizeof(Map.ceils[i][j]));
			}


		}


		ifs.close();
		return 1;	
	};


	auto save = [&]()
	{
		std::ofstream ofs(game.save_file.c_str(), std::ios_base::binary | std::ios_base::out);

		if(!ofs.is_open())
		{
			std::cout <<"Can't be opened.'n";
		}


		ofs.write(reinterpret_cast<char*>(&COUNTER_DEAD_ENEMIES),sizeof(COUNTER_DEAD_ENEMIES));
		int32_t length = hero.name.size();
		ofs.write(reinterpret_cast<char*>(&length),sizeof(length));
		ofs.write(hero.name.c_str(),length);

		ofs.write(reinterpret_cast<char*>(&hero.armor),sizeof(hero.armor));
		ofs.write(reinterpret_cast<char*>(&hero.health),sizeof(hero.health));

		ofs.write(reinterpret_cast<char*>(&hero.damage),sizeof(hero.damage));

		for(size_t i=0; i<game.ENEMY_NUMBER; ++i)
		{

			int32_t length = enemies[i].name.size();
			ofs.write(reinterpret_cast<char*>(&length),sizeof(length));
			ofs.write(enemies[i].name.c_str(),length);

			ofs.write(reinterpret_cast<char*>(&hero.armor),sizeof(enemies[i].armor));
			ofs.write(reinterpret_cast<char*>(&enemies[i].health),sizeof(enemies[i].health));

			ofs.write(reinterpret_cast<char*>(&enemies[i].damage),sizeof(enemies[i].damage));


		}


		ofs.write(reinterpret_cast<char*>(&hero_move.current.x),sizeof(hero_move.current.x));
		ofs.write(reinterpret_cast<char*>(&hero_move.current.y),sizeof(hero_move.current.y));

		ofs.write(reinterpret_cast<char*>(&hero_move.LIMIT.x),sizeof(hero_move.LIMIT.x));
		ofs.write(reinterpret_cast<char*>(&hero_move.LIMIT.y),sizeof(hero_move.LIMIT.y));


		for(size_t i=0; i<game.ENEMY_NUMBER; ++i)
		{

			ofs.write(reinterpret_cast<char*>(&enemy_moves[i].current.x),sizeof(enemy_moves[i].current.x));
			ofs.write(reinterpret_cast<char*>(&enemy_moves[i].current.y),sizeof(enemy_moves[i].current.y));

			ofs.write(reinterpret_cast<char*>(&enemy_moves[i].LIMIT.x),sizeof(enemy_moves[i].LIMIT.x));
			ofs.write(reinterpret_cast<char*>(&enemy_moves[i].LIMIT.y),sizeof(enemy_moves[i].LIMIT.y));

		}

		for(size_t i=0 ; i<Map.ceils.size();++i)
		{
			for(size_t j=0; j<Map.ceils[i].size(); ++j)
			{

				ofs.write(reinterpret_cast<char*>(&Map.ceils[i][j]),sizeof(Map.ceils[i][j]));
			}


		}


		ofs.close();
		return 1;	
	};


Map.display();
hero.display();
for(size_t i=0; i<enemies.size();++i)
{
	if(!enemies[i].is_dead())
	{
	enemies[i].display();
	}
}


	int32_t LIMIT = -1000000000;
	while(LIMIT < 1000000000)
	{
		++LIMIT;

		std::string command;
		std::cout << "command:\n";
		std::cin >> command;
		if(command=="save")
		{
			auto p = save();
		}
		else if (command == "load")
		{
			auto p = load();
		}
		else if(command == "L")
		{
			hero_move.left();
		}
		else if(command == "R")
		{
			hero_move.right();
		}
		else if(command == "U")
		{
			hero_move.up();
		}
		else if(command == "D")
		{
			hero_move.down();
		}
		else
		{
			std::cout << "Unknown command.\n";
			std::cin.clear();
			std::cin.ignore(1000,'\n');

		}

		for(size_t i=0; i<enemies.size(); ++i)
		{
			if(!enemies[i].is_dead())
			{ if(is_equal(hero_move.next, enemy_moves[i].current))
				{
					fight(hero,enemies[i]);
Map.display();
hero.display();
for(size_t i=0; i<enemies.size();++i)
{
	if(!enemies[i].is_dead())
	{
	enemies[i].display();
	}
}


	Map.ceils[hero_move.current.x][hero_move.current.y] = 0;//return to blue color
					hero_move.current.x=hero_move.next.x;
					hero_move.current.y=hero_move.next.y;
	Map.ceils[hero_move.current.x][hero_move.current.y] = 1; //create a green
				}



				if(hero.is_dead())
				{
					std::cout << "You lose.\n";
	Map.ceils[hero_move.current.x][hero_move.current.y] = 3;
Map.display();
hero.display();
for(size_t i=0; i<enemies.size();++i)
{
	if(!enemies[i].is_dead())
	{
	enemies[i].display();
	}
}

				hero.reset_data_to_zero();
					for(size_t i=0; i<enemies.size(); ++i)
					{
						enemies[i].reset_data_to_zero();
					}

					auto p = save();
					return 1;
				}
				if(enemies[i].is_dead())
				{
					++COUNTER_DEAD_ENEMIES;
Map.ceils[enemy_moves[i].current.x][enemy_moves[i].current.y] = 3;
Map.display();
hero.display();
for(size_t i=0; i<enemies.size();++i)
{
	if(!enemies[i].is_dead())
	{
	enemies[i].display();
	}
}



if(COUNTER_DEAD_ENEMIES == enemies.size())
					{
						std::cout << "You win.\n";
						hero.reset_data_to_zero();


						for(size_t i=0; i<enemies.size(); ++i)
						{
							enemies[i].reset_data_to_zero();
							return 1;
						}

						auto p = save();
					}
				}
			}
		}

// create enemy direction


		for(size_t i=0; i<enemies.size(); ++i)
		{

if(!enemies[i].is_dead())
{
	int32_t number;
	number = std::rand()%4;

	switch(number)
	{
		case 0: enemy_moves[i].left();
			break;
		case 1: enemy_moves[i].right();
			break;
		case 2: enemy_moves[i].up();
			break;
		case 3: enemy_moves[i].down();
			break;
		default:
			break;
	}

bool stop = 0;
for(size_t j=0; j<enemies.size(); ++j)
{
	if(j != i  && !enemies[j].is_dead())
	{
		if(is_equal(enemy_moves[i].next,enemy_moves[j].current))
				{
stop=1;
				}

	}

}
if(!stop)
{

Map.ceils[enemy_moves[i].current.x][enemy_moves[i].current.y] = 0;//return to blue, ceil is empty
	enemy_moves[i].current.x=enemy_moves[i].next.x;
	enemy_moves[i].current.y=enemy_moves[i].next.y;
Map.ceils[enemy_moves[i].current.x][enemy_moves[i].current.y] = 2;//create a red ceil, hear a enemy
}
	}

Map.display();
hero.display();
for(size_t i=0; i<enemies.size();++i)
{
	if(!enemies[i].is_dead())
	{
	enemies[i].display();
	}
}


}

		}




	return 0;
}
