#include<iostream>



class Bubble
{

	public:
		Bubble(const int n, const int m);
		~Bubble() { delete[] massive;}
		
		void run();
		void show();
		bool check(const int x, const int y);
		void modify(const int x_start, const int y_start,
				const int x_end, const int y_end);
		void input(int& x, int& y);
		void burst_sound();
		bool is_all_bursted();

	private:
		int n,m;
		int counter_bursted = 0;
		bool* massive;
};

//------------------------------------------------
//------------------------------------------------

int main()
{
	std::cout << "\nSTART\n";
	Bubble bubble(12,12);
	bubble.run();

	return 0;
}


//------------------------------------------------
//------------------------------------------------


Bubble::Bubble(const int n, const int m)
{
	Bubble::n = n;
	Bubble::m = m;
	Bubble::massive = new bool[n*m];
	
	for(int i=0; i<n; ++i)
	{
		for(int j=0; j<m; ++j)
		{
			massive[i*m+j] = true;
		}
	}
}
void Bubble::show()
{
	std::cout << "\n";
	for(int i=0; i<n; ++i)
	{
		for(int j=0; j<m; ++j)
		{
			std::cout << " " 
				<< (massive[i*m+j] == true ? 'o' : 'x')
				<< " ";
		}
		std::cout << '\n';
	}
	std::cout << "\n";
}


bool Bubble::check(const int x, const int y)
{
	return(x<n && x >= 0 && y <m && y>=0);
}



void Bubble::modify(const int x_start, const int y_start,
		const int x_end, const int y_end)
{
	for(int i=y_start; i<=y_end; ++i)
	{
		for(int j=x_start; j<=x_end; ++j)
		{

			int k=n*i+j;
			if(massive[k] == true)
			{
				++counter_bursted;
				massive[k] = false;
				burst_sound();

			}
		}
	}
}

void Bubble:: burst_sound()
{
	std::cout << "POP!\n";
}


void Bubble::input(int& x, int& y)
{
	while(!(std::cin >> x) || !(std::cin >> y) || !check(x,y))
	{
		if(std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(32767,'n');
		}
		std::cout << "Incorrect input. Try again:\n";

	}
}


bool Bubble::is_all_bursted()
{
	return(counter_bursted == n*m);
}

void Bubble::run()
{
	while(!is_all_bursted())
	{
		show();

		int x_start,y_start;
		std::cout << "Input x_start, y_start :\n";
		input(x_start,y_start);

		int x_end,y_end;
		std::cout << "Input x_end, y_end :\n";
		input(x_end,y_end);

		modify(x_start,y_start,x_end,y_end);

	}

	show();
	std::getchar();

}


