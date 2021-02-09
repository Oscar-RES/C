/*
CH-230-A
write_numbers.c
Oscar Echeverria
oecheverri@jacobs-university.de
*/

#include <stdio.h>

int main() {
   float x;
   scanf("%f", &x);
//declared a variable and scanner assigned to the float
   int n;
   scanf("%d", &n);
//declared an int variable and a scanner assigned to the int
   if(n<=0){
       while (n<=0){
           printf("Input is invalid, reenter value\n");
           scanf("%d", &n);
       }
   }
   /*if statement with a while loop to check if the input is invalid,
     if the input is invalid console will ask for another print*/
   
   int i=1; //this variable will be the "default"
    while(i<=n){
       printf("%f\n",x);
       i++;
   }
    //while loop that prints float x n times by checking if value i is less than or equal to n
    return 0;
}
