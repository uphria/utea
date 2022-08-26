def generateRow(number, row):
    from math import comb
    for item in range(number + 1):
        row[item] = comb(number, item)
        #for each item in the row, perform nCr to get result

def generateTriangle(rows, triangle):
    for row in range(1, rows+1):
        (generateRow(row-1, triangle[row-1]))
        #for the empty triangle created, populate each row with Pascal values
        #start at number = 1-1 = 0 and triangle[0], then keep going up

def printTriangle(triangle):
    for row in triangle:
        print(row)
        #print out each row of the triangle on separate lines

def createEmptyTriangle(rows):
    triangle = [[]]*rows
    #create rows number of rows[] inside a larger []
    for row in range(rows):
        triangle[row]= [1]*(row+1)
        #for each inner [], print 1's inside starting with 1 at row 0
    return triangle

