#ifndef SURGERY_H
#define SURGERY_H

#include <iostream>
#include <string>

enum class OPERATION_STATE
{
    READY,
    FAILED,
    EXECUTED,
    NOT_START
};

struct Point
{
    double x;
    double y;

    Point(const Point& p1) : x(p1.x), y(p1.y) {}
    Point(const double x1, const double y1) : x(x1), y(y1) {}
    Point() : x(0.), y(0.) {}
};

bool operator==(const Point& p1, const Point& p2);

struct Span
{
    Point start;
    Point end;

    Span();
    Span(const Point& start1, const Point& end1);
    Span(const Span& span1);
bool between_values(const double x1, const double x2, const double x) const ;
bool is_on_span(const double x, const double y) const;
};

bool operator==(const Span& s1, const Span& s2);

class Command
{
public:
    Command(const std::string& name1);
    Command(const std::string& name1, const Span& boundary1);
    
    void set(const Span& boundary1, const Point& action_point1);
    void set(const Span& boundary1);
    void set(const Point& action_point1);
    void run();
    void display_state();
    void reset_to_zero();
    Span get_boundary() const { return boundary; }
    Point get_action_point() const { return action_point; }
    OPERATION_STATE get_state();

protected:
    virtual void input() = 0;
    virtual void execute() = 0;
    virtual bool check() = 0;

    std::string name;
    Span boundary;
    Point action_point;
    OPERATION_STATE state = OPERATION_STATE::READY;
};

class Scalpel : public Command
{
public:
    Scalpel();
    bool check() override;
    void input() override;
    void execute() override;
};

class Hemostat : public Command
{
public:
    Hemostat();
    bool check() override;
    void input() override;
    void execute() override;
};

class Tweezers : public Command
{
public:
    Tweezers();
    bool check() override;
    void input() override;
    void execute() override;
};

class Suture : public Command
{
public:
    Suture();
    void set_boundary_surgery(const Span& surgery);
    bool check() override;
    void input() override;
    void execute() override;

private:
    Span boundary_surgery;
};

class Surgery : public Command
{
public:
    Surgery();  // Конструктор, аналогичный Suture
    bool activate(Command* command);
    void input() override {}            // Пустая реализация input
    bool check() override { return true; }  // Пустая реализация check
    void execute() override;

};


#endif // SURGERY_H

