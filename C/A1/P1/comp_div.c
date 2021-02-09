/*
CH-230-A
comp_div.c
Oscar Echeverria
oecheverri@jacobs-university.de
*/

#include <stdio.h>
int main() {
double result; 
result = (3.0+1.0)/5.0;
printf("The value of 4/5 is %.3lf\n", result);
return 0;
}

/* - Changed the %lf to a %.3lf so that the program printed the double properly and with 3 
digits after the decimal point. 
- Changed the {3,1,5} to {3.0,1.0,5.0} so that the data type 
of the numbers being manipulated with the operators are in accordance with the data type of variable result
-Before the fixes it printed 0.0000 because the operators was working with integers while the variable of result was a double
so there was a type mismath resulting in the program printing a 0.0000 instead of the answer 0.8000
*/
