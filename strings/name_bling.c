// Maisha Paredes, name decorator C
#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    char name[50];
    char decoration[60] = ">:)"; 

    printf("What is your name dude: ");
    scanf("%s", name);

    strcat(output, " "); 
    strcat(output, name); 
    strcat(output, " >:("); 
    printf("%s\n", output);

    return 0;
}  
