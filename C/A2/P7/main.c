/*
CH-230-A
inf_loop.c
Oscar Echeverria
oecheverri@jacobs-university.de
*/

#include <stdio.h>

int main() {
    int i = 8;
    while(i >=4){
        printf("i is %d\n", i);
        i--;
    }
    printf("That's it.\n");
    return 0;
}
//all you had to do was add the brackets to the while loop