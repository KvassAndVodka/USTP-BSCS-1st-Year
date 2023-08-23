#include <iostream>
#include <vector>

using namespace std;

void displayVector(vector<int> intVector) {
    for (int i = 0; i < intVector.size(); i++){
        cout << intVector[i] << " ";

    }
}


int main() {

    //vector<elementType> vectorName;
    vector<int> intVector(5, 0); //use int for Integers
    vector<string> stringVector; //vector for strings
    
    intVector.push_back(5);

    displayVector(intVector);

    return 0;
}