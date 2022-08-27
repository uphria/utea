from string import punctuation
def isStrong(password):
    if len(password) < 8:
        return False
    specialCharFound = False
    digitFound = False
    upperCaseFound = False
    index = 0
    while index < len(password) and not (specialCharFound and digitFound and upperCaseFound):
        #not returns true when the statement is false, so while char digit and upppercase are not all true which doesn't fullfil the and condition, 
        #it will keep returning false until all 3 are true and fulfill the and condition, then the whle becomes false
        if password[index].upper():
            upperCaseFound = True
        if password[index].isdigit():
            digitFound = True
        if password[index] in punctuation:
            specialCharFound = True
        index += 1
    return specialCharFound and digitFound and upperCaseFound