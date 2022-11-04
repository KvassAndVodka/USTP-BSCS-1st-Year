#Raut, Javier M.
#CS1A

import turtle

#Enter the first point with two float values
x1,y1 = eval(input("Enter x1 and y1 for Point 1:"))

#Enter ehe second point with two float values
x2,y2 = eval(input("Enter x2 and y2 for Point 2:"))

# Compute the distance
distance=((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))**0.5 
print("The distance between the two points is", distance)


#Linear Visualization in Turtle

#Drawing Point 1
turtle.penup()                                  #Avoid drawing a line
turtle.goto(x1, y1)                             #Going to the first coordinates in the plane
turtle.pendown()                                #Preparation for line drawing
turtle.write("Point 1")                         #Label for the first point

#Drawing Point 2
turtle.goto(x2, y2)                             #Draws the line directly to the second point
turtle.write("Point 2")                         #Label for the second point
turtle.penup()                                  #Avoid drawing another line

#Show the distance between the points
turtle.goto((x1 + x2)/2, (y1 + y2)/2)           #Algorithm for the line center and coordinates 
turtle.pendown()                                #Put pen for label
turtle.write(distance)                          #Shows the Distance of the two points

turtle.done()                                   #Avoid closing the program after execution
