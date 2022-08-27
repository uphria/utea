import matplotlib.pyplot as plt

datax = list(range(10))

def getCoefficients():
  a, b, c = input("Enter a, b, and c values ").split()
  return[float(a), float(b), float(c)]

datay = []

def generateYValues(coefficients, datax, datay):
  max = len(coefficients) - 1
  for x in datax:
    y = 0
    for index in range(max):
      y += coefficients[index]*(x**(max-index))
    datay.append(y)

generateYValues(getCoefficients(), datax, datay)

print("close the graph to end the program, or ctrl C")

plt.plot(datax, datay)
plt.show()