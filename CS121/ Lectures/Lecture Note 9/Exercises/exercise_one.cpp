#include <iostream>
#include <cmath>

using namespace std;

class MyPoint{
private:
    double x1, y1, x2, y2;

public:
    MyPoint(){
        x1 = 0;
        y1 = 0; 
        x2 = 0;
        y2 = 0;
    }

    MyPoint(double x1, double x2, double y1, double y2){
        this->x1 = x1;
        this->x2 = x2;
        this->y1 = y1;
        this->y2 = y2;
    }

    double getX1(){
        return x1;
    }

    double getY1(){
        return y1;
    }

    double getX2(){
        return x2;
    }

    double getY2(){
        return y2;
    }

    double distance(){
        return sqrt( pow((x2 - x1), 2) + pow((y2- y1), 2));
    }
    
    void display(){
        cout << "First Point: (" << getX1() << ", " << getY1() << ")" << endl;
        cout << "Second Point: (" << getX2() << ", " << getY2() << ")" << endl;
        cout << "Distance: " << distance() << endl;
    }

};


int main(){

    MyPoint plane1;
    plane1.display();

    MyPoint plane2(0, 0, 10, 30.5);
    plane2.display();

    return 0;
}