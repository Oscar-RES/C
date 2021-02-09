/*
CH-230-A
daysahours.c
Oscar Echeverria
oecheverri@jacobs-university.de
*/

#include <stdio.h>

int main() {
   int i;
   printf("enter a value\n");
   scanf("%d", &i);
   int k = 1;
   //declared the input i and a "default number which is 1"
   while(i<=0){
       printf("please insert valid number\n");
       scanf("%d", &i);
        }
   /*made a while loop that checks that the input is valid(i>0), while tha condition isn't satisfied
    the program keeps asking for input*/
   while(k<=i){
       printf("%d days = %d hours\n",k,k*24);
       k++;
       /*this while loop is the one that does the magic:
       basically as long as k(1) is less than or equal to i the program will keep multiplying
       k times 24 to convert days to hours and adds 1 to k each time it loops until k
        will eventually be greater than i and the loop will stop running*/
   }
    return 0;

}



