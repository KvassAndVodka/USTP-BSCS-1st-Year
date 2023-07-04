// Javier M. Raut
// CS1D - LN4 - E3
// Order three cities

#include <iostream>

using namespace std;

int main(){
    // Declare city variables
    string city1, city2, city3;

    // Ask for user input
    cout << "Enter the first city: ";
    getline (cin, city1);
    cout << "Enter the second city: ";
    getline (cin, city2);
    cout << "Enter the third city: ";
    getline (cin, city3);

    // Display cities in alphabetical order
    cout << "The cities in alphabetical order are ";
    if (city1 < city2 && city1 < city3) {
        if (city2 > city3)
            cout << city1 << ", " << city2 << ", " << city3 << endl;
        else
            cout << city1 << ", " << city3 << ", " << city2 << endl;
    }
    else if (city2 < city1 && city2 < city3) {
        if (city1 > city3)
            cout << city2 << ", " << city1 << ", " << city3 << endl;
        else
            cout << city2 << ", " << city3 << ", " << city1 << endl;
    }
    else {
        if (city1 < city2)
            cout << city3 << ", " << city1 << ", " << city2 << endl;
        else
            cout << city3 << ", " << city2 << ", " << city1 << endl;
    }

    return 0;
}
