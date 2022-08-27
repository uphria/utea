MAX_FACES = 10
MIN_FACES = 3
DICE = 10
MAX_TRIALS = 1000
MIN_TRIALS = 10

def simulateDice(faces, dice):
    faces = min(max(faces, MIN_FACES), MAX_FACES)
    #at least min faces, not more than max faces
    dice = min(dice, DICE)
    #not more than 10 dice
    from random import randint
    total = 0
    for die in range(dice):
        total += randint(1, faces)
    return total

def generateData(faces, dice, trials, data):
    trials = min(max(trials, MIN_TRIALS), MAX_TRIALS)
    for trial in range(dice):
        outcome = simulateDice(faces, dice)
        data[outcome-dice] += 1
        #print how many times x outcome has happened
        #originally data = [0, 0, 0, etc.]
        #so the 0 at index 0 means 0 outcomes of 1 
        #if there is a 4 at index 5, that means 4 outcomes of 5

def createGraph(datax, datay, title, horlabel, verlabel):
    import matplotlib.pyplot as plt
    plt.bar(datax, datay)
    plt.ylabel(verlabel)
    plt.xlabel(horlabel)
    plt.title(title)
    print("ctr c to quit")
    plt.show()