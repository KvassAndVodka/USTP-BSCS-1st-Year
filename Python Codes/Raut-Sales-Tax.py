#RAUT, Javier M.
#CS1A

#Problem 1

#Input for sales and taxation
print("Sales Tax Calculator")
sales=(float(input("Please input your sales: ")))                           #Input for the Sales
rateOfTaxation=(float(input("Please input the Rate of Taxation:")))         #Input for Rate of Taxation

#Algorithm
if 0 <= rateOfTaxation <= 100:                                              #Checks if the taxation rate is between 0 to 100 percent
    salesTax=((sales / 100) * rateOfTaxation)                               #Formula for the Sales Tax
    print("Your Sales Tax is :", round(salesTax, 2))                        #Prints the result

else:
    print("The Rate of Taxation is Invalid")                                #Shows when the rate of taxation is negative or above 100 percent
