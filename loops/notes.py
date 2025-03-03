#Maisha paredes, notes python loops

#1. What is a loop? 
    #A section of code that repeats multiple times
#2. What are the two types of loops?
    #for loop
nums = [12, 3, 66, 7, 3, 3, 2]
for num in nums:
    print(num)
    #for loop
x = 0

while x < 10:
    print(x)
    x += 1

#3. What is iteration

    #one instance of the loop
    #one particular instance of the loop#iteration in it of itself is the amount of times your looping through

#4. What are lists? 
nums = [1,2,3,4,5,6,7,6]
siblings = ["Angie", "Hanah", "Josh", "Ethan", "Oliver", "Maisha"] #<==brackets, add in items w correct data types, and a comma between each item

    #a group of many things that are related
    #a variable that holds multiple values
print(nums) #prints whole list is ugly
print(siblings[3])#prints 1 item from the list

siblings[7] = "Maisha.two.point.O"
siblings.pop(5)
siblings.insert(1, "Jayshree")
siblings.insert(2, ["Joe", "Noah", "Zee"])
print(siblings)


#5. How do you make lists in python? 

#6. How do you make for loops in python? 

for sibling in siblings: 
    print(sibling)
    for x in range(0,101,20)
        print(x)
#7. How do you make while loops in python?
import random
x = 1 #variable to keeo vount of iteration
goose = random.randint

while x <= 20:
    if x == goose:
        print("goose!")
       break #tells the loop to stop
    else:
        print("duck")
    print("duck")
    x += 1 
    #continues move on to the next iteration without finishing
