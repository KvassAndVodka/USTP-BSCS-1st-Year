#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double investmentAmount, futureInvestmentValue, annualInterestRate, numberOfYears, monthlyInterestRate;

    cout << "Enter investment value: ";
    cin >> investmentAmount;
    cout << "Enter annual interest rate in percentage: ";
    cin >> annualInterestRate;
    cout << "Enter number of years: ";
    cin >> numberOfYears;

    monthlyInterestRate = annualInterestRate / 1200; 
    futureInvestmentValue = investmentAmount * (pow(1 + monthlyInterestRate, numberOfYears * 12));

    cout << "Accumulated Value is $" << futureInvestmentValue;

    return 0;
}
