#include <iostream>
using namespace std;


int main(){
    double pi = 3.1415926, radius, length;

    cout << "Enter the radius and length of a cylinder: ";
    cin >> radius >> length; 
    
    double area = radius * radius * pi;
    double volume = area * length;
    
    cout << "The area is " << area << endl; 
    cout << "The volume is " << volume;
    
    return 0;
}
