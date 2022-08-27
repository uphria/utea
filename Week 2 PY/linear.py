def linear(a, b, c):
    if a != "" and float(a) != 0 and b != "" and c != "":
        return (float(c) - float(b))/float(a)
    else:
        return None

print("This calculator solves an equation of the form ax+b=c.")

a = input("Enter the value of parameter a: ")
b = input("Enter the value of parameter b: ")
c = input("Enter the value of parameter c: ")

solution = linear(a, b, c)

if solution == None:
    print("The format or values of your parameters are invalid")
else:
    print("The solution of your equation " + a + "x" + " + " + b + " = " + c + " is x = " + str(solution))