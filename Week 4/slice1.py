def swap(data):
    swappedData = []
    if len(data)%2 == 0:
        middle = len(data)//2
        swappedData = data[middle:] + data[:middle]
    else:
        middle = len(data)//2
        swappedData.extend(data[middle+1:])
        swappedData.append(data[middle])
        swappedData.extend(data[:middle])
        #swappedData = data[middle+1:] + data[middle:middle+1] + data[:middle]
        #is the same, can't just do + data[middle] since that is an int, not list
    return swappedData

dataOdd = [1, 2, 3, 4, 5, 6, 7, 8, 9]
dataEven = [1, 2, 3, 4, 5, 6, 7, 8]
swappedOdd = swap(dataOdd)
swappedEven = swap(dataEven)
print("Original data " + str(dataOdd))
print("Swapped data " + str(swappedOdd))
print("Original data " + str(dataEven))
print("Swapped data " + str(swappedEven))