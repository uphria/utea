def min(first, second):
    if first <= second:
        return first
    return second

def max(first, second):
    if first >= second:
        return first
    return second

def average(total, items):
    if items != 0:
        return round(total/items, 2)
    return 0

def userData():
    items = 0
    avg = 0
    total = 0
    low = 0
    high = 0
    next = True
    number = input("Enter a number (q to quit): ")
    while (next):
        if number == 'q' or number == 'Q':
            next = False
        else:
            items += 1
            if items == 1:
                low = int(number)
            total += int(number)
            low = min(int(number), low)
            high = max(int(number), high)
            number = input("Enter a number (q to quit): ")
    avg = average(total, items)
    print("You entered " + str(items) + " numbers.\n"\
            "The lowest number was " + str(low) + "\n"\
            "The highest number was " + str(high) + "\n"\
            "The average was: " + str(avg) + "\n"
        
        )

userData()