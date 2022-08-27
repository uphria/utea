import rps

print("Welcome to Rock Paper Scissors")
choice = input("Select a for 2 players choosing randomly, " + \
        "b for a player choosing randomly and the computer choosing according " + \
        "to strategy, or c for a player choosing according to " + \
        "experimental findings and the computer choosing according " + \
        "to strategy (a/b/c): "
        )
next1 = True
next2 = True
next3 = True
total = 0
total1 = 0
arrb = []
arrb1 = []
arrc = []
arrc1 = []
if choice == 'a':
    while next1:
        yn = input("Would you like to continue with mode a? (y/n) ")
        if yn == "y":
            result = rps.choiceA()
            print("The winning choice is: " + result)
        else:
            next1 = False
elif choice == 'b':
    while next2:
        yn = input("Would you like to continue with mode b? (y/n) ")
        if yn == "y":
            result, arrb, arrb1 = rps.choiceB(total, arrb, arrb1)
            print("The winning choice is: " + result)
            total += 1
        else:
            next2 = False
elif choice == 'c':
    while next3:
        yn = input("Would you like to continue with mode c? (y/n) ")
        if yn == "y":
            result, arrc, arrc1 = rps.choiceC(total1, arrc, arrc1)
            print("The winning choice is: " + result)
            total1 += 1
        else:
            next3 = False
else:
    print("Invalid selection")