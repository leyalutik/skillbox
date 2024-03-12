#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>


class PLAYER
{
	public:
	PLAYER(){}
	void display_game_boards();
	void display_dislocation_ship();
        void locate_ships();
	void take_a_hit(const int x, const int y);
        
	bool check(const int x, const int y);
	void create_a_fire(int& x,int& y);              
        void mark_a_grid(const int x,const int y,const char attack_result);
	void display_attack_result();
	char get_attack_result();

	int get_N_ships();

	     


	private:
	static const int SIZE_BOARD = 10;
	int N_ships = 10; // general number of ships
	int list[10] = {1,1,1,1,2,2,2,3,3,4}; //number of distinct grid ships
	char attack_result = '.'; //unhit
	int location_ship[SIZE_BOARD][SIZE_BOARD] =  // 1,10 -0 -1 -2  ships| untouched grids| hit grids | hit the s

	{
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0}
	};

	char game_board[SIZE_BOARD][SIZE_BOARD] = 
	{// . x  0 #  unhit | hit | miss | sink
		{'.','.','.','.','.','.','.','.','.','.'},
		{'.','.','.','.','.','.','.','.','.','.'},
		{'.','.','.','.','.','.','.','.','.','.'},
		{'.','.','.','.','.','.','.','.','.','.'},
		{'.','.','.','.','.','.','.','.','.','.'},
		{'.','.','.','.','.','.','.','.','.','.'},
		{'.','.','.','.','.','.','.','.','.','.'},
		{'.','.','.','.','.','.','.','.','.','.'},
		{'.','.','.','.','.','.','.','.','.','.'},
		{'.','.','.','.','.','.','.','.','.','.'}
	};


		


};

bool check_continuous(const int N_grids, const int X[4], const int  Y[4]);
void change(int& turn);
void input(int& x, int& y);
//--------------------------------------------

int main()
{

	PLAYER player[2];
        
	player[0].locate_ships();
	player[1].locate_ships();

	int turn = 0;
	int i = 0;
	std::cout << std::internal << std::setw(30) << "\t\t\tSTART OF THE GAME !!!\n";

	while(i < 101)
	{
		++i;
		std::cout << "\n";
		std::cout << "\t\t------------------------------\n";
		std::cout << "\t\t\tTURN OF PLAYER " << turn+1 << "\n";
		std::cout << "\t\t------------------------------\n";
		player[turn].display_game_boards();
                
		int x,y;
		std::cout << "\n";

		std::cin.ignore(32767,'\n');
		player[turn].create_a_fire(x,y);              //Player1
		std::cin.clear();
		std::cin.ignore(32767,'\n');
	
		std::cout << "\n";
		change(turn);                         //Player2
		player[turn].take_a_hit(x,y);
		player[turn].display_attack_result();
		std::cout << "\n";
		char result = player[turn].get_attack_result();

		if(player[turn].get_N_ships() == 0)
		{
			change(turn);
			std::cout <<  "The winner is Player " << turn+1 << "\n";
			return 0;
		}

		change(turn);				//Player1
		player[turn].mark_a_grid(x,y,result);

		std::cout << "\n";
		player[turn].display_game_boards();
		std::cout << "\n";
		std::getchar();
	   	change(turn); 
	}

	std::cout << "The game was constructed wrong!\n";

	return 0;
}

//------------------------------------------------------------

void change(int& turn)
{
	turn = (turn+1)%2;
}

void input(int& x, int& y)
{
	while(!(std::cin >> x >> y))
	{
		std::cin.clear();
		std::cin.ignore(32767,'\n');
		std::cout << "Illegal value. Try again.\n";
	}
}



bool PLAYER::check(const int x, const int y)
{
	return ( x<this->SIZE_BOARD && x>=0 &&  y<this->SIZE_BOARD && y>=0);
}



void PLAYER::locate_ships()
{
	std::cout << "Create 4 one-grid ships:\n";
	for(int i=0; i<4; ++i)
	{
		std::cout << "Input x,y for ship " << i << ":\n";
		int x,y;
		input(x,y);
		while(!check(x,y) || location_ship[y][x] != 0)
		{
			std::cout << "Try other x,y:\n";
			input(x,y);
			
		}
		location_ship[y][x] = i+1;
		display_dislocation_ship(); 
	}

	std::cout << "Create 3 two-grid ships:\n";
	for(int i=4;i<7;++i)
	{
		std::cout << "Input {x1,y1}, {x2,y2} for two-grid-ship " << i << ":\n";
		int X[2], Y[2];
		input(X[0],Y[0]);
		input(X[1],Y[1]);

		while(!check(X[0],Y[0]) || !check(X[1],Y[1]) 
			|| location_ship[Y[0]][X[0]] != 0 || location_ship[Y[1]][X[1]] != 0 
			|| !check_continuous(2,X,Y)
		     )
		{
			std::cout << "Try other x,y:\n";
			input(X[0],Y[0]);
			input(X[1],Y[1]);
		}
		location_ship[Y[0]][X[0]] = i+1;
		location_ship[Y[1]][X[1]] = i+1;
		display_dislocation_ship(); 

	}
	
	std::cout << "Create 2 three-grid ships:\n";
	for(int i=7;i<9;++i)
	{
		std::cout << "Input {x1,y1}, {x2,y2} {x3,y3} for three-grid-ship " << i << ":\n";
		int X[3], Y[3];
		input(X[0],Y[0]);
		input(X[1],Y[1]);
		input(X[2],Y[2]);

		while(!check(X[0],Y[0]) || !check(X[1],Y[1]) ||  !check(X[2],Y[2])  
			|| location_ship[Y[0]][X[0]] != 0 || location_ship[Y[1]][X[1]] != 0 ||  location_ship[Y[2]][X[2]] != 0 
			|| !check_continuous(3,X,Y)
		     )
		{
			std::cout << "Try other x,y:\n";
			input(X[0],Y[0]);
			input(X[1],Y[1]);
			input(X[2],Y[2]);
		}
		location_ship[Y[0]][X[0]] = i+1;
		location_ship[Y[1]][X[1]] = i+1;
		location_ship[Y[2]][X[2]] = i+1;
		display_dislocation_ship(); 

	}
	std::cout << "Create 1 four-grid ship:\n";
	std::cout << "Input {x1,y1}, {x2,y2} {x3,y3} {x4,y4} for four-grid-ship " << 10 << ":\n";
		int X[4], Y[4];
		input(X[0],Y[0]);
		input(X[1],Y[1]);
		input(X[2],Y[2]);
		input(X[3],Y[3]);

		while(!check(X[0],Y[0]) || !check(X[1],Y[1]) ||  !check(X[2],Y[2])
				|| !check(X[3],Y[3])  
			|| location_ship[Y[0]][X[0]] != 0 || location_ship[Y[1]][X[1]] != 0 ||  location_ship[Y[2]][X[2]] != 0 ||  location_ship[Y[3]][X[3]] != 0
			|| !check_continuous(4,X,Y)
		     )
		{
			std::cout << "Try other x,y:\n";
			input(X[0],Y[0]);
			input(X[1],Y[1]);
			input(X[2],Y[2]);
			input(X[3],Y[3]);
		}
		location_ship[Y[0]][X[0]] = 10;
		location_ship[Y[1]][X[1]] = 10;
		location_ship[Y[2]][X[2]] = 10;
		location_ship[Y[3]][X[3]] = 10;
		display_dislocation_ship(); 

}

bool check_continuous(const int N_grids, const int X[4], const int  Y[4])
{
	switch(N_grids)
	{
		case 1:
			return true;
		case 2:
			if( 	(
				 (X[0] == X[1]) && (abs(Y[0]-Y[1]) == 1)
			  	)
				||
				(
				 (Y[0] == Y[1]) && (abs(X[0]-X[1]) == 1)
				)
			  )
			{
				return true;
			}
			break;
		case 3:{
			int T[3]; //create increasing sequance
			if((X[0] == X[1]) && (X[0] == X[2]) && (X[1] == X[2]))
			{
				T[0] = Y[0];
				T[1] = Y[1];
				T[2] = Y[2];
			}
			else if ((Y[0] == Y[1]) && (Y[0] == Y[2]) && (Y[1] == Y[2]))
			{
				T[0] = X[0];
				T[1] = X[1];
				T[2] = X[2];
			
			}
			else
			{
				return false;
			}
			std::sort(T,(T+3));
			if( ((T[2]-T[0])==2) && ((T[2]-T[1])==1) && ((T[1]-T[0])) )
			{
				return true;
			}
		       }
			break;
		case 4:{
			int T[4]; //create increasing sequance
			int k = Y[0];
			if((X[0] == X[1]) && (X[0] == X[2]) && (X[0] == X[3]) && (X[1] == X[2]) && (X[1] == X[3]) && (X[2] == X[3]) )
			{
				T[0] = Y[0];
				T[1] = Y[1];
				T[2] = Y[2];
				T[3] = Y[3];
			}
			else if ((Y[1] == k) && (Y[2] == k) && (Y[3] == k))
			{
				T[0] = X[0];
				T[1] = X[1];
				T[2] = X[2];
				T[3] = X[3];
			
			}
			else
			{
				return false;
			}
			std::sort(T,(T+4));
			if( ((T[3]-T[0])==3) && ((T[3]-T[1])==2) &&  ((T[3]-T[2])==1)
					&& ((T[2]-T[0])==2) && ((T[2]-T[1])==1) && ((T[1]-T[0])==1 )  )
			{
			
				return true;
			}
			}
			break;
		default:
			std::cout << "Incorrect number of grids.\n";
	}

	return false;
}
void PLAYER::take_a_hit(const int x, const int y)
{
	if(!check(x,y))
	{
		std::cout << "Illegal value of x,y.\n";
		return;
	}
	int k = location_ship[y][x];
		if(k > 0)
		{

			--list[k-1];
			this->attack_result = 'X';
			if(list[k-1] == 0)
			{
				this->attack_result = '#';
				--N_ships;
			}
			location_ship[y][x] = -2;
		}
		else if(k == 0)
		{
			this->attack_result = '0';
			this->location_ship[y][x] = -1;
		}
		else
		{
			std::cout << "Same coordinates.he-he.\n";
			
				this->attack_result = this->game_board[y][x];;
			
		}
}

void PLAYER::create_a_fire(int& x,int& y)
{
	std::cout << "Create a fire: input x,y\n";
	int x1, y1;
	while(!(std::cin >> x1 >> y1) || x1<0 || x1>=this->SIZE_BOARD || 
y1<0 || y1>=this->SIZE_BOARD)
	{
		std::cin.clear();
		std::cin.ignore(32767,'\n');
		std::cout << "Illegal value. Try again.\n";
	}

	x=x1;
	y=y1;

}
void PLAYER::mark_a_grid(const int x,const int y,const char attack_result)
{
	if(!( x<this->SIZE_BOARD && x>=0 &&  y<this->SIZE_BOARD && y>=0))
	{
		std::cout << "Illegal value of x,y.\n";
		return;
	}
	this->game_board[y][x] = attack_result;

}
void PLAYER::display_attack_result()
{
	switch(this->attack_result)
	{
		case '0': std::cout << "\t\t\tMISS!\n";
			  break;
		case 'X': std::cout << "\t\t\tHIT!\n";
			  break;
		case '#': std::cout << "\t\t\tSINK!\n";
			  break;
		default:
			  std::cout << "Illegal value of attack_result\n";
	}

}
char PLAYER::get_attack_result()
{
	return attack_result;
}

int PLAYER::get_N_ships()
{
	return this->N_ships;

}



void PLAYER::display_game_boards()
{
	std::cout << "\n";
 // Display column numbers
    std::cout << "    ";
    for (int i = 0; i < 10 ; ++i) 
    {
      std::cout << std::left << std::setw(2) << i << " ";

    }
    std::cout << "     ";
    std::cout << "   ";
    for (int i = 0; i < 10 ; ++i) 
    {
      std::cout << std::left << std::setw(2) << i << " ";

    }
    std::cout << "\n";
    std::cout << "   -----------------------------" << "      " << "   -----------------------------";     
    std::cout << "\n";;

    // Display rows with row numbers and board contents
    for (int i = 0; i < 10; ++i) 
    {
        std::cout << std::left << std::setw(2) << i << "| "; // Output row number without separatior



        for (int j = 0; j < 10; ++j) 
	{
            std::cout << std::left << std::setw(3) << this->game_board[i][j]; // Add space separator
        }


    std::cout << "     ";

        std::cout << std::left << std::setw(2) << i << "| "; // Output row number without separator
	    for (int j = 0; j < 10; ++j) 
	{
            
		std::cout << std::left << std::setw(3) << this->location_ship[i][j]; // Add space separator
        }

std::cout << std::endl;
    
    }
}


void PLAYER::display_dislocation_ship() 
{
    // Display column numbers
    std::cout << "    ";
    for (int i = 0; i < 10 ; ++i) 
    {
      std::cout << std::left << std::setw(2) << i << " ";

    }
    std::cout << "\n\n";;

    // Display rows with row numbers and board contents
    for (int i = 0; i < 10; ++i) 
    {
        std::cout << std::left << std::setw(2) << i << "  "; // Output row number without separator
        for (int j = 0; j < 10; ++j) 
	{
            std::cout << std::left << std::setw(3) <<  this->location_ship[i][j]; // Add space separator
        }

	std::cout << std::endl;
    
    }
}

void displayBoard(const char (& board)[10][10]) 
{
    // Display column numbers
    std::cout << "    ";
    for (int i = 0; i < 10 ; ++i) 
    {
      std::cout << std::left << std::setw(2) << i << " ";

    }
    std::cout << "\n\n";;

    // Display rows with row numbers and board contents
    for (int i = 0; i < 10; ++i) 
    {
        std::cout << std::left << std::setw(2) << i << "  "; // Output row number without separator
        for (int j = 0; j < 10; ++j) 
	{
            std::cout << std::left << std::setw(3) << board[i][j]; // Add space separator
        }

	std::cout << std::endl;
    
    }
}
