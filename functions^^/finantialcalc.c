// Maisha Paredes, finantial calc c update thing
#include <stdio.h>  
  
float get_user_inputs() {  
    float income, rent, utilities, groceries, transport;  
  
    printf("What is your income?\n");  
    scanf("%f", &income);  
  
    printf("How much is your rent?\n");  
    scanf("%f", &rent);  
  
    printf("How much are your utilities?\n");  
    scanf("%f", &utilities);  
  
    printf("How much are your groceries?\n");  
    scanf("%f", &groceries);  
  
    printf("How much is your transportation?\n");  
    scanf("%f", &transport);  
    
    return income; 
}  
  
void calculate_percentages(float income, float rent, float utilities, float groceries, float transport, float *savings, float *spendings, float *rent_percentage, float *utilities_percentage, float *groceries_percentage, float *transport_percentage, float *spending_percentage) {  
    *savings = income * 0.1;    
    *spendings = income - *savings - rent - utilities - groceries - transport;  
    *rent_percentage = (rent / income) * 100;    
    *utilities_percentage = (utilities / income) * 100;   
    *groceries_percentage = (groceries / income) * 100;    
    *transport_percentage = (transport / income) * 100;    
    *spending_percentage = (*spendings / income) * 100;    
}  
  
void print_results(float savings, float rent, float rent_percentage, float utilities, float utilities_percentage, float groceries, float groceries_percentage, float transport, float transport_percentage, float spendings, float spending_percentage) {  
   // print statement that welcomes user and tells us what program does
    printf("Welcome to my calculator that will help you manage your monthly finances!\n");  
    printf("Your rent is \$%.2f which is %.2f%% of your income.\n", rent, rent_percentage);  
    printf("Your utilities are \$%.2f which is %.2f%% of your income.\n", utilities, utilities_percentage);  
    printf("Your groceries are \$%.2f which is %.2f%% of your income.\n", groceries, groceries_percentage);  
    printf("Your transportation is \$%.2f which is %.2f%% of your income.\n", transport, transport_percentage);  
    printf("Your savings are \$%.2f which is %.2f%% of your income.\n", savings, (savings / (rent + utilities + groceries + transport)) * 100);  
    printf("Your spendings are \$%.2f which is %.2f%% of your income.\n", spendings, spending_percentage);  
}  
  
int main() {  
    
    float income, rent, utilities, groceries, transport, savings, spendings, rent_percentage, utilities_percentage, groceries_percentage, transport_percentage, spending_percentage;  
  
    income = get_user_inputs();  
    

    calculate_percentages(income, rent, utilities, groceries, transport, &savings, &spendings, &rent_percentage, &utilities_percentage, &groceries_percentage, &transport_percentage, &spending_percentage);  
    print_results(savings, rent, rent_percentage, utilities, utilities_percentage, groceries, groceries_percentage, transport, transport_percentage, spendings, spending_percentage);  
  
    return 0;  
}  
