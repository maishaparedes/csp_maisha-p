// Maisha Paredes, how to get the time of day
#include <stdio.h>
#include <time.h>

int main(void){
    time_t seconds; //this is time since january 1 1970
    seconds = time(NULL);
    printf("Seconds since Jan 1 1970 = %d\n", seconds);

    //current time 
    time_t rawtime;
    struct tm* timeinfo;
    time(&rawtime);
    timeinfo = localtime(&rawtime);
    printf("Current time and date os %s\n");
    asctime((timeinfo));

    //current hour 
    time_t now = time(NULL);

    struct tm * tm_struct = localtime(&now); //millitary time! (0-23)

    int hour = tm_struct->tm_hour;

    printf("%d\n", hour);

    return 0;
    }