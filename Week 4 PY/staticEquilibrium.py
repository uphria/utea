import random

def makeQ(wn):
    randWeight = ["    ", "    ", "    ", "    ", "    ", "_/\\_", "    ", "    ", "    ", "    ", "    "]
    randRul = [0, 1, 2, 3, 4, 6, 7, 8, 9, 10]
    i = 0
    while i < wn:
        randArr = random.randint(1, 10)
        randPos = random.choice(randRul)
        randWeight[randPos] = randArr
        randRul.remove(randPos)
        i += 1
    j = 0
    lenR = len(ruler)
    strR = ""
    while j < lenR:
        strR += str(ruler[j]) + "m   "
        j += 1
    k = 0
    lenW = len(randWeight)
    strW = ""
    while k < lenW:
        if randWeight[k] == "    " or randWeight[k] == "_/\\_":
            strW += randWeight[k] + "   "
        elif randWeight[k] == 10:
            strW += str(randWeight[k]) + " N   "
        else:
            strW += str(randWeight[k]) + "  N   "
        k += 1
    print(strR), print(strW)
    return randWeight

def findAns(ruler, randWeight):
    l = 0
    Tneg = 0
    Tpos = 0
    while l < 11:
        if randWeight[l] != "    " and randWeight[l] != "_/\\_":
            if l < 5:
                Tneg += randWeight[l]*(0.5-ruler[l])
            elif l > 5:
                Tpos += round(randWeight[l]*(ruler[l]-0.5), 1)
        l += 1
    if Tneg > Tpos:
        return "a"
    elif Tneg == Tpos:
        return "b"
    else:
        return "c"

def numWeights(answer, ruler, w1, wn, total, win):
    if answer == findAns(ruler, w1):
        print("correct")
        wn += 1
        win += 1
    else:
        print("incorrect")
        wn -= 1
    if wn == 0:
        wn = 1
    total += 1
    return wn, total, win

def endQ(win, total):
    print("You got " + str(win) + " out of " + str(total))

print("Welcome to static equilibrium quiz: ")
weights = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
ruler = [0.0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0]
wn = 5
total = 0
win = 0
next = True
while next:
    yn = input("Would you like to continue (y/n)? ")
    if yn == 'y':
        w1 = makeQ(wn)
        print("Choose the correct answer (a, b, c):")
        answer = input("a) spin left   b)equilibrium   c)spin right   ")
        wn, total, win = numWeights(answer, ruler, w1, wn, total, win)
    else:
        endQ(win, total)
        next = False