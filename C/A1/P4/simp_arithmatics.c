/*
CH-230-A
simp_arithmatics.c
Oscar Echeverria
oecheverri@jacobs-university.de
*/

#include <stdio.h>

int main() {
int x = 17;
printf("x=%d\n",x);
int y = 4;
printf("y=%d\n",y);
int sum = x+y;
printf("sum=%d\n",sum);
int product = x*y;
printf("product=%d\n",product);
int difference = x-y;
printf("difference=%d\n",difference);
float division = (float) x/y;
printf("division=%f\n",division);
int remainder = x%y;
printf("remainder of division=%d\n",remainder);
return 0;

}