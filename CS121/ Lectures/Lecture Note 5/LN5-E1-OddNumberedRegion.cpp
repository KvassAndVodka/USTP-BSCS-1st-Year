// Javier M. Raut
// CS1D - LN5 - E1
// Odd-Numbered Region Probablity

#include <iostream>
#include <random>

using namespace std;

int main(){
    const int NUMBER_OF_TRIALS = 1000000;
    int OddRegionCount = 0;

    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<> dis(-10, 10);

    for(int i = 0; i < NUMBER_OF_TRIALS; i++){
        double x = dis(gen);
        double y = dis(gen);
        double sumOfXY = x + y;

        if(x < 0 || x > 0 && sumOfXY > 10){
            OddRegionCount++;
        }
        
    }

    double OddRegion_prob = ((double)OddRegionCount / NUMBER_OF_TRIALS) * 100;
    cout << "The probability of a dart landing in an odd-numbered region is " << OddRegion_prob << "%" << endl;

    return 0;
}
