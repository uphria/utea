def CandF (temp, unit):
    if unit == 'C':
        temperature = round(9/5*temp + 32, 2)
        unit1 = 'F'
    else:
        temperature = round(5/9*(temp-32), 2)
        unit1 = 'C'
    return str(temperature) + unit1

temp = float(input("Enter the temperature: "))
unit = input("Enter the unit (C for Celsius and F for Fahrenheit): ")
print("You entered a temeprature of " + str(temp) + unit + " which is " + CandF(temp, unit))