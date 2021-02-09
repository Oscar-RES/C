/*
CH-230-A
wrong_output.c
Oscar Echeverria
oecheverri@jacobs-university.de
*/

#include <stdio.h>

int main (){
    int result;
    result = (2 + 7) * 9 / 3;
    printf ("The result is %d\n", result);
    return 0;
}
/* 
    -Added result at the end of the printf statement so that the program fixes the result 

    -Before the fix it printed a random string of numbers because the program had no idea it
      was intended to print int result at the end because it was never specified in the printf statement
*/