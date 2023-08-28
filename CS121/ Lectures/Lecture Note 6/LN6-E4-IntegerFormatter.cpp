// Javier M. Raut
// CS1D - L6 - E4
// Format an integer

#include <iostream>
#include <string>

using namespace std;

string format(int number, int width) {
    string str = to_string(number);
    int len = str.length();
    
    if (len > width) {
        cout << str;
    }

    for(int i = len; i < width; i++){
        cout << "0";
    }
    
    return str;
}

int main() {
    int number = 0, width = 0;
    
    cout << "Number: ";
    cin >> number;
    cout << "Width: ";
    cin >> width;
    format(number, width);


    return 0;
}