def shuffle(list1, list2):
    if (len(list1) != len(list2)):
        return None
    length = len(list1)
    i = 0
    shuffled = []
    while i < length:
        shuffled.append(list1[i])
        shuffled.append(list2[i])
        i += 1
    return shuffled

list1 = [1, 3, 5, 7]
list2 = [2, 4, 6, 8]
print("first list: " + str(list1))
print("second list: " + str(list2))
print("combined list: " + str(shuffle(list1, list2)))