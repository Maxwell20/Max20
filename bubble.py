__author__ = 'maxtw_000'
#cs317 AJ Kalkarni hw1 problem 14
#Maxwell Twente
#my first python program
#this program takes an input file of integers separated by commas
#It sorts then outputs the result to a file


#bubble function
#takes list of numbers or string and sorts in order
def bubble(list):
    length = len(list) - 1
    sorted = False

    while not sorted:
        sorted = True
        for i in range(length):
            if list[i] > list[i+1]:
                sorted = False
                list[i], list[i+1] = list[i+1], list[i]



#opening input file
f = open('input.txt','r')
#create array list
arrayList = []
#convert to type int
for line in f.readlines():
    for s in line.split(','):
        x = int(s)
        arrayList.append(x)
f.close()

#call bubble function to sort input.txt
bubble(arrayList)
print(arrayList)

s = str(arrayList) #converts arraylist back to string to print to file

b = open('output.txt','w')#opens output.txt

b.write(s)#writes the sorted list to file as string

b.close()#closes file