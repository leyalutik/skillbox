
#include "surgery.h"

bool operator==(const Point& p1, const Point& p2)
{
    return p1.x == p2.x && p1.y == p2.y;
}

Span::Span() : start(0, 0), end(0, 0) {}

Span::Span(const Point& start1, const Point& end1) : start(start1), end(end1) {}

Span::Span(const Span& span1) : start(span1.start), end(span1.end){}

bool Span::between_values(const double x1, const double x2, const double x) const
{
	return (
	(x <= x1 && x >= x2)
	||
	(x >= x1 && x <= x2)
	);

}

bool Span::is_on_span(const double x, const double y) const
{
    if(end.x == start.x)
    {

	return (end.x == x && between_values(start.y,end.y,y));
    }

    double k = (end.y - start.y) / (end.x - start.x);
    return ( (y - start.y) == (k * (x - start.x)) && between_values(start.x,end.x,x) && between_values(start.y,end.y,y));
}

bool operator==(const Span& s1, const Span& s2)
{
    return s1.start == s2.start && s1.end == s2.end;
}

Command::Command(const std::string& name1) : name(name1), state(OPERATION_STATE::READY) {}

Command::Command(const std::string& name1, const Span& boundary1) : name(name1), boundary(boundary1), state(OPERATION_STATE::READY) {}

void Command::set(const Span& boundary1, const Point& action_point1) 
{
    boundary = boundary1;
    action_point = action_point1;
}

void Command::set(const Span& boundary1)
{
    boundary = boundary1;
}

void Command::set(const Point& action_point1)
{
    action_point = action_point1;
}

void Command::run()
{
    input();
    if (check())
    {
        execute();  // `state` будет установлен в EXECUTED внутри execute
    }
    else
    {
        state = OPERATION_STATE::FAILED;
    }
}

void Command::display_state()
{
    switch (state)
    {
    case OPERATION_STATE::EXECUTED:
        std::cout << name << " is executed successfully.\n";
        break;
    case OPERATION_STATE::FAILED:
        std::cout << name << " has failed.\n";
        break;
    case OPERATION_STATE::READY:
        std::cout << name << " is ready to start.\n";
        break;
    default:
        break;
    }
}

void Command::reset_to_zero()
{
    boundary = Span(); // Обнуление границ
    action_point = Point(); // Обнуление точки действия
    state = OPERATION_STATE::READY; // Установка состояния в READY
}

OPERATION_STATE Command::get_state()
{
	return state;
}

Scalpel::Scalpel() : Command("Scalpel") {}

bool Scalpel::check() 
{ 
    return state != OPERATION_STATE::FAILED; 
}

void Scalpel::input()
{
    std::cout << "Input start point(x1,y1) and end point(x2,y2) for command " << name << ":\n";
    std::cin >> boundary.start.x >> boundary.start.y >> boundary.end.x >> boundary.end.y;
    if (!std::cin)
    {
        state = OPERATION_STATE::FAILED;
    }
}

void Scalpel::execute() 
{
    state = OPERATION_STATE::EXECUTED;
    std::cout << name << " is done.\n";
}

Hemostat::Hemostat() : Command("Hemostat") {}

bool Hemostat::check() 
{
    if (!boundary.is_on_span(action_point.x, action_point.y))
    {
        state = OPERATION_STATE::FAILED;
    }
    return state != OPERATION_STATE::FAILED;
}

void Hemostat::input() 
{
    std::cout << "Input point(x,y) for command " << name << ":\n";
    std::cin >> action_point.x >> action_point.y;
    if (!std::cin)
    {
        state = OPERATION_STATE::FAILED;
    }
}

void Hemostat::execute() 
{
    state = OPERATION_STATE::EXECUTED;
    std::cout << name << " is done.\n";
}

Tweezers::Tweezers() : Command("Tweezers") {}

bool Tweezers::check() 
{
    if (!boundary.is_on_span(action_point.x, action_point.y))
    {
        state = OPERATION_STATE::FAILED;
    }
    return state != OPERATION_STATE::FAILED;
}

void Tweezers::input() 
{
    std::cout << "Input point(x,y) for command " << name << ":\n";
    std::cin >> action_point.x >> action_point.y;
    if (!std::cin)
    {
        state = OPERATION_STATE::FAILED;
    }
}

void Tweezers::execute() 
{
    state = OPERATION_STATE::EXECUTED;
    std::cout << name << " is done.\n";
}

Suture::Suture() : Command("Suture") {}

void Suture::set_boundary_surgery(const Span& surgery) 
{ 
    boundary_surgery = surgery; 
}

bool Suture::check() 
{
    if (!(boundary_surgery == boundary))
    {
        state = OPERATION_STATE::FAILED;
    }
    return state != OPERATION_STATE::FAILED;
}

void Suture::input() 
{
std::cout << "Input start point(x1,y1) and end point(x2,y2) for command " << name << ":\n";
    std::cin >> boundary_surgery.start.x >> boundary_surgery.start.y >> boundary_surgery.end.x >> boundary_surgery.end.y;
    if (!std::cin)
    {
        state = OPERATION_STATE::FAILED;
    }

}

void Suture::execute() 
{
    state = OPERATION_STATE::EXECUTED;
    std::cout << name << " is done.\n";
}

Surgery::Surgery() : Command("Surgery") {}

bool Surgery::activate(Command* command)
{
    command->set(boundary, action_point);
    command->run();
    command->display_state();
    set(command->get_boundary(), command->get_action_point());
    return command->get_state() != OPERATION_STATE::FAILED;
}

void Surgery::execute() 
{
    state = OPERATION_STATE::FAILED;

    Scalpel scalpel;
    if (!activate(&scalpel))
    {
        return;
    }
    Hemostat hemostat;
    if (!activate(&hemostat))
    {
        return;
    }

    Tweezers tweezers;
    if (!activate(&tweezers))
    {
        return;
    }

    Suture suture;
    if (!activate(&suture))
    {
        return;
    }

    state = OPERATION_STATE::EXECUTED;
}

