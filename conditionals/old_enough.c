//Maisha Paredes, Old enough C assignment

#include <stdio.h>  
#include <math.h>
  
int main() {  
    int age;  
    printf("Let us see if you can vote and/or drive, as well as go to school! How old are you? ");  
    scanf("%d", &age);  
  
    if (age >= 18) {  
        printf("You can vote, I'm happy for you!\n");  
    } else if (age >= 17) {  
        printf("You can drive, that's so cool man!\n");  
    } else if (age >= 15) {  
        printf("Wow, you can get a learner's permit.\n");  
    } else if (age >= 6) {  
        printf("Nice, You can go to school and learn. Nice\n");  
    } else {  
        printf("Bad news. You aren't old enough to vote, drive, or get a learner's permit. Sorry.\n");  
    }  
  
    return 0;  
}  
