def update(salaries, adjustments):
    if len(salaries) == len(adjustments):
        for index in range(len(salaries)):
            salaries[index] = round(salaries[index]*(1+adjustments[index]/100), 2)
salaries = [50, 80, 90, 50, 75, 20, 99, 88, 33, 60]
adjustments = [50, 0, 0, 10, 10, 20, 0, 0, 0, 10]
update(salaries, adjustments)
print(salaries)