//Javier M. Raut
//CS1D - LN2 - E1
// Volume and Area Calculator of a Circle

#include <iostream>
using namespace std;


int main(){
    //Declare variables pi, radius, and length
    double pi = 3.1415926, radius, length;

    //Ask user for input
    cout << "Enter the radius and length of a cylinder: ";
    cin >> radius >> length; 

    // Solve for area and volume
    double area = radius * radius * pi;
    double volume = area * length;

    //Print out results.
    cout << "The area is " << area << endl; 
    cout << "The volume is " << volume;
    
    return 0;
}
