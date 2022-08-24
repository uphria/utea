def add(parameter):
    i = 0
    total = 0
    expression = ""
    while i <= parameter:
        total += i
        if i < parameter:
            expression += str(i) + " + "
        else:
            expression += str(i) + " = " + str(total)
        i += 1
    return expression

parameter = (int)(input("Enter a positive integer: "))
print(add(parameter))

