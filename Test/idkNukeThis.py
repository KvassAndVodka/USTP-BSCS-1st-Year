## Input time in seconds
seconds = int(input("Number of Seconds: "))


## Formulas for minutes and hours
minutes = int(seconds // 60)
hours = int(seconds // 3600)


## Prints
print("Number of Hours:", hours)
print("Number of Minutes:", minutes)


## Problem 2
## Input
num = int(input("Enter an integer between 0 to 1000: "))
total=0


## Formula
while (num > 0):
    total += (num % 10)
    num //=10

    
##Prints
print ("The sum is:", total)



## Problem 2
## Input
number = (int(input("Input your 4 digit number: ")))
total = 0

while (number > 0):
    digits = number % 10
    number = number // 10
    total = total + number
print("The sum is", sum_of_digits)
a
