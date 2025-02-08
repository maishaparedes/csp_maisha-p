//Maisha Paredes, Finantial Calculator C
#include <stdio.h>
#include <math.h>

int main(void){
  // print statement that welcomes user and tells us what program does
  printf("Welcome! This program will calculate your savings and how much you have left to spend. You can only type the number, don't put dollars or dollar signs!\n");

  //ask user what their monthly income is (variable, an input)
  float income;
  printf("What is your income?\n");
  scanf("%f", &income);

  //ask user what their rent is (variable, an input)
  float rent;
  printf("How much is your rent?\n");
  scanf("%f", &rent);

  //ask user what their utilities is (variable, an input)
  float utilities;
  printf("How much are your utilities?\n");
  scanf("%f", &utilities);

  //ask user what their groceries is (variable, an input)
  float groceries;
  printf("How much are your groceries?\n");
  scanf("%f", &groceries);

  //ask user what their transportation is (variable, an input)
  float transportation;
  printf("How much is your transportation?\n");
  scanf("%f", &transport);

  //calculate savings 10% of income (income*.1) (variable)
  float savings = income * 0.1;

  //calculate spending as income-savings-rent-utilities-groceries-transport (variable)
  float spendings = income - savings - rent - utilities - groceries - transport;

  //calculate percent income of rent (rent/income *100) (variable)
  float rent_percentage = (rent / income) * 100;

  //calculate percent income of utilities (utilities/income *100) (variable)
  float utilities_percentage = (utilities / income) * 100;

  //calculate percent income of groceries (groceries/income *100)  (variable)
  float groceries_percentage = (groceries / income) * 100;

  //calculate percent income of transportation (transportation/income *100)  (variable)
  float transport_percentage = (transport / income) * 100;

  //calculate percent income of spending (spending/income *100)  (variable)
  float spending_percentage = (spendings / income) * 100;

  //your rent is $XX.XX which is XX% of your income. (Print)
  printf("Your rent is $%.2f which is %.2f%% of your income.\n", rent, rent_percentage);

  //your utilities is $XX.XX which is XX% of your income. (Print)
  printf("Your utilities are $%.2f which is %.2f%% of your income.\n", utilities, utilities_percentage);

  //your groceries is $XX.XX which is XX% of your income. (Print)
  printf("Your groceries are $%.2f which is %.2f%% of your income.\n", groceries, groceries_percentage);

  //your transportation is $XX.XX which is XX% of your income. (Print)
  printf("Your transportation is $%.2f which is %.2f%% of your income.\n", transport, transport_percentage);

  //your savings are $XX.XX which is XX% of your income. (Print)
  float savings_percentage = (savings / income) * 100; // Calculate savings percentage
  printf("Your savings are $%.2f which is %.2f%% of your income.\n", savings, savings_percentage);

  //your spendings are $XX.XX which is XX% of your income. (Print)
  printf("Your spendings are $%.2f which is %.2f%% of your income.\n", spendings, spending_percentage);

  printf("You have $%.2f left to spend after all expenses and savings.\n", spendings);
  printf("Your total savings are $%.2f\n", savings);

    return 0;
}
