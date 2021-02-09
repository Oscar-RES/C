#include <stdio.h>
#include "stack.h"

void push(int item, struct stack* list){
    if(list->count < 12){ //size of stack
        list->array[list->count]=item; //does the pushing
        list->count = list->count + 1; //increasing count
    }else{
        printf("Popping underflow\n"); //incase of underflow
    }

}

void convert(int num1, struct stack* list){
    for(unsigned int num2 = num1; num2 != 0; num2 /= 2) //condition
        push(num2 % 2, list); //adds remainders to stack
    printf("the binary representation of %d is: ",num1);
    printstack(list); //prints stack
}

void printstack(struct stack* list){
    for(int i = list->count - 1; i>=0;i--){
        printf("%d",list->array[i]); //goes through stack
    }
    printf("\n");
}