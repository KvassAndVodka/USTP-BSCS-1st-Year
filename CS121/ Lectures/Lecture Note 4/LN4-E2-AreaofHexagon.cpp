// Javier M. Raut
// CS1D - LN4 - E2
// Area of a Hexagon

#include <iostream>
#include <cmath>

using namespace std;

// Declare Function 'AreaOfHexagon'
double AreaOfHexagon(double s){
    double Area = (6 * pow(s, 2)) / (4 * tan(M_PI / 6));
    return Area;
}

int main(){
    // Declare variable s
    double s;

    // Ask for user input
    cout << "Enter the side: ";
    cin >> s;

    // Call function AreaOfHexagon and display result
    double Area = AreaOfHexagon(s);
    cout << "The are of the Hexagon is " << Area << endl;

  
    return 0; 
}
