measure1 = float(input("Enter first measurement: "))
measure2 = float(input("Enter second measurement: "))
measure3 = float(input("Enter third measurement: "))
str1 = str(measure1)
str2 = str(measure2)
str3 = str(measure3)
mu = (measure1 + measure2 + measure3)/ 3
stdDev = str(round((((measure1 - mu)**2 + (measure2 - mu)**2 + (measure3 - mu)**2)/3)**0.5, 2))
print("The standard deviation for the measurements (" + str1 + ", " + str2 + ", " + str3 + ") is " + stdDev + ".")
