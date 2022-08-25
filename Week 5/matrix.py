def strMat(table):
    strTable = ""
    for row in table:
        rowStr = ""
        for el in row:
            rowStr += str(el) + " "
        strTable += rowStr
        strTable += "\n"
    return strTable

def transpose(omatrix):
    rowA = len(omatrix)
    colA = len(omatrix[0])
    tmatrix = []
    for row in range(colA):
        row_t = []
        for col in range(rowA):
            row_t.append(omatrix[col][row])
            #basically flip the matrix rectangle, then look at indices
        tmatrix.append(row_t)
    return tmatrix

A = [[2, 3, 4], [1, 5, 8]]
print(strMat(transpose(A)))