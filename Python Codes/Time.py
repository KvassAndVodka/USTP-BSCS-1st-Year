import time

time = time.gmtime()
hours = time[3]
minutes = time[4]
seconds = time[5]

print("The time is: " + str(hours) + ":" + str(minutes) + ":" + str(seconds))
