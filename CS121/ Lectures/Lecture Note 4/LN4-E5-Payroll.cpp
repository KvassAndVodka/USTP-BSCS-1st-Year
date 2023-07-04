// Javier M. Raut
// CS1D - LN4 - E5
// Payroll

#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main() {
    // Declare Variables
    string employeeName;
    double hoursWorked, payRate, federalTaxRate, stateTaxRate;

    
    // User Inputs
    cout << "Enter employee's name: ";
    getline(cin, employeeName);
    
    cout << "Enter number of hours worked in a week: ";
    cin >> hoursWorked;

    cout << "Enter hourly pay rate: ";
    cin >> payRate;

    cout << "Enter federal tax withholding rate: ";
    cin >> federalTaxRate;

    cout << "Enter state tax withholding rate: ";
    cin >> stateTaxRate;


    // Payroll calculations
    double grossPay = payRate * hoursWorked;
    double federalTax = federalTaxRate * 100;
    double stateTax = federalTaxRate * grossPay;
    double deductedFederalTax = federalTaxRate * grossPay;
    double deductedStateTax = stateTaxRate * grossPay;
    double totalDeduction = deductedFederalTax + deductedStateTax;
    double netPay = grossPay - totalDeduction;

    // Display Results
    cout << "\nEmployee Name: " << employeeName << endl;
    cout << "Hours Worked: " << hoursWorked << endl;
    cout << "Pay Rate: $"; printf("%.2f", payRate); cout << endl;
    cout << "Gross Pay: $"; printf("%.2f", grossPay); cout << endl;
    cout << "Deductions: " << endl;
    cout << "   Federal Witholding (" << federalTax << "%): $"; printf("%.2f", deductedFederalTax); cout << endl;
    cout << "   State Witholding (" << stateTax << "%): $"; printf("%.2f", deductedStateTax); cout << endl;
    cout << "   Total Deduction: $"; printf("%.2f", totalDeduction); cout << endl;
    cout << "Net Pay: $"; printf("%.2f", netPay);

    
    return 0;
}
