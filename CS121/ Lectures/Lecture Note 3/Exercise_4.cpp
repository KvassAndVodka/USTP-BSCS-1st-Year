#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int gen, user;
    cout << "scissor (0), rock (1), paper (2): ";
    cin >> user;

    srand(time(0));
    gen = rand() % 3;

    const string choice[3] = {"scissors", "rock", "paper"};
    cout << "The computer is " << gen[choice] << ". You are " << user[choice];

    if(user == gen){
        cout << ". It is a draw.";
    } else if((user == 0 && gen == 2) ||
              (user == 1 && gen == 0) ||
              (user == 2 && gen == 1)){
                cout << ". You win.";
    } else{
        cout << ". You lose.";
    }
}
