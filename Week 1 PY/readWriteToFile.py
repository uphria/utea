#Open the same file for reading
fileObject = open("test.txt", "r")

#Print in the console the content of the file and its Name
#using properties and built-in functions of the file object
#get the text from the file using the read() built-in function
#and store it in fileText variable
fileText = fileObject.read()

#get the file name from the text file and store it in fileName variable
fileName = fileObject.name

#display the information in the console
print("The file " + fileName + ", has the following content\n" + fileText)