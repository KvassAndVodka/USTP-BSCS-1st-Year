#include <iostream>
using namespace std;

int getTriangularNumber(int n) {
    return n * (n + 1) / 2;
}

int main() {
    const int num_of_TriangularNumbers = 75;
    const int line_limit = 5;

    int count = 0;
    for (int i = 1; i <= num_of_TriangularNumbers; i++) {
        cout << getTriangularNumber(i) << " ";
        count++;
        if (count == line_limit) {
            cout << endl;
            count = 0;
        }
    }

    return 0;
}