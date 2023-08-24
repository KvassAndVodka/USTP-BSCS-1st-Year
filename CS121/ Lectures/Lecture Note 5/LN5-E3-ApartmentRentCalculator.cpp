// Javier M. Raut
// CS1D - LN5 - E3
// Apartment Rent Calculator


#include <iostream>

using namespace std;

int main() {
    // Declare variables for rent, total rent, rate of increase, and number of years
    float rent = 1000, totalRent = 0;
    const float rateIncrease = 0.03;
    const int numYears = 5;

    // Loop for yearly rent fees and calculate for total rent cost
    for (int i = 0; i < numYears; i++){
        cout << "Rent for year " << i + 1 << ": $" << rent << endl;
        totalRent += rent;
        rent = (rent * rateIncrease + rent);
    }
    
    // Display total rent cost in 5 years
    cout << "\nTotal Rent in 5 years: $" << totalRent << endl;

    return 0;
}