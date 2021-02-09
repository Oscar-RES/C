/*
CH-230-A
use_linked_list.c
Oscar Echeverria
oecheverri@jacobs-university.de
*/

#include <stdio.h>
#include "linked_list.h"

int main() {
    char action;
    int elem;
    struct list *ptr = NULL;
    int cont = 1;
    while (cont == 1) {
        scanf("%c",&action);
        switch(action){
            case 'a':
                scanf("%d", &elem);
                ptr = push_back(ptr,elem);
                break;
            case 'b':
                scanf("%d", &elem);
                ptr = push_front(ptr,elem);
                break;
            case 'r':
                ptr = deletelem(ptr);
                break;
            case 'p':
                print_list(ptr);
                break;
            case 'q':
                dispose_list(ptr);
                cont = 0;
                break;

        }
    }
}
