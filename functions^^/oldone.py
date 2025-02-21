 #Maisha Paredes, Update Finantial Calculator python

print("Welcome to my calculator that will help you manage your monthly finances!")

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
#calculate percent income of rent (rent/income *100) (variable)
rent_percentage = (rent/income) *100

#calculate percent income of utilities (utilities/income *100) (variable)

utilities_percentage = (utilities/income) *100

#calculate percent income of groceries (groceries/income *100) (variable)

groceries_percentage = (groceries / income) * 100

#calculate percent income of transportation (transportation/income *100)  (variable)
transport_percentage = (transport / income) * 100

#calculate percent income of spending (spending/income *100)  (variable)
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
savings_percentage = (savings / income) * 100 # Calculate savings percentage
print(f"Your savings are ${savings:.2f} which is {savings_percentage:.2f}% of your income.")

#your spendings are $XX.XX which is XX% of your income. (Print)
print(f"Your spendings are ${spendings:.2f} which is {spending_percentage:.2f}% of your income.")

#but i dont know if it does what i need it to which is One function that takes care of all of the user inputs
#One function that calculates percent of income for each expense.

#Maisha Paredes, Update Finantial Calculator python

def get_user_inputs():  
    # Input prompts here  
    return income, rent, utilities, groceries, transport   
  
def calculate_percentages(income, rent, utilities, groceries, transport):  
    # Calculate savings and percentages  
    return savings, rent_percentage, utilities_percentage, groceries_percentage, transport_percentage, spendings, spending_percentage  
  
def print_results(income, rent, utilities, groceries, transport, savings, spendings):  
    
    print("Welcome to my calculator that will help you manage your monthly finances!")  

income, rent, utilities, groceries, transport = get_user_inputs()  
savings, rent_percentage, utilities_percentage, groceries_percentage, transport_percentage, spendings, spending_percentage = calculate_percentages(income, rent, utilities, groceries, transport)  
print_results(income, rent, utilities, groceries, transport, savings, spendings)  



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

