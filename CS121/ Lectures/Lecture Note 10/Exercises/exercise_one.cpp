#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>

using namespace std;

class Anagram {
public:
    Anagram() {
    }

    bool isAnagram(const string& s1, const string& s2) {
        if (s1.length() != s2.length()) {
            return false;
        }

        string s1Sorted(s1);
        string s2Sorted(s2);
        sort(s1Sorted.begin(), s1Sorted.end());
        sort(s2Sorted.begin(), s2Sorted.end());

        return (s1Sorted == s2Sorted);
    }
};

int main() {
    string s1, s2;

    cout << "Enter the first string: ";
    getline(cin, s1);

    cout << "Enter the second string: ";
    getline(cin, s2);

    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

    Anagram anagramObj;

    if (anagramObj.isAnagram(s1, s2)) {
        cout << "The strings are anagrams." << endl;
    }
    else {
        cout << "The strings are not anagrams." << endl;
    }

    return 0;
}