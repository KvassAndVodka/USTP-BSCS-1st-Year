#include <iostream>

using namespace std;

int main(){
    double a, b, c, d, e, f;
    double x, y;
    cout << "Enter a, b, c, d, e, f: ";
    cin >> a >> b >> c >> d >> e >> f;

    double numeratorOfX = (e * d) - (b * f);
    double numeratorOfY = (a * f) - (e * c);
    double denominator = (a * d) - (b * c);

    if (denominator == 0){
        cout << "The equation has no solution." << endl;
    }
    else{
        x = (numeratorOfX / denominator);
        y = (numeratorOfY / denominator);

        cout << "x is " << x << " and y is " << y << endl;
    }
    
}
