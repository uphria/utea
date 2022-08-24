def CtoF(input):
    return round(9/5*input+32, 2)

input = float(input("Enter temperature in celsius: "))

print(str(input) + "C = " + str(CtoF(input)) + "F")