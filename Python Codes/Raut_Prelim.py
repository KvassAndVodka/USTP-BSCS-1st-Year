#RAUT, Javier
#CS1A

#BMI CALCULATOR

#Input weight and height in pounds and inchese
weight_in_pounds = float ( input ( "Weight in pounds: " ) )
height_in_inches = float ( input ( "Height in inches: " ) )

#Check for negative values
if 0 <= weight_in_pounds:
    if 0 <= height_in_inches:
        #Calculations
        weight_in_kilograns = weight_in_pounds * 0.45359237            
        height_in_meters = height_in_inches * 0.0254
        bmi = weight_in_kilograns / ( height_in_meters ** 2 ) 
        
        #Show results
        print("Your BMI is", round (bmi, 2) )
        
        #Classification
        if bmi < 18.5:
            print ("You are underweight")
        elif bmi <= 24.9:
            print ("You are normal")
        elif bmi <= 29.9:
            print ("You are overweight")
        elif bmi <= 34.9:
            print ("You are obese class I")
        elif bmi <= 39.9:
            print ("You are obese class II")
        elif bmi >= 40:
            print ("You are obese class III")
    
    else:
        print("The value of height cannot be negative")

else:
    print("The value of weight cannot be negative")