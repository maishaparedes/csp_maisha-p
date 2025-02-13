// Maisha Paredes, silly sentences 
#include <stdio.h>
#include <string.h>


char name[50];
char verb1[50];
char adjective[50];
char noun[50];    
char verb2[50]; 
  
int main(void) {  
    // A welcome for the user telling them what the program is  
    printf("Welcome to my silly sentences program. Take caution, it's very silly.\n");  

     //ask user for words (print statement with a question scanf to set to variable) (in C we ned to tell user that they can only type 1 word)
//print out the story with the variables inserted ("welcome %s to my program", name)
  
    // Ask user for their name  
    printf("What is your first name, don't lie: ");  
    scanf("%s", name);  
  
    //ask for words  
    printf("Type in a verb: ");  
    scanf("%s", verb1); 
  
    printf("Enter another verb: ");  
    scanf("%s", verb2);

    printf("Enter a adjective: ");  
    scanf("%s", adjective);
    
 // Print out the story with the variables in em  
    printf("Welcome %s to my program!!! Wanna make some silly sentences? \n ", name, adjective, name ); 


  
    return 0;  
}  

