// Javier M. Raut
// CS1D - L6 - E5
// Display ASCII Values

#include <iostream>

using namespace std;


// Declare function for printing ASCII 
void printASCII(char ch1, char ch2, int numberPerLine) {
    for (int i = ch1; i <= ch2; i++) {
        cout << i << " ";
        numberPerLine++;
        
        if (numberPerLine == 6) {
            cout << endl;
            numberPerLine = 0;
        }
    }
    
}

int main() {
    // Declare all needed variables
    char ch1 = 'a', ch2 = 'm';
    int numberPerLine = 0;
    
    // Ask for user input
    cout << "Enter first character: ";
    cin >> ch1;
    cout << "Enter second character: ";
    cin >> ch2;

    // Function call for printASCII
    printASCII(ch1, ch2, numberPerLine);

    return 0;
}