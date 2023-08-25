// Javier M. Raut
// CS1D - L6 - E2
// Largest of Three Numbers

#include <iostream>

using namespace std;

// Declare displayLargest function and choose the largest number
void displayLargest(double num1, double num2, double num3){
    if (num1 >= num2 && num1 >= num3) {
        cout << "The largest number is " << num1 << endl;
    }

    else if (num2 >= num1 && num2 >= num3) {
        cout << "The largest number is " << num2 << endl;
    }

    else {
        cout << "The largest number is " << num3 << endl;
    }
}

int main() {
    // Declare 3 varaibles for numbers
    double num1, num2, num3;

    // Ask for user input
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    // Call displayLargest function 
    displayLargest(num1, num2, num3);

    return 0;
}