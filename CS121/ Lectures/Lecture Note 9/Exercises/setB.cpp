#include <iostream>

using namespace std;

class MyInteger{
private:
    int value;

public:    
    MyInteger(int input){
        this->value = input;
    }

    const bool isEven(){
        return (value % 2) != 0;
    }
    
    const bool isOdd(){
        
    }
    
    const bool isPrime(){
        
    }

    static bool isEven(int){
        return (value % 2) != 0;
    }
    
    static bool isOdd(int){
        
    }
    
    static bool isPrime(int){

    }
    
    static bool isEven(const MyInteger&){
        
    }

    static bool isodd(const MyInteger&){

    }
    
    static bool isPrime(const MyInteger&){
    
    }

    const bool equals (int){

    }
    const bool equals(const MyInteger&){

    }

    static int parseInt(const string&){
        
    }
};

int main(){
    int input;

    cout << "Enter an integer: ";
    cin >> input;

    MyInteger integer1(input);
    integer1.isEven
    return 0;
}