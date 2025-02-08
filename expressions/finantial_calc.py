#Maisha Paredes, Finantial Calculator python

# print statement that welcomes user and tells us what program does

print("Welcome! This program will calculate your savings and how much you have left to spend. You can only type the number, don't put dollar signs!")

#ask user what their monthly income is (variable, an input)

income = float(input("What is your income?\n"))

#ask user what thier rent is (variable, an input)

rent = float(input("How much is your rent?\n"))
#ask user what their utilities is (variable, an input)

utilities = float(input("How much are your utilities?\n"))

#ask user what their groceries is (variable, an input)

groceries = float(input("How much are your groceries?\n"))

#ask user what their transportation is (variable, an input)

transport = float(input("How much is your transportation?\n"))

#calculate savings as 10% of income (income*.1) (variable)

savings = income * 0.1

#calculate spending as income-savings-rent-utilities-groceries-transport (variable)

spendings = income-savings-rent-utilities-groceries-transport
#calculate percent income of rent (rent/income *100)  (variable)
 rent_percentage = (rent/income) *100

#calculate percent income of utilities (utilities/income *100)  (variable)

utilities_percentage = (utilities/income) *100

#calculate percent income of groceries (groceries/income *100)  (variable)

groceries_percentage = (groceries / income) * 100

#calculate percent income of transportation (transportation/income *100)  (variable)
transport_percentage = (transport / income) * 100

#calculate percent income of spending (spending/income *100)  (variable)
spending_percentage = (spendings / income) * 100

#your rent is $XX.XX which is XX% of your income. (Print)
print(f"Your rent is ${rent:.2f} which is {rent_percentage:.2f}% of your income.")

#your utilities is $XX.XX which is XX% of your income. (Print)
print(f"Your utilities are ${utilities:.2f} which is {utilities_percentage:.2f}% of your income.")

#your groceries is $XX.XX which is XX% of your income. (Print)
print(f"Your groceries are ${groceries:.2f} which is {groceries_percentage:.2f}% of your income.")

#your transportation is $XX.XX which is XX% of your income. (Print)
print(f"Your transportation is ${transport:.2f} which is {transport_percentage:.2f}% of your income.")

#your savings are $XX.XX which is XX% of your income. (Print)
savings_percentage = (savings / income) * 100  # Calculate savings percentage
print(f"Your savings are ${savings:.2f} which is {savings_percentage:.2f}% of your income.")

#your spendings are $XX.XX which is XX% of your income. (Print)
print(f"Your spendings are ${spendings:.2f} which is {spending_percentage:.2f}% of your income.")

