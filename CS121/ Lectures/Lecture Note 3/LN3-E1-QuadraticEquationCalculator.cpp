// Javier M. Raut
// CS1D - LN3 - E1
// Quadratic Equation Calculator

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    // Declare Variables
    double a, b, c, discriminant, root1, root2;

    // Ask for user input
    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;

    // Calculate the discriminant and both roots 1 and 2
    discriminant = pow(b, 2) - 4 * a * c;
    root1 = ((-1 * b) + sqrt(discriminant)) / 2 * a;
    root2 = ((-1 * b) - sqrt(discriminant)) / 2 * a;

    // Display Result
    if (discriminant > 0){
        cout << "The roots are " << root1 << " and " << root2;
    } else if (discriminant == 0){
        cout << "The root is " << root1;
    } else{
        cout << "The equation has no real roots";
    }
    
    return 0; 
}
