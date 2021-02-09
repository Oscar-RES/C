
#include <stdio.h>
#include <stdlib.h>

#ifndef stack_h
#define stack_h

struct stack {
unsigned int count;
int array[12]; // Container
};


//I didn't do 7.7 so I'll just put the functions relevant to 8.4

//this function will be used to push the remainders into the stack
void push(int item, struct stack* list);

//this function will print the stack
void printstack(struct stack* list);

//this function will do the binary conversion(I hope)
void convert(int num1, struct stack* list);

#endif