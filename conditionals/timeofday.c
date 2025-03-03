//maisha Paredes, time of day greetings

#include <stdio.h>  
#include <time.h> 
  
int main(void) {  
   
    time_t now = time(NULL); 
    struct tm *local_time = localtime(&now);
  
    int hour = local_time->tm_hour;
   
    if (hour < 12) {  
        printf("Tis morning, a good morning, so good morning!\n");  
    } else if (hour < 18) {  
        printf("Great afternoon, just look at the clouds!\n");
    } else {  
        printf("Good evening.\n");  
    }  
  
    return 0; 
}  