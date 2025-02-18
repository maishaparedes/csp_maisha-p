#Maisha Paredes, functions Python notes

#functions are plaes that hold actions to be reused

#number = int(input("pleasetell me a number:\n"))

def add(numOne, numTwo): #peramiters set the name of the variable 
    #numOne = int(input("pleasetell me a number:\n"))
    #numTwo = int(input("Please tell me a number:\n"))
    #numOne = int(input("pleasetell me a number:\n"))
   # numTwo = int(input("Please tell me a number:\n"))
    return numOne +numTwo

#print(add(number, 21)) #calling function, goes up to where we'eve defined it and goes again
#print(add(8,12)) #arguments set value of the variable
#addition = add(6,4)
#printadd(addition,10000)
#add(87,3)

def values(type):
    return input(f"please give me a {type}: \n")

name = values("name")
place = values("place")
verb = values("verb (past tense)")

print(f" {name} was really swift getting to {place} because they {verb}ed the whole way there.")
