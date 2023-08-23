#include <iostream>
#include <cmath>

using namespace std;

class RegularPolygon{
private:
    int n;
    double side, x, y;

public:
    RegularPolygon(){
        n = 3;
        side = 1;
        x = 0;
        y = 0;
    }

    RegularPolygon(int n, double side){
        this->n = n;
        this->side = side;
        x = 0;
        y = 0;
    }
    
    RegularPolygon(int n, double side, double x, double y){
        this->n = n;
        this->side = side;
        this->x = x;
        this->y = y;
    }
    
    const int getN(){
        return n; 
    }

    const double getSide(){
        return side;
    }

    const double getX(){
        return x;
    }
    
    const double getY(){
        return y;
    }

    int setN(const int& n){
        return this->n = n; 
    }

    double setSide(const double& side){
        return this->side = side;
    }

    double setX(const double& x){
        return this->x = x;
    }
    
    double setY(const double& y){
        return this->y = y;
    }
    
    const double getPerimeter(){
        return n * side;
    }
    const double getArea(){
        return (n * side * side) / (4 * tan(3.14159 / n));
    }

    void display(){
        cout << "The perimeter is " << getPerimeter()
        << " and the area is " << getArea() << endl;
    }

};

int main(){

    RegularPolygon polygon1;
    polygon1.display();

    RegularPolygon(6, 4) polygon2;
    polygon2.display();
    
    RegularPolygon(10, 4, 5.6, 7.8) polygon3;
    polygon3.display();

    return 0;
}