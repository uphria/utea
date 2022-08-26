#constants and helper functions
from string import digits, ascii_letters
FIRST_VALID = "ABCEGHJKLMNPRSTVXY"
NL = ["NL", "A"]
NS = ["NS", "B"]
PE = ["PE", "C"]
NB = ["NB", "E"]
QC = ["QC", "GHJ"]
ON = ["ON", "KLMNP"]
MB = ["MB", "R"]
SK = ["SK", "S"]
AB = ["AB", "T"]
BC = ["BC", "V"]
NU_NT = ["NU/NT", "X"]
YT = ["YT", "Y"]
PROVINCES = [NL, NS, PE, NB, QC, ON, MB, SK, AB, BC, NU_NT, YT]

def formatCode(code):
    postalCode = code.replace(" ", "")
    return postalCode[0].upper() + postalCode[1] + postalCode[2].upper() \
            + " " + postalCode[3] + postalCode[4].upper() + postalCode[5]

def getProvince(postalCode):
    for province in PROVINCES:
        if postalCode[0] in province[1]:
            return province[0]
    return None

def isValid(code):
    postalCode = code.replace(" ", "")
    length = len(postalCode)
    if (length != 6):
        return False
    if postalCode[0] in ascii_letters \
        and postalCode[2] in ascii_letters \
        and postalCode[4] in ascii_letters \
        and postalCode[1] in digits[1:] \
        and postalCode[3] in digits[1:] \
        and postalCode[5] in digits[1:]:
        return True
    return False