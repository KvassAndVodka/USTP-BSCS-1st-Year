#include <iostream>

using namespace std;

class LinearEquation{
private:
    double a, b, c, d, e, f;

public:
    LinearEquation(double a, double b, double c, double d, double e, double f){
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->e = e;
        this->f = f;
    }

    double getA(){
        return a;
    }

    double getB(){
        return b;
    }

    double getC(){
        return c;
    }

    double getD(){
        return d;
    }

    double getE(){
        return e;
    }
    
    double getF(){
        return f;
    }

    bool isSolvable(){
        return (a * d - b * c) != 0;
    }

    double getX(){
        return (e * d - b * f) / (a * d - b * c);
    }

    double getY(){
        return (a * f - e * c ) / (a * d - b * c);
    }

    void equate(){
        if (isSolvable()){
            cout << "The value of x is " << getX() << endl;
            cout << "The value of y is " << getY() << endl;
        }
        else {
            cout << "The equation has no solution.";
        }
    }
};

int main(){
    double a, b, c, d, e, f;

    cout << "Enter coeffecients a, b, c, d, e, and f: ";
    cin >> a >> b >> c >> d >> e >> f;

    
    LinearEquation problem1(a, b, c, d, e, f);
    cout << "A: " << problem1.getA() << "   ";
    cout << "B: " << problem1.getB() << "   ";
    cout << "C: " << problem1.getC() << "   ";
    cout << "D: " << problem1.getD() << "   ";
    cout << "E: " << problem1.getE() << "   ";
    cout << "F: " << problem1.getF() << endl;
    problem1.equate();

    return 0;
}0oloo0