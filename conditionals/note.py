#Maisha paredes. conditional notes python

name = input("What is your name?:\n")

#1. What puts something inside of the “if” statement?

if name == "Larose": 
    print("Hi mrs.Larose")

else: #this happens if condition is false
    print(f"hello {name}!")


#2. What do if statements do? - checks a condition and if it is true it will do a thing

if name == "Larose": #<= this is the condition
    print("Hi mrs.Larose") #<= this is what it does if true


#3. What are boolean statements? - a true or a false value

if name == "Larose": #<= this is the boolean statement. it is either true or false
    print("Hi mrs.Larose")

else: #this happens if condition is false
    print(f"hello {name}!")


#4. What do else statements do? -exceutes if the code/boolean is false. If boolan is wrong, else happens


#5. What kind of statement do you use if you have more than 2 needed outcomes?

num = int(input("How many cookies do you have?"))
#computers read top to bottom , check the least liely first and the most liely at the end 

if num == 0: #<= if always starts the conditional
    print("There are none.)")

elif num == 1:
    print("there is one.")

elif num <4: 
    print("There is a couple.")

#<= everything in between is an elif
elif num <10: 
    print("There is a few.")

else: #<= else always ends the conditional
    print("There are many.")

#6.What do each of the different symbols mean in conditionals?
#< LESS THAN
#> GREATER THAN
#<= LESS THAN OR EQUAL TO
#>= GREATER THAN OR EQUAL TO
#== EQUAL TO
#=== DOESNT EXSIST IN PYTHON (CHECKC IF VAALUE IS EQUAL)
#! NOT


#7. What are the 3 logical operators?

if num <10 and > 5:
    print("this is a big single digit number")

    
elif num <10 or > 5: #or means one has to be true 
    print("this is a single digit number")

elif num <10 not > 5: #not changes to check if false
    print("this is not a single digit number")
#8. What are logical operators for? - make our statements more complex so we can handle different problems


#9. What does a nested conditional statement do?
if num <10: 
    if num ==8:
        print("This prints at 8")
    else:
        print("the number is less than 10")
else: 
    print("The number is bigger than 10")

#How do you write an if statement in C?
#How do you write else statements in C?
#How do you write elif/ else if statements in C?
#How do you write the 3 logical operators in C?