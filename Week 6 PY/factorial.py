#only iterations
def factorial1(number):
    answer = 1
    for item in range(1, number + 1):
        answer *= item
    return answer

#using prod, list, range
from math import prod
from tkinter import N
def factorial2(number):
    return prod(list(range(1, number + 1)))

#using factorial
from math import factorial
def factorial3(number):
    return factorial(number)

number = int(input("What is n? "))
print(factorial1(number))
print(factorial2(number))
print(factorial3(number))