// Maisha Paredes, fizzbuzz c
#include <stdio.h>
#include <math.h>

int main(void){
    for (int i = 1; i <= 50; i++) {    
    if (i % 3 == 0 && i % 5 == 0) {    
        printf("FizzBuzz\n");    
    }     
    else if (i % 5 == 0) {    
        printf("Buzz\n");    
    }     
    else if (i % 3 == 0) {    
        printf("fizz\n");    
    }     
    else {    
        printf("%d\n", i);    
    }    
}  
    return 0;
    }


