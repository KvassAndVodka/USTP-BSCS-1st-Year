#include <iostream>

using namespace std;

int main(){
    int number;

    cout << "Enter a number between 0 and 1000: ";
    cin >> number;

    int hundreds = (number % 1000) / 100; 
    int tens = (number % 100) / 10;
    int ones = number % 10; 
    
    int sum = hundreds + tens + ones;


    cout << hundreds << endl;
    cout << tens << endl;
    cout << ones << endl;
    cout << "The sum of the digits is " << sum; 

    return 0; 
}
