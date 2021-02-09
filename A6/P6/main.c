/*
CH-230-A
binary_representation.c
Oscar Echeverria
oecheverri@jacobs-university.de
*/

#include <stdio.h>

int main() {
    unsigned char input;
    scanf("%c", &input);
    printf("The decimal representation is: %d\n", input);
    printf("The binary representation is: ");
    for(int i = 7; i >=0; i--){
        printf("%d", (input & (1 << i )) > 0 ? 1 : 0);
    }
    /*the loop pretty much compares each value to zero, returning either 1 or 0 if the value is
     * greater than 0*/
    printf("\n");
    return 0;
}
