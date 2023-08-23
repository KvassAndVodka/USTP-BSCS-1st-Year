#include <iostream>
using namespace std;

int main(){
    cout << "Enter weight in pounds: ";
    double weight;
    cin >> weight;

    cout << "Enter height in inches: ";
    double height;
    cin >> height;

    const double KILOGRAMS_PER_POUND = 0.45359237;
    const double METER_PER_INCH = 0.0254;

    double weightInKilograms = weight * KILOGRAMS_PER_POUND;
    double heightInMeters = height * METER_PER_INCH;
    double bmi = weightInKilograms /
        (heightInMeters * heightInMeters);

    cout << "BMI is " << bmi << endl;
    if (bmi < 18.5)
        cout << "Underweight" << endl;
    else if (bmi < 25)
        cout << "Normal" << endl;
    else if (bmi < 30)
        cout << "Overweight" << endl;
    else 
        cout << "Obese" << endl;
    
    return 0;
}
