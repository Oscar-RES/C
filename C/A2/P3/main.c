#include <stdio.h>
/*
CH-230-A
time_calc.c
Oscar Echeverria
oecheverri@jacobs-university.de
*/
int main() {
    int week;
    scanf("%d",&week);
    int day;
    scanf("%d", &day);
    int hour;
    scanf("%d.", &hour);
    int tothr = (hour)+(day*24)+(week*168); //multiplies the amount of days by 24, weeks by 168 and adds it to hours

    printf("Your total number of hours is: %d",tothr);
    return 0;
}
