/*
CH-230-A
conversions.c
Oscar Echeverria
oecheverri@jacobs-university.de
*/

#include <stdio.h>

int main (){
    int x = 2138;
    printf("x=%9d\n",x);
    float y = -52.358925;
    printf("y=%11.5f\n", y);
    char z = 'G';
    printf("z=%c\n",z);
    double u = 61.295339687;
    printf("u=%.7lf\n",u); 

    return 0;
}