#include <iostream>
#include <string>

using namespace std;

class StringSorter {
public:
    string sort(string& s){
        int n = s.length();

        for (int i = 0; i < n - 1; ++i) {
            for (int j = 0; j < n - i - 1; ++j) {
                if (s[j] > s[j + 1]) {
                    char temp = s[j];
                    s[j] = s[j + 1];
                    s[j + 1] = temp;
                }
            }
        }
        return s;
    }
};

int main(){
    string s;

    cout << "Enter a string s: ";
    getline(cin , s);

    StringSorter string1;
    string display = string1.sort(s);

    cout << "The sorted string is " << display << endl;
    
    return 0;   
}