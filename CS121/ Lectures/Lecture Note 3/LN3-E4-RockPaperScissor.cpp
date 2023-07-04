// Javier M. Raut
// CS1D - LN3 - E4
// Rock, Paper, Scissor

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    // Declare computer-generated number variable 'gen', and user-inputted variable 'user'
    int gen, user;

    // Ask for user input
    cout << "scissor (0), rock (1), paper (2): ";
    cin >> user;

    // Random number generator for int gen
    srand(time(0));
    gen = rand() % 3;


    // Display gen and user
    const string choice[3] = {"scissors", "rock", "paper"};
    cout << "The computer is " << gen[choice] << ". You are " << user[choice];

    // Logic for Winner/Loser
    if(user == gen){
        cout << ". It is a draw.";
    } else if((user == 0 && gen == 2) ||
              (user == 1 && gen == 0) ||
              (user == 2 && gen == 1)){
                cout << ". You win.";
    } else{
        cout << ". You lose.";
    }

    return 0;
}
