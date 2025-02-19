// Maisha Paredes, update hello world C
#include <stdio.h>
#include <math.h>

void sayhello(char name[]) {  
    printf("Hello, %s!\n", name);  
}  


int main(void){
    char name[50];
  
    for (int i = 0; i < 5; i++) {  
        printf("Enter your name, don't lie!!: ");  
        scanf("%s", name);   
        sayhello(name); 
    }  
  
    return 0;  
}  
