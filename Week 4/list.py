def is_in(dataSet, item):
    if len(dataSet) == 0:
        return False
    index = 0
    items = len(dataSet)
    while index < items:
        if dataSet[index] == item:
            return True
        index += 1
    return False 

index = 0
dataSet = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
while (index < 5):
    print(dataSet)
    point = float(input("type a number to be checked: "))
    if is_in(dataSet, point):
        print(str(point) + " is in the list")
    else:
        print(str(point) + " is not in the list")
    index += 1