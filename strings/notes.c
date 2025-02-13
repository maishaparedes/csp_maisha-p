// Maisha Paredes, notes c
#include <stdio.h>
#include <string.h>

char subject[50];
char name[] = "Victoria";\
char sentence[] = "The quick brown fox jumps over the lazy dog."

int main(void){
   //printf("What class are you in?");
   //scanf("%s", subject);
   //fgets(subject, sizeof(subject), stdin);
   //printf("Dude, your in %s, ? that is a COOL class!", subject);

   //printf("%s", name);
   //name[0] = "T";;
   //name[1] = "o";
   //name[2] = "r";
   //name[3] = "i";
   //printf("%lu\n", sizeof(sentence));
   //printf(strlen(sentence));

char one[] = "Hello";

char two[] = "World";

char three[] = "Welcome to my program.";

printf("%s\n", one);
strcat(one, two);
printf("%s\n", one);
strcat(three, one);

return 0;
    }