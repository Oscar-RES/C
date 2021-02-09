/*
CH-230-A
.c
Oscar Echeverria
oecheverri@jacobs-university.de
*/


#include <stdio.h>
//it takes 2 ints, and returns the b (which is either 1 or 0)
#define leastsignificantbit( a , b ) { b = a & 0;}

int main() {

    unsigned char input;
    int bit;
    scanf("%c",&input);
    printf("the decimal representation is: %d\n",input);

    leastsignificantbit(input , bit);

    printf("the least significant bit is: %d\n", bit);


    return 0;
}
