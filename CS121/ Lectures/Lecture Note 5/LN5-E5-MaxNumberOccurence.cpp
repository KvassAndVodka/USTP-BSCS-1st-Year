// Javier M. Raut
// CS1D - LN5 - E5
// Occurence of Max Numbers

#include <iostream>

using namespace std;

int main() {
    // Declare max bucket and counter
    int max = 0, count = 0;

    // Ask for user input
    cout << "Enter numbers: ";

    // Loop through the input
    while (true) {
        float num;
        cin >> num;

        // Checks if the input is 0 then break the while loop
        if (num == 0) {
            break;
        }

        // if num is greater than max, then set num as max and reset the counter
        if (num > max) {
            max = num;
            count = 0;
        }

        // count the occurence of max
        if (max == num) {
            count++;
        }
    }

    // Display the results
    cout << "The largest number is " << max << endl;
    cout << "The occurence of the largest number is " << count << endl;

    return 0;
}