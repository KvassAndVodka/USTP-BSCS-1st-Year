// Javier M. Raut
// CS1D - LN2 - E3
// Future Investment Value

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    // Declare all Varaibles
    double investmentAmount, futureInvestmentValue, annualInterestRate, numberOfYears, monthlyInterestRate;

    // Ask for user input
    cout << "Enter investment value: ";
    cin >> investmentAmount;
    cout << "Enter annual interest rate in percentage: ";
    cin >> annualInterestRate;
    cout << "Enter number of years: ";
    cin >> numberOfYears;

    // Calculate for the future investment value
    monthlyInterestRate = annualInterestRate / 1200; 
    futureInvestmentValue = investmentAmount * (pow(1 + monthlyInterestRate, numberOfYears * 12));

    // Display Result
    cout << "Accumulated Value is $" << futureInvestmentValue;

    return 0;
}
