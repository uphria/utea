#Create a file objec thta has the file test.txt open or created
#in writing mode
fileObject = open("test.txt", "w")

#Write the stirng inside the bracket into the beginning of the file
fileObject.write("This line will be saved to test.txt file")

#close the file
fileObject.close()