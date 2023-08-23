#include "Circle.h"
#include "Head.h"
#include <iostream>

using namespace std;

// Construct a default circle circle object
Circle::Circle()
{
    radius = 1;
}

// Construct a circle object
Circle::Circle(double newRadius)
{
    radius = newRadius;
}

// Return the area of this circle
double Circle::getArea()
{
    return radius * radius * 3.14159;
}

int main()
{
    // a
    Circle c1;
    Circle c2(6);
    c1 = c2;
    cout << "Area of Circle 1: " << c1.getArea() << endl;

    // b
    cout << "Area of Circle 2: " <<Circle(8).getArea() << endl;

    return 0;
}