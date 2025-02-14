// Maisha Paredes, silly sentences 
#include <stdio.h>
#include <string.h>


char name[50];
char verb1[50];
char adjective[50];
char adjective2[50];
char noun_place[50];

char past_tenseverb[50]; 
  
int main(void) {  
    // A welcome for the user telling them what the program is  
    printf("Welcome to my silly sentences program. Take caution, it's very silly.\n");  

     //ask user for words (print statement with a question scanf to set to variable) (in C we ned to tell user that they can only type 1 word)
//print out the story with the variables inserted ("welcome %s to my program", name)
  
    // Ask user for their name  
    printf("What is your first name, don't lie: ");  
    scanf("%s", name);  
  
    //ask for words  
    printf("Type in a present tense verb: ");  
    scanf("%s", verb1); 
  
    printf("Enter another verb, but this time PAST TENSE!: ");  
    scanf("%s", past_tenseverb);

    printf("Enter a adjective: ");  
    scanf("%s", adjective);

     printf("Enter a adjective: ");  
    scanf("%s", adjective2);
    
    printf("Enter a noun that is a place: ");  
    scanf("%s", noun_place);
    
 // Print out the story with the variables in em  
    printf("Welcome %s to my program!!! Wanna make some silly sentences? Your name is %s, and we're going to work together to predict the future. Next week, you will visit %s! Birds will %s you up to the gods, and a evil %s lady with %s arms will befriend you! But in the end it will all have been a dream. One that %s by   \n ", name, name, noun_place, verb1, adjective, adjective2, past_tenseverb  ); 


  
    return 0;  
}  

