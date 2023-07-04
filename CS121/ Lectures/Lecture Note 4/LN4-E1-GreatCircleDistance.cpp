

#include <iostream>
#include <cmath>
using namespace std;

const double radius = 6371;

double toRadians(double degrees) {
    return degrees * M_PI / 180;
}

double GreatCircleShit(double x1, double y1, double x2, double y2){
    double rad_x1, rad_x2, rad_y1, rad_y2; 
    rad_x1 = toRadians(x1);
    rad_x2 = toRadians(x2);
    rad_y1 = toRadians(y1);
    rad_y2 = toRadians(y2);

    double distance = radius * acos(sin(rad_x1) * sin(rad_x2) + cos(rad_x1) * cos(rad_x2) * cos(rad_y1 - rad_y2));
    
    return distance;
}

int main(){
    double x1, y1, x2, y2;
    cout << "Enter Point 1 (Latitude and Longitude): ";
    cin >> x1 >> y1;
    cout << "Enter Point 2 (Latitude and Longitude): ";
    cin >> x2 >> y2;

    double d = GreatCircleShit(x1, y1, x2, y2);
    cout << endl << "The distance between the two points is " << d <<"km.";

    return 0;
}
