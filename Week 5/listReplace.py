import string


def toList(string1):
    strList = []
    for letter in string1:
        strList.append(letter)
    return strList

def toString(list1):
    string1 = ""
    for element in list1:
        string1 += element
    return string1

def replace(string1, go, replace):
    changes = 0
    textList = toList(string1)
    correctedText = ""
    for index in range(len(string1)):
        if textList[index] == go:
            choice = input("Replace \'" + go + "\' in position " + str(index+1) + "with \'" + replace + "\' (y/n) ")
            if choice == 'y':
                textList[index] = replace
                changes += 1
        correctedText += textList[index]
    print("There were " + str(changes) + " changes.")
    return toString(textList)

string1 = "hella there, haw are yau"
textList = toList(string1)
listStr = toString(string1)
print(listStr)
replaced = replace(string1, "a", "o")
print(replaced)