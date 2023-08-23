#include <iostream>
#include <cmath>
using namespace std;

class QuadraticEquation{
private:
    double a, b, c;
    
public:
    QuadraticEquation(double a, double b, double c){
        this->a = a;
        this->b = b;
        this->c = c;
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

    double getDiscriminant(){
        return b * b - (4 * a * c);
    }

    double getRoot1(){
        return (-b + sqrt(b * b - (4 * a * c))) / (2 * a);
    }

    double getRoot2(){
        return (-b - sqrt(b * b - (4 * a * c))) / (2 * a);
    }    

    void equate(){
        if (getDiscriminant() > 0){
            cout << "r1: " << getRoot1() << endl;
            cout << "r2: " << getRoot2() << endl; 
        }
        else if (getDiscriminant() == 0){
            cout << "The root is: " << getRoot1() << endl;
        }
        else {
            cout << "The equation has no real roots" << endl;
        }
    }
};

int main(){
    double a, b, c;

    cout << "Enter the values for a, b, and c: ";
    cin >> a >> b >> c;

    QuadraticEquation equation1(a, b, c);
    equation1.equate();

    return 0;
}
