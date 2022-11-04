#RAUT, Javier M.
#CS1A

#Problem 1:
#Write a program that displays the sales tax with
#two digits after the decimal point.

#Input for sales and taxation
print("Sales Tax Calculator")
purchaseAmount=(float(input("Please input your amount of purchase:")))

#Formula
tax = purchaseAmount * 0.06                                 #Solves the tax
roundedTax = round(tax, 2)                                  #Rounds the tax at the nearest 100th digit
decimalTax = "{:.2f}".format(roundedTax)                    #Makes the float always have 2 decimal places

#Results
print("Your sales tax is:", decimalTax)                     #Shows the result



#Spacing
print("\n")
#Spacing



#Problem 2:
#Write a program that displays current time in GMT
#(Greenwich Mean Time) in the format

import time                             #import time library

time = time.gmtime()                    #loads the GMT index
hours = time[3]                         #indexing the hours [3]
minutes = time[4]                       #indexing the minutes [4]
seconds = time[5]                       #indexing the seconds [5]

print("The time is: " + str(hours) + ":" + str(minutes) + ":" + str(seconds))                   #Displays the time


#Spacing
print("\n")
#Spacing



#Problem 3:
#Write a program that lets the user enter the interest
#rate, number of years, and loan amount, and computes
#monthly payment and total payment.

#Input for interest rate, years of loan payment, and loan amount
monthlyInterestRate=((float(input("Annual Interest Rate:"))) / 1200)                    #Input for Annual Interest Rate and directly converts it into monthly rate
numberOfYears=(float(input("Number of Years:")))                                        #Input for Number of Years to pay
loanAmount=(float(input("Loan Amount:")))                                               #Input for the ammount of loan

#Formulas for the Monthly and Total Payment
monthlyPayment = ((loanAmount * monthlyInterestRate) / (1 - (1 / (1 + monthlyInterestRate) ** (numberOfYears * 12))))           
totalPayment = monthlyPayment * numberOfYears * 12

#Show Results
print("Your Monthly Payment is", round(monthlyPayment, 2))              #Shows Montly Payment
print("Your Total Payment is", round(totalPayment, 2))                  #Shows Total Payment
