// Maisha Paredes, finantial calc c update thing

#include <stdio.h>

float get_user_input(char *prompt) {
    float value;
    printf("%s", prompt);
    scanf("%f", &value);
    return value;
}

void print_result(char *item_name, float amount, float income) {
    float percentage = (amount / income) * 100;
    printf("Your %s are $%.2f which is %.2f%% of your income.\n", item_name, amount, percentage);
}

int main() {
    float income, rent, utilities, groceries, transport, savings, spendings;

    income = get_user_input("What is your income?\n");
    rent = get_user_input("How much is your rent?\n");
    utilities = get_user_input("How much are your utilities?\n");
    groceries = get_user_input("How much are your groceries?\n");
    transport = get_user_input("How much is your transportation?\n");

    savings = income * 0.1;
    spendings = income - savings - rent - utilities - groceries - transport;

    printf("Welcome to my calculator that will help you manage your monthly finances!\n");

    print_result("rent", rent, income);
    print_result("utilities", utilities, income);
    print_result("groceries", groceries, income);
    print_result("transportation", transport, income);
    print_result("savings", savings, income);
    print_result("spendings", spendings, income);

    return 0;
}
