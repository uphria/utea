def getColour(wave):
    if wave >= 750:
        return "unknown"
    elif wave >= 620:
        return "red"
    elif wave >= 590:
        return "orange"
    elif wave >= 570:
        return "yellow"
    elif wave >= 495:
        return "green"
    elif wave >= 450:
        return "blue"
    elif wave >= 380:
        return "violet"
    else:
        return "unknown"

wave = input("enter the wavelength: ")
print("The colour for the light with lambda = " + wave + " nm is " + getColour(float(wave)))