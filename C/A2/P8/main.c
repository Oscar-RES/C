/*
CH-230-A
div2a7.c
Oscar Echeverria
oecheverri@jacobs-university.de
*/

#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    if(a%2 == 0 && a%7 == 0) {
        printf("The number is divisible by 2 and 7\n");
    }else {
        printf("The number is NOT divisible by 2 and 7\n");
    }
    return 0;
}
/*the if statement checks whether the number is divisible by 2 and 7 by running
the modulo operator, which returns the remainder of a division, if both return 0
 then it is divisible by 2 and 7*/