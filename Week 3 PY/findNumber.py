import random

def guess():
    answer = input("Is the number >= 5? ")
    if answer == 'y':
        answer = input("Is number >= 7? ")
        if answer == 'y':
            answer = input("Is number > 7? ")
            if answer == 'y':
                return 8
            else:
                return 7
        else:
            answer - input("Is number < 6? ")
            if answer == 'y':
                return 5
            else:
                return 6
    else:
        answer = input("Is number >= 3? ")
        if answer == 'y':
            answer = input("Is number > 3? ")
            if answer == 'y':
                return 4
            else:
                return 3
        else:
            answer = input("Is number > 1? ")
            if answer == 'y':
                return 2
            else:
                return 1

print("A secret number generated is: " + str(random.randint(1,8)))
print("The guessed number is: " + str(guess()))
