// Javier M. Raut
// CS1D - LN5 - E2
// Common Prefix Detector

#include <iostream>
#include <string>

using namespace std;

int main() {
    // Declare string 1 and 2 and ask for user input
    string str1, str2;
    cout << "Enter s1: ";
    getline(cin, str1);
    cout << "Enter s2: ";
    getline(cin, str2);

    // Measure string length
    int len = min(str1.length(), str2.length());

    int i;
    for (i = 0; i < len; i++) {
        if (str1[i] != str2[i])
            break;
    }

    // Checks if there is common prefix or not
    if (i == 0) {
        cout << str1 << " and " << str2 << " have no common prefix";
    }
    else{
        string prefix = str1.substr(0, i);
        for (int j = i; j > 0; j--) {
            if (str1.substr(0, j) == prefix.substr(0, j)) {
                cout << "The common prefix is " << prefix.substr(0, j) << endl;
                return 0;
            }
        }
    }
    
    return 0;
    
}