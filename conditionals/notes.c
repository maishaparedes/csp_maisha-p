// Maisha Paredes, conditionals notes
#include <stdio.h>
#include <string.h> // needed to compare strings

char name[] = "Treyson";
int num;


int main(void){
    //10. how do you write an if statement in C? 
    if(strcmp(name, "Vienna")==0){ //strcmp means string comparisn when the outcome is 0 the strings are the same 
        printf("Hello Ms.Larose, welcome to this class."); 
    //11. How do you write else statements in C?
    }else{
        printf("Hello %s, welcome to his class.\n", name);
    }

printf("How many silblings do you love? Don't you lie now\n");
scanf("%d", &num);
    //12. How do you write elif/ else if statements in C?
    if(num == 0){
        printf("You are an only child\n");
    }else if(num <= 2){
        printf("You have a couple of silblings\n");
    }else if(num <= 5){
        printf("You have a few siblings\n");
    }else if{
        printf("You have a lot of siblings\n");
    }


    //13. How do you write the 3 logical operators in C?

    //&& = and
    //|| = or
    //! = not

    if(num == 7 || num == 13){
        printf("That is an unluvky number\n", num);
    }else if(num <10 && num >5){
        printf("%d, is a large single digit number\n", num);
    }else if(!num > 10){
        if(num == 12)
        printf("Thats a dozen!\n");
    }else{
        printf("%d is a big number", num);
    }else{
        printf("You typed in %d\n", num)
    }
    return 0;
}

  