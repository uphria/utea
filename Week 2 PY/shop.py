def main():
    isOntario = input("Are you shopping from Ontario? Enter Y or N: ")
    isPrice = float(input("Enter the price of the item: "))
    isAge = float(input("Enter your age: "))
    isMember = input("Are you a member of this store? Enter Y or N: ")

    if (isMember == 'Y' or isMember == 'y') and (isAge < 18 or isAge >= 65):
        isPrice = isPrice * 0.85
    if isOntario == 'Y' or isOntario == 'y':
        aftertax = isPrice * 1.13
    else:
        rate = float(input("Enter the tax of your state or provice as a percentage: "))
        aftertax = isPrice*(1+(rate/100))
    print("The total cost with tax for your order is: $" + str(round(aftertax, 2)))

main()