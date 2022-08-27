def main(mark):
    if mark >= 80:
        return "level 4"
    elif mark >= 70:
        return "level 3"
    elif mark >= 60:
        return "level 2"
    elif mark >= 50:
        return "level 1"
    else:
        return "level R"

mark = (float)(input("Enter the mark: "))
print("The mark of " + str(mark) \
        + "% will get you to " \
        + main(mark)
    )