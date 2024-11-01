#include <iostream>
#include <ctime>
#include <string>
#include <vector>
struct Task
{
	std::string name;
	time_t start_time = 0;
	time_t end_time = 0;
	bool is_finished = false;
	bool is_start = false;
	time_t duration_time;

	void make_to_zero() // initial values
	{

		is_finished = false;
		is_start = false;
		start_time = 0;
		end_time = 0;
		duration_time = 0;
		name = "";
	}
	void evaluate()
	{
			duration_time = std::difftime(end_time ,start_time);

	}
	void complete()
	{
		end_time = std::time(nullptr);
		evaluate();//duration time

		is_finished = true;

	}
	void start()
	{
		std::cout << "Input name:";
		std::cin >> name;
		start_time = std::time(nullptr);
		is_start = true;

	}
	void display_info () const
	{
		std::cout << "Task: " << name 
		<< " duration: " << duration_time << "seconds\n";

	}
};


class Manager
{
public:
	void begin();

	void end();

	void status();
	void display();
	void run(const std::string& command);
	std::vector<Task> finished_tasks;
	Task current_task;
};






//--------------START--MAIN-----------------------------

int main()
{

	std::string command;
	Manager manager;
	while(command != "exit")
	{
		manager.display();

		std::cin >> command;
		manager.run(command);

	}


	return 0;
}


//-----------END--MAIN------------------------------------

void  Manager::run(const std::string& command)
{
	if(command == "begin")
	{
		begin();
		return;
	}

	if(command == "end")
	{
		end();
		return;
	}

	if(command == "status")
	{
		status();
		return;
	}


	std::cout << "Unknown command\n";

}

void Manager::display()
{
	std::cout << "========================================\n";
	std::cout << "       Please enter a command:\n";
	std::cout << " - 'begin'  : Start the process\n";
	std::cout << " - 'end'    : End the process\n";
	std::cout << " - 'status' : Show current status\n";
	std::cout << " - 'exit'   : Exit the program\n";
	std::cout << "========================================\n";
	std::cout << "Your command: ";
}


void Manager::begin()
{
	if(current_task.is_start)
	{
		if(!current_task.is_finished)
		{

			current_task.complete();
		}

		finished_tasks.push_back(current_task);
		current_task.make_to_zero();
	}
	current_task.start();
}

void Manager::end()
{
	if(current_task.is_start)
	{
		if(!current_task.is_finished)
		{
			current_task.complete();

		}
		finished_tasks.push_back(current_task);
		current_task.make_to_zero();
	}
}

void Manager::status()
{
	if(finished_tasks.size() == 0)
	{
		std::cout << "No complete tasks.\n";
	}
	for(const auto& ft:finished_tasks)
	{
		ft.display_info();

	}
}

