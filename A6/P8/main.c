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
