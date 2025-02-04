// Maisha Paredes, Variables notes C

#include <stdio.h>
    
    char name[6] = "maisha";
int age = 15;
float pi = 3.14;

int main(void){
    printf("Welcome, what is your name: \n");
    scanf("%s", name);
    printf("How old are you? \n");
    scanf("%d", age);
    printf("Write out as much pi as you know: \n");
    scanf("%f", &pi);

    printf("Hello i am %s. \n I am %d years old. I like the number");
    return 0;
    }

