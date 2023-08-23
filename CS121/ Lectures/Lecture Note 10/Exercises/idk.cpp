#include <iostream>
#include <string>

using namespace std;

class StringSorter {
private:
    string str;

public:
    StringSorter(const string& s) : str(s) {}

    string sort() {
        int n = str.length();

        // Bubble sort
        for (int i = 0; i < n - 1; ++i) {
            for (int j = 0; j < n - i - 1; ++j) {
                if (str[j] > str[j + 1]) {
                    // Swap characters
                    char temp = str[j];
                    str[j] = str[j + 1];
                    str[j + 1] = temp;  
                }
            }
        }

        return str;
    }

    string getString() const {
        return str;
    }
};

int main() {
    string input;
    cout << "Enter a string s: ";
    getline(cin, input);

    StringSorter sorter(input);
    string sortedString = sorter.sort();

    cout << "Sorted string: " << sortedString << endl;

    return 0;
}
