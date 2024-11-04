#include <iostream>
#include <thread>
#include <chrono>
#include <iomanip>
#include <string>

struct TIME 
{
	int minutes = 0;
	int seconds = 0;

	bool check() 
	{
		return (minutes >= 0 && seconds >= 0);
	}

	void display() 
	{
		std::cout << "+----------------+\n";
		std::cout << "| " << std::setw(2) << std::setfill('0') << minutes << " : "
			<< std::setw(2) << std::setfill('0') << seconds << " |\n";
		std::cout << "+----------------+\n";
	}
};

class Timer 
{
	private:
		TIME time;

	public:
		void input() 
		{
			std::cout << "Enter minutes: ";
			std::cin >> time.minutes;
			std::cout << "Enter seconds: ";
			std::cin >> time.seconds;

			if (!time.check()) 
			{
				std::cout << "Error: Minutes and seconds cannot be negative.\n";
				time.minutes = 0;
				time.seconds = 0;
			}
		}

		void run()
		{
			while (time.minutes > 0 || time.seconds > 0) {
				time.display();

				std::this_thread::sleep_for(std::chrono::seconds(1));
				if (time.seconds > 0) 
				{
					time.seconds--;
				}
				else if (time.minutes > 0) {
					time.minutes--;
					time.seconds = 59; // Reset seconds to 59
				}
			}

			// Output sound signal and message
			std::cout << "\a"; // Sound signal
			std::cout << "DING DING DING\n";
		}
};

int main() 
{
	Timer timer;
	std::string command;

	while (true) 
	{
		std::cout << "Enter command (time/exit): ";
		std::cin >> command;

		if (command == "time") {
			timer.input();
			timer.run();
		} else if (command == "exit") {
			std::cout << "Exiting the program.\n";
			break;
		} else {
			std::cout << "Unknown command. Please try again.\n";
		}
	}
}
