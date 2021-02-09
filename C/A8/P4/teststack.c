/*
CH-230-A
teststack.c
Oscar Echeverria 
oecheverri@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main(){
    struct stack* my_stack;
    my_stack = (struct stack*)malloc(sizeof(struct stack));
    if( my_stack == NULL){
        exit(1);
    }
    my_stack ->count = 0;
    unsigned int num;
    scanf("%d",&num);
    convert(num,my_stack);
}