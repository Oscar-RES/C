/*
CH-230-A
area_comp.c
Oscar Echeverria
oecheverri@jacobs-university.de
*/

#include <stdio.h>

int main() {
   float a;
   scanf("%f",&a); //scanner for float a
   float b;
   scanf("%f",&b); //scanner for float b
   float h;
   scanf("%f",&h); //scanner for float h
   float area_sqr = a*a; //multiplies a*a to get the area of a square
   printf("square area=%f\n", area_sqr);
   float area_rect = a*b; //multiplies a*b (l*h) to get the area of a rectangle
   printf("rectangle area=%f\n",area_rect);
   float area_tri = (a*h)/2; //multiplies a times the h and divides it by 2 to get area of triangle
   printf("triangle area=%f\n", area_tri);
   float area_trap=(a+b)*h/2; //adds the two bases, multiplies them by h, divides by 2
   printf("trapezoid area=%f\n", area_trap);

    return 0;
}
