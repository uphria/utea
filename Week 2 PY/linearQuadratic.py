def main(a, b, c, m, d):
    if a == "" or b == "" or c == "" or m == "" or d == "":
        print("The values of your parameters are invalid!")
    else:
        b1 = float(b) - float(m)
        c1 = float(c) - float(d)
        discriminant = b1**2 - (4*float(a)*c1)
        if discriminant >= 0:
            x1 = (-b1 + discriminant**0.5)/(2*float(a))
            x2 = (-b1 - discriminant**0.5)/(2*float(a))
            if x1 == x2:
                y = x1*float(m) + float(d)
                print("The solution of your linear quadratic system is:\n(x , y) = (" + str(x1) + " , " + str(y) + ")")
            else:
                y1 = x1*float(m) + float(d)
                y2 = x2*float(m) + float(d)
                print("The solutions of your linear quadratic system are:\n(x1 , y1) = (" + str(x1) + " , " + str(y1) + ")\n(x2 , y2) = (" + str(x2) + " , " + str(y2) + ")")
        else:
            print("There is no solution for this linear quadratic system")
print("This calculator solves a linear quadratic system.\ny=ax^2+bx+c\ny=mx+d")
a = input("Enter the value of parameter a: ")
b = input("Enter the value of parameter b: ")
c = input("Enter the value of parameter c: ")
m = input("Enter the value of parameter m: ")
d = input("Enter the value of parameter d: ")
main(a, b, c, m, d)
