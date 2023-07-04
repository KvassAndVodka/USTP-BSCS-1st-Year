// Javier M. Raut
// CS1D - LN2 - E3
// BMI Calculator

#include <iostream>

using namespace std;

int main(){
    // Declare all variables
    double weight_inPounds, height_inInches;
    double poundtoKg = 0.45359237, inchtoMeter = 0.0254;

    // Ask user for input
    cout << "Enter weight in pounds: ";
    cin >> weight_inPounds;
    cout << "Enter height in inches: ";
    cin >> height_inInches;

    // Imperial to Metric Conversion
    double weight_inKilograms = weight_inPounds * poundtoKg;
    double height_inMeters = height_inInches * inchtoMeter;

    // Calculate for BMI
    double BMI = weight_inKilograms / (height_inMeters * height_inMeters); 

    // Display
    cout << "BMI is " << BMI;
}
