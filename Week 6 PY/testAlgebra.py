import algebra

print("Creating empty triangle")
triangle = algebra.createEmptyTriangle(10)
algebra.printTriangle(triangle)
print("Printing the 10 rows Pascal's triangle")
algebra.generateTriangle(10, triangle)
algebra.printTriangle(triangle)