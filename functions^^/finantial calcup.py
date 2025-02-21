#Maisha Paredes, Update Finantial Calculator python

def get_user_inputs():  
    #ask user what their monthly income is (variable, an input) then kinda do that with all the others, look at old finantial calc  
    income = float(input("What is your income?\n"))  


    rent = float(input("How much is your rent?\n"))  


    utilities = float(input("How much are your utilities?\n"))  


    groceries = float(input("How much are your groceries?\n"))  


    transport = float(input("How much is your transportation?\n"))  

    return income, rent, utilities, groceries, transport     
  
def calculate_percentages(income, rent, utilities, groceries, transport):   

    savings = income * 0.1  

    spendings = income - savings - rent - utilities - groceries - transport  

    rent_percentage = (rent / income) * 100  

    utilities_percentage = (utilities / income) * 100 

    groceries_percentage = (groceries / income) * 100  

    transport_percentage = (transport / income) * 100  
    
    spending_percentage = (spendings / income) * 100  

    return savings, rent_percentage, utilities_percentage, groceries_percentage, transport_percentage, spendings, spending_percentage    
    
def print_results(savings, rent, rent_percentage, utilities, utilities_percentage, groceries, groceries_percentage, transport, transport_percentage, spendings, spending_percentage):  


    print("Welcome to my calculator that will help you manage your monthly finances!")    

    print(f"Your rent is \${rent:.2f} which is {rent_percentage:.2f}% of your income.")  

    print(f"Your utilities are \${utilities:.2f} which is {utilities_percentage:.2f}% of your income.") 

    print(f"Your groceries are \${groceries:.2f} which is {groceries_percentage:.2f}% of your income.") 

    print(f"Your transportation is \${transport:.2f} which is {transport_percentage:.2f}% of your income.")

    print(f"Your savings are \${savings:.2f} which is {(savings / income * 100):.2f}% of your income.")

    print(f"Your spendings are \${spendings:.2f} which is {spending_percentage:.2f}% of your income.")  
  

income, rent, utilities, groceries, transport = get_user_inputs()    

savings, rent_percentage, utilities_percentage, groceries_percentage, transport_percentage, spendings, spending_percentage = calculate_percentages(income, rent, utilities, groceries, transport)   
 
print_results(savings, rent, rent_percentage, utilities, utilities_percentage, groceries, groceries_percentage, transport, transport_percentage, spendings, spending_percentage)  
