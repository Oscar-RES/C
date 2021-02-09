/*
CH-230-A
pointers_2.c
Oscar Echeverria
oecheverri@jacobs-university.de
*/

#include <stdio.h>

int main() {
    double x;
    scanf("%lf",&x);
    double y;
    scanf("%lf",&y);

    double *ptr_one;
    ptr_one = &x;
    printf("The address of x is %p\n",ptr_one);
    double *ptr_two;
    ptr_two = &x;
    printf("The address of x is %p\n",ptr_two);
    double *ptr_three;
    ptr_three = &y;
    printf("The address of y is %p\n", ptr_three);

    return 0;
}
