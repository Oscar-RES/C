/*
CH-230-A
backwardsrepresentation.c
Oscar Echeverria
oecheverri@jacobs-university.de
*/

#include <stdio.h>

int main() {
    unsigned char input;
    scanf("%c",&input);
    printf("The decimal representation is: %d\n",input);

    printf("The backwards binary representation is: ");
    /*this while loop will start at 1, move the position to the left
     * until it eventually reaches 0, it prints all of the numbers while it ends up in 0*/
    while ( input > 0 ){
        printf("%d", input&1);
       input =  input >> 1;
    }
    printf("\n");

    return 0;
}
