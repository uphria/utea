import random

def throw():
    return random.randint(1, 6) + random.randint(1, 6)

def highlow(choice, outcome):
    if (choice == 'l' and outcome < 7) or (choice == 'h' and outcome > 7):
        return 1
    elif outcome == 7:
        return 0
    else:
        return -1
def statement(choice, result, outcome):
    if result == 1:
        winlose = "won"
    elif result == 0:
        winlose = "tied"
    elif result == -1:
        winlose = "lost"
    return "you chose " + choice + "\ntotal was " + str(outcome) + "\nyou " + winlose + "!"

choice = input("Choose\'h\' for high or \'l\' for low: ")
outcome = throw()
result = highlow(choice, outcome)
print("---------------")
print(statement(choice, result, outcome))
print("---------------")
