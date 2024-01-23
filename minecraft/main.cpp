#include <iostream>
#include<string>
#include<sstream>
#include<exception>

#define THROW(x) \
	std::stringstream ss; \
	ss << x << "\n"; \
	ss << "Mistake :\n"; \
	ss << "FILE:" << __FILE__ << "\n"; \
	ss << "LINE:" << __LINE__<< "\n"; \
	throw std::runtime_error(ss.str());
	
class LANDSCAPE
{
	public:
		LANDSCAPE()
		{
			for(int i=0; i< Nx; ++i)                                                {
				for(int j=0; j<Ny; ++j)
				{                                                                               for(int k=0; k<Nz; ++k)
					{                                                                                                                                                       landscape[i][j][k] = 0;                                                                                     }
				}
			}
		}

		bool check_x(const int x) { return x < Nx && x>= 0;} 
		bool check_y(const int y) { return y < Ny && y>= 0;}
		bool check_z(const int z){ return z < Nz && z >= 0;}
		void show_heights();
		void show_slice(const int slice);
		void init_heights(const int (& heights)[5][5]);
		void update_landscape();

	private:
	int Nx=5,Ny=5,Nz=10;
	int landscape[5][5][10];
	int heights[5][5];

};

void LANDSCAPE::init_heights(const int(& heights)[5][5])
{
	for(int i=0; i< Nx; ++i)
	{
		for(int j=0; j<Ny; ++j)
		{
			this->heights[i][j]= heights[i][j];
		}
	}
	update_landscape();
}

void LANDSCAPE::update_landscape()
{
	for(int i=0; i< Nx; ++i)
	{
		for(int j=0; j<Ny; ++j)
		{
			for(int k=0; k<Nz; ++k)
			{

				landscape[i][j][k] = (k <= heights[i][j] ? 1 : 0 );
			}
		}
	}

}
void LANDSCAPE::show_heights()
{
	for(int i=0; i< Nx; ++i)
	{
		for(int j=0; j<Ny; ++j)
		{
			std::cout << heights[i][j] << " ";
		}
		std::cout << "\n";
	}
}

void LANDSCAPE::show_slice(const int slice)
{
	if(!check_z(slice)) {
		THROW("Out of boundary 0Z");
	}

	for(int i=0; i< Nx; ++i)
	{
		for(int j=0; j<Ny; ++j)
		{
			std::cout << landscape[i][j][slice] << " ";
		
		}
		std::cout << "\n";
	}
}

int main()
{

	LANDSCAPE land;
	int heights[5][5]  = { {5,5,5,5,5},{4,4,4,4,4},{3,2,2,2,3},{2,2,2,2,2},{1,1,1,1,1}};
	land.init_heights(heights);
	
	int32_t slice=0;

	std::cout << "Landscape X0Y:\n";
	while(std::cout << "\nInput slice:\n" &&
std::cin >> slice)
			{
		land.show_slice(slice);
	}

	return 0;
}
