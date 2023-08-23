// Javier M. Raut
// CS1D - LN5 - E2
// Common Prefix Detector

#include <iostream>

using namespace std;

int main(){
    string str1, str2;
    cout << "Enter s1: ";
    getline(cin, str1);
    cout << "Enter s2: ";
    getline(cin, str2);

    int len = min(str1.length(), str2.length());

    int i;
    for (i = 0; i < len; i++){
        if (str1[i] != str2[i])
            break;
    }

    if (i == 0){
        cout << "No common prefix";
    }
    else{
        string prefix = str1.substr(0, i);
        for (int j = i; j > 0; j--) {
            if (str1.substr(0, j) == prefix.substr(0, j)) {
                cout << "Largest common prefix: " << prefix.substr(0, j) << endl;
                return 0;
            }
        }
    }
    
    return 0;
    
}