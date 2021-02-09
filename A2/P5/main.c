/*
CH-230-A
pointers_1.c
Oscar Echeverria
oecheverri@jacobs-university.de
*/

#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    printf("the integer is %d\n",a);
    int *ptr_a = &a;
    printf("the address of a is %p\n",ptr_a);
    *ptr_a=*ptr_a+5;
    printf("the new value of a is %d\n", *ptr_a);
    printf("the new  address of a is %p\n",ptr_a);
    return 0;
}
