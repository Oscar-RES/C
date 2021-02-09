/*
CH-230-A
set3bits.c
Oscar Echeverria
oecheverri@jacobs-university.de
*/

#include <stdio.h>

unsigned char set3bits(unsigned char c, int bit1, int bit2, int bit3){
    c = c | (1 << bit1);
    c = c | (1 << bit2);
    c = c | (1 << bit3);
    // this code sets the 3 bits to 1 by using a right shift
    return c;
}

int main() {
    unsigned char input0;
    scanf("%c",&input0);

    int input1, input2, input3;
    scanf("%d",&input1);
    scanf("%d",&input2);
    scanf("%d",&input3);

    printf("The decimal representation is: %d\n",input0);
    printf("The binary representation is: ");
    for(int i = 7; i >=0; i--){
        printf("%d", (input0 & (1 << i )) > 0 ? 1 : 0);
    }
    printf("\n");
    //this loop prints the char in binary representation without changing it

    unsigned char changed = set3bits(input0,input1,input2,input3);
    printf("After setting the bits: ");
    for(int i = 7; i >=0; i--){
        printf("%d", (changed & (1 << i )) > 0 ? 1 : 0);
    }
    printf("\n");
    //prints the changed bits the same way as the other loop


    return 0;
}
