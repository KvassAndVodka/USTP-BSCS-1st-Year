// Javier M. Raut
// CS1D - LN5 - E1
// Odd-Numbered Region Probablity

#include <iostream>
#include <random>

using namespace std;

int main(){

    //Declare variables for number of trials and Odd region counter
    const int NUMBER_OF_TRIALS = 1000000;
    int OddRegionCount = 0;

    //Random number generator (Uses <random>)
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<> dis(-10, 10);


    // For loop based on the number of trials
    for(int i = 0; i < NUMBER_OF_TRIALS; i++){
        double x = dis(gen);
        double y = dis(gen);
        double sumOfXY = x + y;

        // Checks if rng is inside Region 1 or in region 3
        if(x < 0 || x > 0 && sumOfXY > 10){
            OddRegionCount++;
        }
        
    }

    // Probability calculator
    double OddRegion_prob = ((double)OddRegionCount / NUMBER_OF_TRIALS) * 100;
    cout << "The probability of a dart landing in an odd-numbered region is " << OddRegion_prob << "%" << endl;

    return 0;
}
