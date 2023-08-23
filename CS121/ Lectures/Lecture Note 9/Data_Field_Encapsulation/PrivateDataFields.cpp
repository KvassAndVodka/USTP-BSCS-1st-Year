#include "privateCircle.h"

Circle::Circle(){
    radius = 1;
}

Circle::Circle(double newRadius){
    radius = newRadius;
}

double Circle::getArea(){
    return radius * radius * 3.14159;
}

double Circle::getRadius(){
    return radius;
}

void Circle::setRadius(double newRadius){
    radius = (newRadius >= 0) ? newRadius : 0;
}