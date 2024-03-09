#include <iostream>
#include <cmath>
#define PI 3.14

using namespace std;

class Figure 
{
protected:
    double side;
public:
    Figure(double s) : side(s) {}
    virtual double area() = 0;
    virtual double perimeter() = 0;
};

class Square : public Figure 
{
public:
    Square(double s) : Figure(s) {}

    double area() override 
    {
        return pow(side, 2);
    }

    double perimeter() override
    {
        return 4 * side;
    }
};

class Circle : public Figure 
{
public:
    Circle(double r) : Figure(r) {}

    double area() override 
    {
        return PI * pow(side, 2);
    }

    double perimeter() override 
    {
        return 2 * PI * side;
    }
};

int main() 
{
    Square square(5);
   cout << "Square area: " << square.area() << ", perimeter: " << square.perimeter() << endl;

    Circle circle(5);
    cout << "Circle area: " << circle.area() << ", perimeter: " << circle.perimeter() << endl;

    return 0;
}
