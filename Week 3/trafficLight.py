def nextColour(currentColour):
    if (currentColour == 'B' or currentColour == 'b'):
        print("\nGreen\n")
    elif (currentColour == 'G' or currentColour == 'g'):
        print("\nYellow\n")
    elif (currentColour == 'Y' or currentColour == 'y'):
        print("\nRed\n")
    elif (currentColour == 'R' or currentColour == 'r'):
        print("\nBlue\n")
    else:
        print("\nInvalid colour\n")

def getInput():
    next = True
    currentColour = input("Enter a colour choice (q to quit)\n(B or b, G or g, Y or y, R or r)")
    while(next):
        if (currentColour == 'Q' or currentColour == 'q'):
            next = False
        else:
            nextColour(currentColour)
            currentColour = input("Enter a colour choice (q to quit)\n(B or b, G or g, Y or y, R or r)")
    print("\nGood bye!\n")

getInput()