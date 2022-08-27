from postal import isValid, formatCode, getProvince

codes = [" ", "", "M5M q1j", "M4M1L4", "1K2 L4M", "m5M 1P2", "t2t 4 f2", "D2E 1l4"]
for code in codes:
    if (isValid(code)):
        properCode = formatCode(code)
        print("\'" + code  + "\' properly formatted is " + properCode)
        print("It belongs to " + str(getProvince(properCode)))
    else:
        print("\'" + code  + "\' is improper code")