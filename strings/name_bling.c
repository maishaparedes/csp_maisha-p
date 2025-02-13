// Maisha Paredes, name decorator C

#include <stdio.h>  
#include <string.h>  
  
int main() {    
    char name[50];   
    char message[100]; 
  
    printf("What is your name dude: ");     
    scanf("%s", name);   
  
    strcpy(message, ">:P "); 
    strcat(message, name);    
    strcat(message, " >_<\n"); 
      
    printf("%s", message); 
  
    return 0;  
}  