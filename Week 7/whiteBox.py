#white box testing checks the use of all the code including all branches and all settings of conditional expressions
#these tests make sure all the posisble branches of code have been tested:
    #if/else
    #loop exits
    #boolean
    #etc.

#for a game of chance:
def winner(number):
    if type(number) != type(1) or number < 0 or number > 21:
        return "I"
    if (0 <= number and number < 3) or (7 < number and number <= 11):
        return "W"
    else:
        return "L"

#need to test all possibilities
#not number, negative number, number greated than 21 all need to return I
#numbers 0, 1, 2, 8, 9, 10, 11 need to return W
#numbers 3, 4, 5, 6, 7, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21 need to return L