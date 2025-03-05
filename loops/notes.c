// Maisha Paredes, notes c
#include <stdio.h>

int main(void){

//1.What is a loop? 

    //a section of code repeated multiple times

//2.What are the two types of loops?

    //While loops
    int start = 0;
    while(start <5){
        printf("hello!\n");
        start++;
    }
    //for loops
    int q;
    for(q=0;q<5;q++){
        print("%d\n", q);
    }

//3.What is iteration
    //repeating something with minor changes each line

//4.What are arrays? (lists in c)
    //A list is a variable holding multiple values
     
//8. How do you make arrays? (lists in c)
    //arrays all need to be the same data type
int grades[] = {88, 97, 100, 70, 72, 99, 61};
    //1. set data type first 2. AFTER naming put brackets aand write the length of list 3. list is surroumded by curley brackets, 4. commas between in each item
//print a simgle item from a list
printf("CSP GRADE: %d\n", grades[2]);
//Change item in the array
grades[2] = 95;
printf("CSP grade: %d\n", grades[2]);
//size of list in bytes
int size = sizeof(grades);

//length in list items
int length = sizeof(grades)/sizeof(grades[0]);
printf("the array is %d items long.\n", length);
//array w strings
//first brackets sets the lengh of the array
//second breacket sets the length of each string
char movies[][20] = {"lego movie", "kubo and the two strings", "jojo rabbit", "Avengers endgame"};

prinf("the movie is %s!\n", movies[1]);
int mlength = sizeof(movies)/sizeof(movies[0]);
//9. How do you make for loops in C?
//set iterator, keeps track of times going through loop (best practice set as x or i)
int x;
//in parens (starting point; ending point; count by)
for(x=0;x<=10;x+=2){
    printf("%d\n", x);
}
int m;
for(m=0;m<mlength;m++){
    printf("%s\n", movies[m]);
}
//10. How do you make while loops in C?
int w = 100;//start

while(w<=0){//stop
    printf("%d\n", w);
    w -= 10; //what we count by
}
    return 0;
    }




