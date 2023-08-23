#include <iostream>
using namespace std;

class B {
public:
    int i;              //i is public

protected:
    int j;              //j is protected

private:
    int k;              //k is private
};

class A: public B {
public:
    void display() const {
        cout << i << endl;  //Accessible
        cout << j << endl;  //Accessible
        cout << k << endl;  //Inaccessible
    }
};

int main(){
    A a;
    cout << a.i << endl;    //Accessible
    cout << a.j << endl;    //Inaccessible
    cout << a.k << endl;    //Inacessible

    return 0;
}
