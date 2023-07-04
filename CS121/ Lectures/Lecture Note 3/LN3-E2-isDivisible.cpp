// Javier M. Raut
// CS1D - LN3 - E2
// Is Divisible?

#include <iostream>
using namespace std;

int main(){
    // Declare variables
    int num1, num2, isDivisible;

    // Ask for user input
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    // Check if number is divisible
    isDivisible = num1 % num2;

    // Compare and display result.
    if (isDivisible == 0){
        cout << num1 << " is divisible by " << num2;
    } else{
        cout << num1 << " is not divisible by " << num2;
    }

    return 0;
}
