def copy(list):
    copyList = []
    length = len(og)
    i = 0
    while i < length:
        copyList.append(og[i])
        i += 1
    return copyList

og = [1, 2, 3, 4, 5, "w"]
copied = copy(list)
copied.append("things not in the og")
print("The original data: ")
print(og)
print("The copied data: ")
print(copied)