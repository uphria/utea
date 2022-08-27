CHOICE_VALID = ["R", "P", "S"]
import random
loses_to = {
    "R": "S",
    "P": "R",
    "S": "P",
}

def winCondition(p1, p2):
    if p1 not in CHOICE_VALID or p2 not in CHOICE_VALID:
        print("Invalid selection")
    if p2 == loses_to[p1]:
        return p1
    elif p1 == loses_to[p2]:
        return p2
    else:
        return "tie"

def choiceA():
    p1a = random.choice(CHOICE_VALID)
    p2a = random.choice(CHOICE_VALID)
    print(p1a)
    print(p2a)
    return winCondition(p1a, p2a)

def bComp(total, arrb, arrb1):
    if total == 0:
        p1b = random.choice(CHOICE_VALID)
        p2b = random.choice(CHOICE_VALID)
        arrb += p2b
        arrb1 += p1b
    else:
        temp = arrb[0]
        temp1 = arrb1[0]
        if temp1 != winCondition(temp1, temp):
            p2b = temp
        else:
            p2b = random.choice(CHOICE_VALID)
            while p2b in arrb:
                p2b = random.choice(CHOICE_VALID)
        arrb[0] = p2b
        p1b = random.choice(CHOICE_VALID)
        arrb1[0] = p1b
    return p2b, arrb, p1b, arrb1

def choiceB(total, arrb, arrb1):
    p2b, arrb, p1b, arrb1 = bComp(total, arrb, arrb1)
    print(p1b)
    print(p2b)
    return winCondition(p1b, p2b), arrb, arrb1

def compC(total1, arrc, arrc1):
    if total1 == 0:
        print("test")
        p1c = random.choice(CHOICE_VALID)
        p2c = random.choice(CHOICE_VALID)
        arrc += p2c
        arrc1 += p1c
        arrc1 += p2c
    else:
        print("test")
        tempc = arrc[0]
        tempc1 = arrc1[0]
        if tempc == winCondition(tempc1, tempc):
            print("prev comp win")
            p2c = tempc
            p1c = random.choice(CHOICE_VALID)
            while p1c in arrc1:
                p1c = random.choice(CHOICE_VALID)
        elif tempc1 == winCondition(tempc1, tempc):     
            print("prev per win")
            p1c = tempc
            p2c = random.choice(CHOICE_VALID)
            while p2c in arrc:
                p2c = random.choice(CHOICE_VALID)
        else:
            print("prev tie")
            p1c = random.choice(CHOICE_VALID)
            while p1c in arrc1:
                p1c = random.choice(CHOICE_VALID)
            p2c = random.choice(CHOICE_VALID)
        arrc[0] = p2c
        arrc1[0] = p1c
        arrc1[1] = p2c
    return p1c, p2c, arrc, arrc1

def choiceC(total1, arrc, arrc1):
    p1c, p2c, arrc, arrc1 = compC(total1, arrc, arrc1)
    print(p1c)
    print(p2c)
    return winCondition(p1c, p2c), arrc, arrc1

#computer
#win - play the same thing
#lose - play something else

#human experimental
#lose - play what didn't come up, winner will continue with same choice
#win - play what loser played, loser will play that didn't come up
#draw - choose randomly