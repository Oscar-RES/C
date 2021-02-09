/*
CH-230-A
compile_error.c
Oscar Echeverria
oecheverri@jacobs-university.de
*/

#include <stdio.h>

int main() {
    float result; 
    int a = 5;
    float b = 13.5;
    result = (float) a / b;
    printf("The result is %f\n", result);
    return 0;
}
/* Errors:
1- There was a # missing in the statement "include<stdio.h>
    FIX: added the # 
2- Variable b was declared as an int but was defined as a float,
    FIX: changed the declaration to fit the variable
3- The division operator takes an int or a float, can't take both of them
    FIX: added (float) so that the operator works*/