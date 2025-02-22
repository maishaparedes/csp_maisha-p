#maisha paredes, Update finantial Calc python

def get_user_input(prompt):
    return float(input(prompt))

def print_result(item_name, amount, income):
 
    percentage = (amount / income) * 100
    print(f"Your {item_name} are ${amount:.2f} which is {percentage:.2f}% of your income.")

income = get_user_input("What is your income?\n")
rent = get_user_input("How much is your rent?\n")
utilities = get_user_input("How much are your utilities?\n")
groceries = get_user_input("How much are your groceries?\n")
transport = get_user_input("How much is your transportation?\n")

savings = income * 0.1
spendings = income - savings - rent - utilities - groceries - transport

print("Welcome to my calculator that will help you manage your monthly finances!")

print_result("rent", rent, income)
print_result("utilities", utilities, income)
print_result("groceries", groceries, income)
print_result("transportation", transport, income)
print_result("savings", savings, income)
print_result("spendings", spendings, income)
