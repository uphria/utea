import math

def result(mass, fileMag, fileDir):
    dataMag = open(fileMag, 'r')
    dataDir = open(fileDir, 'r')
    mag = dataMag.readline()
    dir = dataDir.readline()
    i = 1
    count = 0
    xnet = 0
    ynet = 0
    next = True
    if (not mag) or (not dir):
        next = False
    while(next):
        if (not mag) or (not dir):
            next = False
        else:
            xforce = float(mag)*math.cos(float(dir)*math.pi/180)
            yforce = float(mag)*math.sin(float(dir)*math.pi/180)
            print("Fx" + str(i) + " = " + str(round(xforce, 1)) + "N, Fy" + str(i) + " = " + str(round(yforce, 1)) + "N")
            i += 1
            count += 1
            xnet = xnet + xforce
            ynet = ynet + yforce
            mag = dataMag.readline()
            dir = dataDir.readline()
    if count !=0:
        dataMag.close()
        dataDir.close()
        print("Fnetx = " + str(round(xnet, 1)) + "N, Fy = " + str(round(ynet, 1)) + "N")
        adir = round((math.atan(ynet/xnet))*180/math.pi, 1)
        fnet = (xnet**2 + ynet**2)**0.5
        a = round(fnet/float(mass), 1)
        print("The object with mass m = " + str(mass) + "kg,\n" \
                "will experience an acceleration a = " + str(a) + " ms^-2 at " + str(adir) + " degrees from the x-axis"
            )
    dataMag.close()
    dataDir.close()
    return None

mass = (float)(input("Enter the mass of the object: "))
fileMag = input("Enter the file name for the magnitude data: ")
fileDir = input("Enter the file name for the direction data: ")
result(mass, fileMag, fileDir)