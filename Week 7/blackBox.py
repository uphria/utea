#black box testing checks the correspondence between possible inputs and correct outputs
#a black box test treats the code as a "black box"
#the focus is on what output is produced by an input and not how the output is produced
#the goal of the tests is to test one representative for all possibilities

#test boundary cases
#each test should have a specific purpose
#keep tests simple
#figure out output by hand

#for function smallest(x,y) that returns the smaller of x and y
#test smallest(2, 1) --> x bigger than y
#test smallest(1, 2) --> y bigger than x
#test smallest(1, 1) --> x equal to y
#all 3 should return 1
