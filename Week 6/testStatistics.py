from statistics import generateData, createGraph

dice = int(input("How many dice to throw? "))
faces = int(input("How many faces will the dice have? "))
trials = int(input("How many trials would you like to have? "))
datay = [0]*((faces - 1)*dice + 1)
#not quite sure how this works but it takes all the instances of each outcome and sticks it in a list
datax = list(range(dice, faces*dice + 1))
#start from the number of dice (lowest is n of 1) and go up to n of number of faces - +1 cause it doesn't include stop value
generateData(faces, dice, trials, datay)
print(datax)
print(datay)
createGraph(datax, datay, "propability distribution", "posisble outcome", "frequency")