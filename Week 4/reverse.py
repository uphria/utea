def reverse(word):
    length = len(word)
    i = length - 1
    newWord = ""
    while i >= 0:
        #start at max value and keep going down to get reverse
        char = word[i].lower()
        if char != 'a' and char != 'e' and char != 'i' and char != 'o' and char != 'u':
            newWord += char
        i -= 1
    return newWord

word = "Thunderbolt"
print (word + " will become " + reverse(word))