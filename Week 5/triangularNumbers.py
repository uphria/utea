import math

def strMat(array):
    strTable = ""
    for row in array:
        rowStr = ""
        for col in row:
            rowStr += str(col) + " "
        strTable += rowStr
        strTable += "\n\n"
    return strTable

def createTriangularNumber(term, symbol):
    i = 1
    allArr = []
    if term < 1:
        print("Invalid term")
    for i in range(term + 1):
        triArr = [[" "]*(2*i-1) for _ in range(i)]
        #if you do [[0]*(2*i-1)]*i, that makes 5 references to the
        #SAME LIST. if want many different lists, make the first list
        #over a range of values
        k = 0
        for j in range(i-1, -1, -1):
            for l in range (k, 2*i - 1 - k, 2):
                triArr[j][l] = symbol
            k += 1
        allArr += triArr
    return allArr   

term = int(input("How many terms? "))
symbol = input("What symbol for the triangles? ")
print(strMat(createTriangularNumber(term, symbol)))