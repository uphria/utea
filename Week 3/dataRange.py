def updateTotal(total, low, high, number):
    if low <= number and number <= high:
        print("Data point: " + str(number) + " added")
        return total + number
    return total

def updateItems(items, low, high, number):
    if low <= number and number <= high:
        return items + 1
    return items

def average(fileName, low, high):
    dataFile = open(fileName, 'r')
    items = 0
    total = 0
    #read first line
    number = dataFile.readline()
    next = True
    if (not number):
        next = False
        #in the case that the file is empty, so that the total and items functions don't malfunction
    while (next):
        if (not number):
            next = False
        else:
            total = updateTotal(total, low, high, float(number))
            items = updateItems(items, low, high, float(number))
            number = dataFile.readline()
    if items != 0:
        dataFile.close()
        return round(total/items, 2)
    dataFile.close()
    return None

fileName = input("Enter file name: ")
low = float(input("Enter the low boundary: "))
high = float(input("Enter the high boundary: "))
if low <= high:
    avg = average(fileName, low, high)
    print("The data in the range (" + str(low) + ", " + str(high) + ") have an average: " + str(avg))
else:
    print("Incorrect boundaries!")