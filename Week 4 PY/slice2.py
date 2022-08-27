def getName(fullName):
    i = 0
    length = len(fullName)
    notFound = True
    while i < length and notFound:
        if fullName[i] == ' ':
            notFound = False    
        i += 1
        #if put i into the if loop, then the while loop cannot i++
    firstName = fullName[0:i]
    return firstName[0].upper() + firstName[1:].lower()


fullName = "AartiZAN Kapaku"
print("Full Name: " + fullName + \
        "\nFirst Name: " + getName(fullName)
        )