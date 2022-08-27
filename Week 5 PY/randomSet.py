import random

def isSet(items):
    index = 1
    for item in items:
        #for one item, compare with the rest of items - items[index:]
        if (item in items[index:]): #if item is in the rest of items
            return False
        index += 1
    return True

def generateRandomSetAlternative(items, low, high):
    candidates = range(low, high + 1)
    return random.sample(candidates, items)
#alt for generateRandomSet, using random.sample

def generateRandomSet(items, low, high):
    aSet = []
    index = 0
    while (index < items):
        newItem = random.randint(low, high)
        if (newItem not in aSet):
            aSet.append(newItem)
            index += 1
    return aSet

print(isSet([3, 12, 7, 32, 43, 1]))
print(isSet([3, 12, 3, 32, 43, 1]))
print(generateRandomSetAlternative(5, 1, 10))
print(generateRandomSet(7, 3, 20))