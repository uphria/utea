def is_identity(matrix):
    zero, one, row, rows = True, True, 0, len(matrix)
    while row < rows and zero and one:
        cols, col = len(matrix[row]), 0
        if cols != rows:
            return False
        while col < cols and one and zero:
            if col == row and matrix[row][col] != 1:
                one = False
            elif col != row and matrix[row][col] != 0:
                zero = False
            col += 1
        row += 1
    return zero and one

matrix = [[1, 0, 0], [0, 1, 0], [0, 0, 1]]
print(is_identity(matrix))