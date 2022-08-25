def getIndex(text, element):
    if len(text) == 0:
        return -1
    index = 0
    length = len(text)
    while index < length:
        if text[index] == element:
            return index
        index +=1
    return -1

def validEmail(email):
    indexAt = getIndex(email, "@")
    if indexAt == -1:
        return False
    else:
        indexDot = getIndex(email[indexAt:], ".")
        return indexDot != -1 and email[-1] != "." and len(email[indexAt:]) > 3

def is_vowel(letter):
    return letter == "a" or letter == "A" or \
            letter == "e" or letter == "E" or \
            letter == "i" or letter == "I" or \
            letter == "o" or letter == "O" or \
            letter == "u" or letter == "U"

def maskEmail(email):
    if not validEmail(email):
        return "Invalid email format"
    else:
        maskedEmail = ""
        index = 0
        length = len(email)
        firstHalf = len(email[:getIndex(email, "@")])
        while index < length:
            if index < firstHalf:
                if is_vowel(email[index]):
                    maskedEmail += "*"
                else:
                    maskedEmail += email[index]
                index += 1
            else:
                if is_vowel(email[index]):
                    maskedEmail += "#"
                else:
                    maskedEmail += email[index]
                index += 1
    return maskedEmail

email = "some.NameAha@notValidDomain"
print("email: " + email)
print(maskEmail(email))
email = "some.NameAha@notValidDomain."
print("email: " + email)
print(maskEmail(email))
email = "some.NameAha@notValidDomain.c"
print("email: " + email)
print(maskEmail(email))
email = "some.NameAhanotValidDomain@.c"
print("email: " + email)
print(maskEmail(email))
email = "some.NameAha@c.c"
print("email: " + email)
print(maskEmail(email))