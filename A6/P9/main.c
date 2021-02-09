
/*
CH-230-A
enhanced_linked_list.c
Oscar Echeverria
oecheverri@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

struct list {
    int info;
    struct list *next;
};
//prints the list
void print_list(struct list* my_list) {
    struct list *p;
    for (p = my_list; p; p = p->next) {
        printf("%d ", p->info);
    }
    printf("\n");
}
//adds an element to the front
struct list* push_front(struct list *my_list, int value){
   struct list *newel;
   newel = (struct list *) malloc(sizeof(struct list));
   if (newel == NULL){
       printf("Error allocating memory\n");
       return my_list;
   }
   newel->info = value;
   newel->next = my_list;
   return newel;
}
//adds an element to the back
struct list* push_back(struct list* my_list, int value){
    struct list *cursor, *newel;
    cursor = my_list;
    newel = (struct list *) malloc(sizeof(struct list));
    if (newel == NULL){
        printf("Error allocating memory\n");
        return my_list;
    }
    newel->info = value;
    newel->next = NULL;
    if (my_list == NULL)
        return newel;
    while (cursor->next != NULL)
        cursor = cursor->next;
    cursor->next = newel;
    return my_list;
}
//deletes the first element of the list
struct list* deletelem(struct list * my_list){
    struct list* cursor = my_list;
    if(my_list == NULL){
        return my_list;
    }
    my_list = my_list->next;
    free(cursor);
    return (my_list);
}
//nukes the list
void dispose_list(struct list* my_list) {
    struct list *nextelem;
    while (my_list != NULL) {
        nextelem = my_list->next;
        free(my_list);
        my_list = nextelem;
    }
}
//adds a number to a specific position in the array
struct list* add(struct list* my_list, int position, int value){
    struct list * cursor ;
    cursor = my_list ;
    struct list* newel = (struct list *) malloc ( sizeof ( struct list ));
    if ( newel == NULL ) {
        printf (" Error allocating memory \n");
        return my_list ;
    }
    //counter for the position, checks for valid positions(Nothing less than 0)
    int counter = 1;
    if (position < 0){
        printf("Invalid position!\n");
        return my_list;
    }
    while ( cursor -> next != NULL && counter < position ){
        cursor = cursor -> next ;
        counter++;
    }
   //checks no position go over the counter(beyond the size of list)
    if(position > counter){
        printf("Invalid position!\n");
        return my_list;
    }
    struct list* cursor2 = cursor;
    newel->info = value;
    cursor2 = cursor2->next;

    cursor->next= newel;
    newel->next = cursor2;

    return my_list ;
}
struct list* reversal(struct list* my_list) {
    /*we will use 3 points to move around the list, that way
     * we can easily manipulate any string because the three positions that
     * will be manipulated are here */
    struct list* previous = NULL;
    struct list* current = my_list;
    struct list* next = NULL;
    while (current != NULL) {
        next = current->next;
        //line that does the magic(reverses)
        current->next = previous;
        //moves the pointers to keep going through the list
        previous = current;
        current = next;
    }
    my_list = previous;
    return my_list;

}





int main() {
    char action;
    int elem;
    int position;
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
            case 'i':
                scanf("%d",&position);
                scanf("%d",&elem);
                add(ptr,position,elem);
                break;
            case 'R':
                ptr = reversal(ptr);
                break;


        }
    }


}
