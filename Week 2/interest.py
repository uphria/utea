def firstDecimal(num):
    return int(num%1*10)
#if you don't use firstDecimal, with or without the round function in simple, the str output takes the int and str's it

def interest(rate, principle):
    simple = round(rate/100 * principle, 2)
    output = "$" + str(int(simple)) + "." + \
        str(firstDecimal(simple)) + str(firstDecimal(simple*10))
    return output

rate = input("Enter the interest rate as a percentage: ")
principle = input("Enter the principle of the loan: ")
print("Your simple interest amount is " + interest(float(rate), float(principle)))