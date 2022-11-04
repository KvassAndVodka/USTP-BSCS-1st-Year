#Write a program that lets the user enter the interest
#rate, number of years, and loan amount, and computes
#monthly payment and total payment.

#Input for interest rate, years of loan payment, and loan amount
monthlyInterestRate=((float(input("Annual Interest Rate:"))) / 1200)
numberOfYears=(float(input("Number of Years:")))
loanAmount=(float(input("Loan Amount:")))

#Display monthly and total payment 
monthlyPayment = ((loanAmount * monthlyInterestRate) / (1 - (1 / (1 + monthlyInterestRate) ** (numberOfYears * 12))))
totalPayment = monthlyPayment * numberOfYears * 12

#Show Results
print("Your Monthly Payment is", round(monthlyPayment, 2))
print("Your Total Payment is", round(totalPayment, 2))
