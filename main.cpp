#include<iostream>
#include <iomanip>
#include <cstdlib>

struct Vector
{
	double x=0;
 	double y=0;
	
	bool check_data(){return x>= 0 && y >= 0;}
	void write_data();
	void print_data();

};

Vector add(const Vector& a, const Vector& b);

Vector substract(const Vector& a, const Vector& b);
Vector scale(const Vector& a, const double c);
double length(const Vector& a);
Vector normalize(const Vector& a);


int main()
{
	bool exit = 1;
	while(exit)
	{

		std::cout << std::endl;
		std::cout << std::setw(30) << std::right <<  "Operations of vectors";
		std::cout << std::endl;
		std::cout << std::setw(32) << std::right << "--------------------------------------" << "\n";
		std::cout << std::left << std::setw(35) << "Add 2 vectors:" << std::right << std::setw(15) << "add\n";
		std::cout << std::setw(35) <<  std::left << "Substract 2 vectors" << std::right << std::setw(15) << "substract\n";
		std::cout << std::setw(35) <<  std::left << "Multiply vector and scalar value" << std::right << std::setw(15) << "scale\n";
		std::cout << std::setw(35) <<  std::left << "Evaluate the length of vector:" << std::right << std::setw(15) << "length\n";
		std::cout << std::setw(35) <<  std::left << "Normalization of vector:" << std::right << std::setw(15) << "normalize\n";

		std::cout << std::setw(32) << std::right << "--------------------------------------" << "\n";
			
		std::cout << "\n\nInput the command:\n";
		std::string line;
		std::getline(std::cin, line, '\n');
		if(line.find("add") != std::string::npos)
		{
			Vector a, b,c;
			a.write_data();
			b.write_data();
			std::cout << "Result\n";
			c = add(a,b);
			c.print_data();
		}
		else if(line.find("substract") != std::string::npos)
		{
			Vector a, b,c;
			a.write_data();
			b.write_data();
			c = substract(a,b);
			std::cout << "Result\n";
			c.print_data();
		}

		else if(line.find("scale") != std::string::npos)
		{
			Vector a;
			a.write_data();
			double r;
			std::cout << "Input float number:\n";
			while(!(std::cin >> r))
			{
				std::cout << "Invalid data";
				std::cin.clear();
				std::cin.ignore(1000,'\n');
			}
			std::cout << "Result:\n";
			
			Vector c{scale(a,r)};
			c.print_data();
		}

		else if(line.find("length") != std::string::npos)
		{
			Vector a;
			a.write_data();

			std::cout << "Result: " << length(a) << "\n";
				}
			else if(line.find("normalize") != std::string::npos)
		{
			Vector a;
			a.write_data();
			Vector c;
			c = normalize(a);
			std::cout << "Result\n";
			c.print_data();
		}


		else
		{
			std::cout << "Unknown command\n";
		}
		std::cout << "Continue the program ? Yes(1)/ No(0):\n";
		std::cin >> exit;
		std::cin.ignore(1000,'\n');
		std::cin.good();
	}

return 0;

}

//--------------

void Vector::write_data()
{
	int32_t LIMIT = 0;
	while(LIMIT < 10)
	{
		++LIMIT;
		std::cout << "For vector:\n";
		std::cout << "Input x:\n";
		std::cin >> x;

		std::cout << "Input y:\n";
		std::cin >> y;

		if(check_data() && std::cin)
		{
			break;
		}
		else
		{
			std::cout << "Invalid data.Try again.\n";
			std::cin.clear();
			std::cin.ignore(1000,'\n');

		}
	}
	if(LIMIT == 10)
	{
		std::cout << "Multiply wrong input. Program termitates.\n";
		exit(1);
	}
}

void Vector::print_data()
{
	std::cout << "{" << x << ", " << y <<"}\n";
}




Vector add(const Vector& a, const Vector& b)
{
	Vector c{(a.x+b.x),(a.y+b.y)};
	return c;

}

Vector substract(const Vector& a, const Vector& b)
{
	
	Vector c{(a.x-b.x),(a.y-b.y)};
	return c;

}
Vector scale(const Vector& a, const double c)
{

	Vector b{(a.x*c),(a.y*c)};
	return b;
}
double length(const Vector& a)
{
	return sqrt(a.x*a.x+a.y*a.y);
}
Vector normalize(const Vector& a)
{
	double l = length(a);
	return {(a.x/l),(a.y/l)};
	
}


