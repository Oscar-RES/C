/*
CH-230-A
midrange.c
Oscar Echeverria
oecheverri@jacobs-university.de
*/


#include <stdio.h>
//this macro returns the smallest number of the three sets
#define min(a , b , c ) (( a < b ? a : b) < c ? ( a < b ? a : b):c)
//returns the max of the set of three numbers
#define max(a , b , c)  (( a > b ? a : b) > c ? ( a > b ? a : b):c)
//calls the other macros, adds their return, then divides it by two
#define mid(a , b , c)  ((min(a, b, c) + max(a, b, c))/2)

int main() {
    float first, second, third, mid;
    scanf("%f",&first);
    scanf("%f",&second);
    scanf("%f",&third);

    mid = mid(first,second,third);
    printf("The mid-range is: %.6f\n",mid);

    return 0;
}