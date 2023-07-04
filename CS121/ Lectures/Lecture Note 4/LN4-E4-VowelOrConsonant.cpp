// Javier M. Raut
// CS1D - LN4 - E4
// Vowel or Consonant?

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(){
    // Declare input variable
    string stringLetter;

    // Ask for user input
    cout << "Enter a letter: ";
    cin >> stringLetter;

    // forgotten the point of this lmao
    const int length = stringLetter.length();
    char* charLetter = new char[length +1];
    strcpy(charLetter, stringLetter.c_str());


    // Determine of consonant or vowel then display result
    if (isalpha(charLetter[0]) && length == 1){
        if (charLetter[0] == 'A' || 
            charLetter[0] == "E' || 
            charLetter[0] == 'I' || 
            charLetter[0] == 'O' || 
            charLetter[0] == 'U' ||
            charLetter[0] == 'a' || 
            charLetter[0] == 'e' || 
            charLetter[0] == 'i' || 
            charLetter[0] == 'o' || 
            charLetter[0] == 'u' )
            cout << charLetter << " is a vowel";
        else
            cout << charLetter << " is a consonant";
    }
    else
        cout << stringLetter << " is an invalid input";

    return 0;
}
