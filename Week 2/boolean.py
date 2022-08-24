def DandE(input):
    #return true if digit AND even
    #the example code had no brackets, but that one returned true for 4.33 --> not even so need brackets
    return (isinstance(input, float) or isinstance(input, int)) and input%2 == 0


print(DandE(2))
print(DandE(4.333))
