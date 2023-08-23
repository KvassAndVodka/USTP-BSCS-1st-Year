#include <iostream>

using namespace std;

class Circle{
    public: 
        // The Radius of this circle
        double radius;

    Circle(){
        radius = 1;
    }

    // Construct a circle object
    Circle(double newRadius){
        radius = newRadius;
    }

    // Return the area of this circle
    double getArea(){
        return radius * radius * 3.14159;
    }
};

int main(){
    Circle hatdog1(1.0);
    Circle hatdog2(25);
    Circle hatdog3(125);

    cout << "The area of the circle of radius " i'
    << hatdog1.radius << " is " << hatdog1.getArea() << endl;
    cout << "The area of the circle of radius "
    << hatdog2.radius << " is " << hatdog2.getArea() << endl;
    cout << "The area of the circle of radius "
    << hatdog3.radius << " is " << hatdog3.getArea() << endl;

    // Modify circle radius

    hatdog2.radius = 100;
    cout << "The area of the circle of radius "
    << hatdog2.radius << " is " << hatdog2.getArea() << endl;

    return 0;
}