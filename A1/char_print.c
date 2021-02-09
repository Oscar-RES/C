/*
CH-230-A
comp_div.c
Oscar Echeverria
oecheverri@jacobs-university.de
*/

#include <stdio.h>

int main(){
    char c = 'F';
    printf("char c is %c with ASCII code %d\n", c,c);
    int next_place = c+3;
    printf("The char in the next 3 places after char c is %c with ASCII code %d\n", next_place, next_place);

}