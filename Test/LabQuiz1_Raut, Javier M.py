## Problem 1
print("Feet to meter converter.")

## line to input length in feet
feet = float(input("Feet: "))

## Convertion formula
feetToMeter = feet * 0.305

## Prints
print(feet, " feet is equal to ", feetToMeter ," meters")


## Problem 2
print("Digits adder")

## Input
num = int(input("Enter an integer between 0 to 1000: "))
total=0

## Formula
if 0 <= num <= 1000:
    x = num % 10
    y = (num // 10) % 10
    z = num // 100
    print("The sum of all its digits is", x + y + z)

else:
    print("This number is invalid.")
