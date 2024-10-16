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

};



struct GAME
{
	std::string save_file = "init.bin";

	Vector MAP_SIZE{20,20};

	const int32_t ENEMY_NUMBER = 5;


};

struct Move
{
	Vector current{0,0};
	Vector next{0,0};

	Vector LIMIT{0,0};


	void right(){if( (next.x+1) < LIMIT.x)
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

	void left(){if( (next.x-1) >= 0)
		{
			next.x = current.x-1;
			next.y = current.y;
		}
		else
		{
			next.x = current.x;
			next.y = current.y;

		}

	}
	void up() {if( (next.y+1) < LIMIT.y)
		{
			next.x = current.x;
			next.y = current.y+1;
		}
		else
		{
			next.x = current.x;
			next.y = current.y;

		}

	}



	void down() {if( (next.y-1) >= 0 )
		{
			next.x = current.x;
			next.y = current.y-1;
		}
		else
		{
			next.x = current.x;
			next.y = current.y;

		}

	}

	void display() const
	{
		std::cout << "x = " << current.x << "\n";
		std::cout << "y = " << current.y << "\n";

	}
};

struct Person
{
	const int32_t	VITALITY_MAX = 150;
	const int32_t	VITALITY_MIN = 50;

	const int32_t	ARMOR_MAX = 50;
	const int32_t	ARMOR_MIN = 0;

	const int32_t	DAMAGE_MIN = 0;
	const int32_t	DAMAGE_MAX = 30;

	int32_t	armor = 0;
	int32_t	health = 0;
	int32_t	damage = 0;
	std::string name = "";

	void reset_data_to_zero(){armor=0;health=0;damage=0;name="";}
	bool check_data(){
		if(health > VITALITY_MAX || health < VITALITY_MIN)
		{
			return 0;
		}
		if(armor > ARMOR_MAX || armor < ARMOR_MIN)
		{
			return 0;
		}

		if(damage > DAMAGE_MAX || damage < DAMAGE_MIN )
		{
			return 0;
		}
		if(name.size() == 0)
		{
			return 0;
		}
		return 1;
	}

	bool is_dead() const {return health == 0;}
	void display() const
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

			std::cout << "health [" << VITALITY_MIN << "," << VITALITY_MAX << "]:\n";
			std::cin >> health;


			std::cout << "armor [" << ARMOR_MIN << "," << ARMOR_MAX << "]:\n";
			std::cin >> armor;


			std::cout << "damage [" << DAMAGE_MIN << "," << DAMAGE_MAX << "]:\n";
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
	void display() const {}/* 
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
	void change_ceil(int x, int y, int color)
	{
		if (check_data(x, y, color))
		{
			ceils[x][y] = color;
		}
	}
	bool check_data(int x, int y, int color) const {
		return x >= 0 && x < SIZE.x && y >= 0 && y < SIZE.y && color >= 0 && color <= 3;
	}

	void reset_data_to_zero()
	{
		for(size_t i=0; i<ceils.size(); ++i)
		{
			for(size_t j=0; j<ceils[i].size(); ++j)
			{
				ceils[i][j] = 0;
			}

		}
	}
	std::vector<std::vector<int32_t>> ceils;
	MAP(): ceils(SIZE.x, std::vector<int32_t>(SIZE.y,0)) {}

};


void display_game_enemies(const std::vector<Person> enemies, const std::vector<Move> enemy_moves);
void display_game_hero(const Person& hero,const Move& hero_move);
bool fight(Person& p1,Person& p2);
bool is_equal(const Vector& v1, const Vector& v2);

bool load_game(const std::string& filename, 
		Person& hero, 
		std::vector<Person>& enemies, 
		Move& hero_move, 
		std::vector<Move>& enemy_moves, 
		int32_t& COUNTER_DEAD_ENEMIES, 
		MAP& Map);

bool save_game(const std::string& filename, 
		const Person& hero, 
		const std::vector<Person>& enemies, 
		const Move& hero_move, 
		const std::vector<Move>& enemy_moves, 
		const int32_t& COUNTER_DEAD_ENEMIES, 
		const MAP& Map);
//-----------------------------------

int main()
{
	std::srand(std::time(nullptr));
	int32_t LIMIT_x = 20;
	int32_t LIMIT_y = 20;
	int32_t ENEMY_NUMBER=5;
	std::string save_file;

	int32_t COUNTER_DEAD_ENEMIES = 0;

	std::vector<Person> enemies(ENEMY_NUMBER);
	std::vector<Move> enemy_moves(enemies.size(), {LIMIT_x,LIMIT_y});

	MAP Map;
	Map.SIZE.x = LIMIT_x;
	Map.SIZE.y = LIMIT_y;
	// create random start coordinate
	for(size_t i=0; i< enemies.size(); ++i)
	{
		enemies[i].health = enemies[i].VITALITY_MIN + rand()%( enemies[i].VITALITY_MAX-enemies[i].VITALITY_MIN)+1;
		enemies[i].damage = enemies[i].DAMAGE_MIN + rand()%(enemies[i].DAMAGE_MAX-enemies[i].DAMAGE_MIN) + 1;
		enemies[i].armor = enemies[i].ARMOR_MIN + rand()%(enemies[i].ARMOR_MAX-enemies[i].ARMOR_MIN) +1;
		enemies[i].name = "Enemy #"+std::to_string(i);
		enemies[i].display();
		while(true)
		{
			int32_t x = std::rand()%LIMIT_x;
			int32_t y = std::rand()%LIMIT_y;

			if(!Map.ceils[x][y])
			{
				Map.change_ceil(x,y,2);//enemy color	
				enemy_moves[i].current.x=x;
				enemy_moves[i].current.y=y;

				break;
			}
		}
	}

	display_game_enemies(enemies,enemy_moves);
	Map.display();
	//create hero data

	Person hero;
	hero.write_data();

	int32_t x = std::rand()%LIMIT_x;
	int32_t y = std::rand()%LIMIT_y;


	Map.change_ceil(x,y,1);//hero color	

	Move hero_move{LIMIT_x,LIMIT_y} ;
	hero_move.current.x = x;
	hero_move.current.y = y;

	display_game_hero(hero,hero_move);
	Map.display();



	int32_t LIMIT = -1000000000;
	while(LIMIT < 1000000000)
	{
		++LIMIT;

		std::string command;
		std::cout << "command:\n";
		std::cin >> command;
		if(command.find("save") != std::string::npos)
		{
			if(save_game(save_file.c_str(), hero, enemies, hero_move, enemy_moves, COUNTER_DEAD_ENEMIES, Map))
			{

				std::cout << "Game is saved.\n";
			}
			else
			{

				std::cout << "Game is not saved.\n";
			}


			continue;
		}

		else if(command.find("load") != std::string::npos)
		{
			if(load_game(save_file.c_str(), hero, enemies, hero_move, enemy_moves, COUNTER_DEAD_ENEMIES, Map))
			{

				std::cout << "Game is loaded.\n";
			}
			else
			{

				std::cout << "Game is not loaded.\n";
			}

			continue;

		}
		else if(command.find("L") != std::string::npos)
		{
			hero_move.left();
		}
		else if(command.find("R") != std::string::npos)
		{
			hero_move.right();
		}
		else if(command.find("U") != std::string::npos)
		{
			hero_move.up();
		}
		else if(command.find("D") != std::string::npos)
		{
			hero_move.down();
		}
		else if(command.find("exit") != std::string::npos)
		{
			exit(0);
		}


		else
		{
			std::cout << "Unknown command.\n";
			std::cin.clear();
			std::cin.ignore(1000,'\n');
			continue;
		}

		Map.change_ceil(hero_move.current.x,hero_move.current.y, 0);//return to blue color
		hero_move.current.x=hero_move.next.x;
		hero_move.current.y=hero_move.next.y;
		Map.change_ceil(hero_move.current.x,hero_move.current.y,1); //create a green

		display_game_hero(hero,hero_move);
		Map.display();




		for(size_t i=0; i<enemies.size(); ++i)
		{
			if(!enemies[i].is_dead())
			{
				if(is_equal(hero_move.next, enemy_moves[i].current))
				{
					fight(hero,enemies[i]);

					display_game_hero(hero,hero_move);
					display_game_enemies(enemies,enemy_moves);


					if(hero.is_dead())
					{
						std::cout << "You lose.\n";
						Map.change_ceil(hero_move.current.x,hero_move.current.y,3); //color black for dead

						Map.display();
						hero.reset_data_to_zero();
						for(size_t i=0; i<enemies.size(); ++i)
						{
							enemies[i].reset_data_to_zero();
						}
						Map.reset_data_to_zero();
						save_game(save_file.c_str(), hero, enemies, hero_move, enemy_moves, COUNTER_DEAD_ENEMIES, Map);
						return 1;
					}
					if(enemies[i].is_dead())								{
						++COUNTER_DEAD_ENEMIES;
						Map.change_ceil(enemy_moves[i].current.x, enemy_moves[i].current.y, 3); //black color

						Map.display();

						if(COUNTER_DEAD_ENEMIES == enemies.size())
						{
							std::cout << "You win.\n";
							hero.reset_data_to_zero();


							for(size_t i=0; i<enemies.size(); ++i)
							{
								enemies[i].reset_data_to_zero();
								return 1;
							}

							Map.reset_data_to_zero();
							save_game(save_file.c_str(), hero, enemies, hero_move, enemy_moves, COUNTER_DEAD_ENEMIES, Map);
						}
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

					Map.change_ceil(enemy_moves[i].current.x,enemy_moves[i].current.y,0);//return to blue, ceil is empty


					enemy_moves[i].current.x=enemy_moves[i].next.x;
					enemy_moves[i].current.y=enemy_moves[i].next.y;
					Map.change_ceil(enemy_moves[i].current.x, enemy_moves[i].current.y,2);//create a red ceil, hear a enemy

				}
			}


			display_game_enemies(enemies,enemy_moves);
		}

	}




	return 0;
}


//-----------------------------------------------------------


bool is_equal(const Vector& v1, const Vector& v2) 
{
	return (v1.x==v2.x && v1.y == v2.y);
}


bool fight(Person& p1,Person& p2)
{
	std::cout << "FIGHT:\n";
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

void display_game_hero(const Person& hero,const Move& hero_move)
{
	std::cout << "--------Hero---------\n";
	hero.display();
	hero_move.display();
	std::cout << "---------------------\n";
}

void display_game_enemies(const std::vector<Person> enemies, const std::vector<Move> enemy_moves)
{
	std::cout << "-------Enemies-------\n";
	for(size_t i=0; i<enemies.size();++i)
	{
		if(!enemies[i].is_dead())
		{
			enemies[i].display();
			enemy_moves[i].display();
		}
	}

	std::cout << "---------------------\n";

}


bool load_game(const std::string& filename, 
		Person& hero, 
		std::vector<Person>& enemies, 
		Move& hero_move, 
		std::vector<Move>& enemy_moves, 
		int32_t& COUNTER_DEAD_ENEMIES, 
		MAP& Map)
{
	std::ifstream ifs(filename, std::ios_base::binary | std::ios_base::in);

	if (!ifs.is_open())
	{
		std::cout << "Can't be opened." << std::endl;
		return false;
	}

	ifs.read(reinterpret_cast<char*>(&COUNTER_DEAD_ENEMIES), sizeof(COUNTER_DEAD_ENEMIES));

	// Загрузка имени героя
	int32_t length;
	ifs.read(reinterpret_cast<char*>(&length), sizeof(length));
	char* buffer = new char[length];
	ifs.read(buffer, length);
	hero.name.assign(buffer, length);
	delete[] buffer;

	// Загрузка характеристик героя
	ifs.read(reinterpret_cast<char*>(&hero.armor), sizeof(hero.armor));
	ifs.read(reinterpret_cast<char*>(&hero.health), sizeof(hero.health));
	ifs.read(reinterpret_cast<char*>(&hero.damage), sizeof(hero.damage));

	// Загрузка данных врагов
	for (size_t i = 0; i < enemies.size(); ++i)
	{
		ifs.read(reinterpret_cast<char*>(&length), sizeof(length));
		buffer = new char[length];
		ifs.read(buffer, length);
		enemies[i].name.assign(buffer, length);
		delete[] buffer;

		ifs.read(reinterpret_cast<char*>(&enemies[i].armor), sizeof(enemies[i].armor));
		ifs.read(reinterpret_cast<char*>(&enemies[i].health), sizeof(enemies[i].health));
		ifs.read(reinterpret_cast<char*>(&enemies[i].damage), sizeof(enemies[i].damage));
	}

	// Загрузка движения героя
	ifs.read(reinterpret_cast<char*>(&hero_move.current.x), sizeof(hero_move.current.x));
	ifs.read(reinterpret_cast<char*>(&hero_move.current.y), sizeof(hero_move.current.y));
	ifs.read(reinterpret_cast<char*>(&hero_move.LIMIT.x), sizeof(hero_move.LIMIT.x));
	ifs.read(reinterpret_cast<char*>(&hero_move.LIMIT.y), sizeof(hero_move.LIMIT.y));

	// Загрузка движения врагов
	for (size_t i = 0; i < enemy_moves.size(); ++i)
	{
		ifs.read(reinterpret_cast<char*>(&enemy_moves[i].current.x), sizeof(enemy_moves[i].current.x));
		ifs.read(reinterpret_cast<char*>(&enemy_moves[i].current.y), sizeof(enemy_moves[i].current.y));
		ifs.read(reinterpret_cast<char*>(&enemy_moves[i].LIMIT.x), sizeof(enemy_moves[i].LIMIT.x));
		ifs.read(reinterpret_cast<char*>(&enemy_moves[i].LIMIT.y), sizeof(enemy_moves[i].LIMIT.y));
	}

	// Загрузка данных клеток карты
	for (size_t i = 0; i < Map.ceils.size(); ++i)
	{
		for (size_t j = 0; j < Map.ceils[i].size(); ++j)
		{
			ifs.read(reinterpret_cast<char*>(&Map.ceils[i][j]), sizeof(Map.ceils[i][j]));
		}
	}

	ifs.close();
	std::cout << "Game loaded successfully." << std::endl;
	return true;
}

bool save_game(const std::string& filename, 
		const Person& hero, 
		const std::vector<Person>& enemies, 
		const Move& hero_move, 
		const std::vector<Move>& enemy_moves, 
		const int32_t& COUNTER_DEAD_ENEMIES, 
		const MAP& Map)
{
	std::ofstream ofs(filename, std::ios_base::binary | std::ios_base::out);

	if (!ofs.is_open())
	{
		std::cout << "Can't be opened." << std::endl;
		return false;
	}

	ofs.write(reinterpret_cast<const char*>(&COUNTER_DEAD_ENEMIES), sizeof(COUNTER_DEAD_ENEMIES));

	// Сохранение имени героя
	int32_t length = hero.name.size();
	ofs.write(reinterpret_cast<const char*>(&length), sizeof(length));
	ofs.write(hero.name.c_str(), length);

	// Сохранение характеристик героя
	ofs.write(reinterpret_cast<const char*>(&hero.armor), sizeof(hero.armor));
	ofs.write(reinterpret_cast<const char*>(&hero.health), sizeof(hero.health));
	ofs.write(reinterpret_cast<const char*>(&hero.damage), sizeof(hero.damage));

	// Сохранение данных врагов
	for (size_t i = 0; i < enemies.size(); ++i)
	{
		length = enemies[i].name.size();
		ofs.write(reinterpret_cast<const char*>(&length), sizeof(length));
		ofs.write(enemies[i].name.c_str(), length);
		ofs.write(reinterpret_cast<const char*>(&enemies[i].armor), sizeof(enemies[i].armor));
		ofs.write(reinterpret_cast<const char*>(&enemies[i].health), sizeof(enemies[i].health));
		ofs.write(reinterpret_cast<const char*>(&enemies[i].damage), sizeof(enemies[i].damage));
	}

	// Сохранение движения героя
	ofs.write(reinterpret_cast<const char*>(&hero_move.current.x), sizeof(hero_move.current.x));
	ofs.write(reinterpret_cast<const char*>(&hero_move.current.y), sizeof(hero_move.current.y));
	ofs.write(reinterpret_cast<const char*>(&hero_move.LIMIT.x), sizeof(hero_move.LIMIT.x));
	ofs.write(reinterpret_cast<const char*>(&hero_move.LIMIT.y), sizeof(hero_move.LIMIT.y));

	// Сохранение движения врагов
	for (size_t i = 0; i < enemy_moves.size(); ++i)
	{
		ofs.write(reinterpret_cast<const char*>(&enemy_moves[i].current.x), sizeof(enemy_moves[i].current.x));
		ofs.write(reinterpret_cast<const char*>(&enemy_moves[i].current.y), sizeof(enemy_moves[i].current.y));
		ofs.write(reinterpret_cast<const char*>(&enemy_moves[i].LIMIT.x), sizeof(enemy_moves[i].LIMIT.x));
		ofs.write(reinterpret_cast<const char*>(&enemy_moves[i].LIMIT.y), sizeof(enemy_moves[i].LIMIT.y));
	}

	// Сохранение данных клеток карты
	for (size_t i = 0; i < Map.ceils.size(); ++i)
	{
		for (size_t j = 0; j < Map.ceils[i].size(); ++j)
		{
			ofs.write(reinterpret_cast<const char*>(&Map.ceils[i][j]), sizeof(Map.ceils[i][j]));
		}
	}

	ofs.close();
	std::cout << "Game saved successfully." << std::endl;
	return true;
}


