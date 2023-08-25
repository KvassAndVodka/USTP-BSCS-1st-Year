// Javier M. Raut
// CS1D - L6 - E1 
// Triangular Numbers

#include <iostream>
using namespace std;

// Declare function to get triangular number
int getTriangularNumber(int n) {
    return n * (n + 1) / 2;
}

int main() {
    // Declare number of triangular numbers. and line limit
    const int num_of_TriangularNumbers = 75;
    const int line_limit = 5;

    // Get triangular numbers
    int count = 0;
    for (int i = 1; i <= num_of_TriangularNumbers; i++)  {
        cout << getTriangularNumber(i) << " ";
        count++;
        if (count == line_limit) {
            cout << endl;
            count = 0;
        }
    }

    return 0;
}