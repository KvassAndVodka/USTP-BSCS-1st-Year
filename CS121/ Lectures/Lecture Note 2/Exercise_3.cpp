#include <iostream>

using namespace std;

int main(){
    double weight_inPounds, height_inInches;
    double poundtoKg = 0.45359237, inchtoMeter = 0.0254;

    cout << "Enter weight in pounds: ";
    cin >> weight_inPounds;
    cout << "Enter height in inches: ";
    cin >> height_inInches;
    
    double weight_inKilograms = weight_inPounds * poundtoKg;
    double height_inMeters = height_inInches * inchtoMeter;

    double BMI = weight_inKilograms / (height_inMeters * height_inMeters); 

    cout << "BMI is " << BMI;
}
