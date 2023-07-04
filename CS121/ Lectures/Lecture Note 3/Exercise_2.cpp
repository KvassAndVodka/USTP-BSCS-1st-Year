#include <iostream>
using namespace std;

int main(){
    int num1, num2, isDivisible;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    isDivisible = num1 % num2;

    if (isDivisible == 0){
        cout << num1 << " is divisible by " << num2;
    } else{
        cout << num1 << " is not divisible by " << num2;
    }

    return 0;
}
