#Raut, Javier M.
#CS1A
#Functions

#3-operation calculator

#Addition Function
def add(input1, input2):
    return input1 + input2

#Subtraction Function
def subtract(input1, input2):
    return input1 - input2

#Multiplication Function
def multiply(input1, input2):
    return input1 * input2

#Menu
print("\n3-Operation Calculator")
print("Select which operation to perform:")
print("(1) Addition")
print("(2) Subtraction")
print("(3) Multiplication")
print("(4) Exit\n")


while True:
    operation = input("What operation do you want to perform?")
    if operation == '4':
            print("Program has stopped.")
            break
    
    elif operation in ('1', '2', '3'):
        input1 = float(input("\nInput the first value:"))
        input2 = float(input("Input the second value:"))
        
        if operation == '1':
            print(input1, "+", input2, "=", add(input1, input2))
    
        elif operation == '2':
            print(input1, "-", input2, "=", subtract(input1, input2))
        
    
        elif operation == '3':
            print(input1, "*", input2, "=", multiply(input1, input2))
        
    
        new_calculation = input("\nDo you want to perform a new calculation? (yes/no):")
        if new_calculation in ('yes', 'no'):
            if new_calculation == 'no':
                print("\nProgram Terminated")
                break
        else:
            print("Input is invalid \nProgram Terminated")
            break
    
    else:
        print("Invalid Input.")
