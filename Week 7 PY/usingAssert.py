#Python's built-in function assert()
#assertion contains a boolean expression
#assertion error occurs if the value of the expression is False

def findIgnoreCase(text, letter):
    for char in text:
        if char == letter.lower() and char == letter.upper():
            return True
        else:
            return False

assert(findIgnoreCase("Hello", "h"))

#this gives an assertion error:
#Traceback (most recent call last):
  #File "/Users/sarahxu/Desktop/utea/Week 7/usingAssert.py", line 12, in <module>
    #assert(findIgnoreCase("Hello", "h"))
#AssertionError 

#if we use OR instead of AND in line 7, there will be no assert error