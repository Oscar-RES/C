/*
CH-230-A
count_down.c
Oscar Echeverria
oecheverri@jacobs-university.de
*/
#include <stdio.h>

void Countdown(int n){
    if(n){
        printf("%d\n",n);
        //prints n
        Countdown(n-1);
        /*calls by itself minus 1 to count down from n recursively
         until n ends up being 0, doesn't print the 0*/
    }
}


int main() {
    int n;
    printf("Insert number to countdown from: \n");
    scanf("%d",&n);
    Countdown(n);


    return 0;
}
