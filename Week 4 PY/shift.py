def shift(items, shiftStep):
    length = len(items)
    key = shiftStep % length
    if key > 0:
        return items[length - key:] + items[:length - key]
        #stuff after length - key go in front, stuff before that go after
    else:
        return items[key*-1:] + items[:key*-1]
        #whatevery key is, the positive value index and beyond goes first, before that goes next

items = [1, 2, 3, 4, 5, 6]

print(shift(items, -2))
print(shift(items, -7))
print(shift(items, 1))

alphabet = ["a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"]
print(shift(alphabet, 1))