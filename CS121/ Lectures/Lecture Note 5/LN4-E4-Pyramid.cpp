// Javier M. Raut
// CS1D - LN5 - E4
// Pyramid

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Declare input for number 
    int num = 0;
    cout << "Enter the number of lines: ";
    cin >> num; 

    // Checks if value is within the range
    if (num > 15 || num < 1) {
        cout << "The number is invalid, only input values between 1 to 15." << endl;
        return 0;
    }

    // Display triangle
    for (int i = 0; i <= num; i++) {

        cout << right << setw((num - i + 1) * 2);

        for (int j = i; j > 0; j--){
            cout << " " << j;
        }

        for (int j = 2; j < i + 1; j++){
            cout << " " << j;
        }

        cout << endl;
    }
    
    return 0;
}