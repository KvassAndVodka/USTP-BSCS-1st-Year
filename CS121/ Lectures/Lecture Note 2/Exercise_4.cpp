#include <iostream>
using namespace std;

int main(){
    double distance, milesPerGalon, pricePerGalon, cost;

    cout << "Enter the driving distance: ";
    cin >> distance;
    cout << "Enter miles per gallon: ";
    cin >> milesPerGalon;
    cout << "Enter price per gallon: ";
    cin >> pricePerGalon;
    
    cost = (distance / milesPerGalon) * pricePerGalon;

    cout << "The cost of driving is: " << cost; 
    
    return 0;
}
