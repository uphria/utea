fileName = input("Enter the file name: ")
fileOpen = open(fileName, "r")
fileText = fileOpen.read()
print("The content \"" + fileText + "\","); print("has been successfully retried from the file " + fileName)
