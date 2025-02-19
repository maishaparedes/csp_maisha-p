// Maisha Paredes, notes c
#include <stdio.h>
int num;


char name[50], place[50], verb[50];
int add(int numOne, int numTwo){
    return numOne+numTwo;
}

void due(char assignment[50], char day[50]){
printf("The %s assignment is due %s\n", assignment, day);
}
//const char* word(type){
    //char choice[50];
    //printf("please give me a %s", type)
    //scanf("%s", choice);
    //return choice;
//}
int main(void){

    due("Function notes", "today");
    due("Hello world update", "tommorow");
    due("Hello world update", "tommorow");
    due("The finantial calc", "friday");

   // printf("Please tell me a number\n");
    //add("%d",num);
   // add(num,1);
   // add(72,5);
    return 0;
    }