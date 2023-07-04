// Javier M. Raut
// CS1D - LN3 - E1
// Quadratic Equation Calculator

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a, b, c, discriminant, root1, root2;

    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;
    
    discriminant = pow(b, 2) - 4 * a * c;
    root1 = ((-1 * b) + sqrt(discriminant)) / 2 * a;
    root2 = ((-1 * b) - sqrt(discriminant)) / 2 * a;
    
    if (discriminant > 0){
        cout << "The roots are " << root1 << " and " << root2;
    } else if (discriminant == 0){
        cout << "The root is " << root1;
    } else{
        cout << "The equation has no real roots";
    }

    return 0; 
}
