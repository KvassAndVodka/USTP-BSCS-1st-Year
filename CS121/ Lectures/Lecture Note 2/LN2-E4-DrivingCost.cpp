// Javier M. Raut
// CS1D - LN2 - E4
// Driving Cost

#include <iostream>
using namespace std;

int main(){
    // Declare variables
    double distance, milesPerGalon, pricePerGalon, cost;

    // Ask for input
    cout << "Enter the driving distance: ";
    cin >> distance;
    cout << "Enter miles per gallon: ";
    cin >> milesPerGalon;
    cout << "Enter price per gallon: ";
    cin >> pricePerGalon;

    // Calculate cost
    cost = (distance / milesPerGalon) * pricePerGalon;

    // Display result
    cout << "The cost of driving is: " << cost; 
    
    return 0;
}
