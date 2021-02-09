/*
CH-230-A
double_linked_list.c
Oscar Echeverria
oecheverri@jacobs-university.de
*/

#include <stdlib.h>
#include <stdio.h>
struct delete{
    char word;
    struct delete* next;
    struct delete* prev;
};
struct delete* push_front(struct delete* list, char value){
    struct delete * newel ;
    newel = (struct delete *) malloc ( sizeof ( struct delete ));
    if ( newel == NULL ) {
        printf (" Error allocating memory \n");
        return list ;
    }
    newel->word = value;

    if (list != NULL) list->prev = newel;
    newel->next = list;
    newel->prev = NULL;
    return newel;
}
struct delete* delete(struct delete* list, char value){
    struct delete* navigator = list;
    struct delete* cursor1 = list;
    struct delete* cursor2 = list;
    int count = 0;
    while (navigator != NULL){

        if (navigator->word == value){
            count += 1;
            cursor1 = navigator;
            //make last item point to item after it
            //
            if (navigator->prev != NULL && navigator->next != NULL){
                cursor2 = cursor1->prev;
                cursor2->next = cursor1->next;
                cursor2 = cursor1->next;
                cursor2->prev = cursor1->prev;
                free(cursor1);
            }
            else if (navigator->prev == NULL && navigator->next ==NULL){
                return NULL;
                }

            else if(navigator->prev == NULL){
                    cursor2 =cursor1->next;
                    cursor2->prev = NULL;
                    free(cursor1);
                    list = cursor2;
            }
            else if(navigator->next == NULL){
                cursor2 =cursor1->prev;
                cursor2->next = NULL;
                free(cursor1);
            }
        }
        navigator = navigator->next;
    }
    if (count == 0) printf("The element is not in the list!\n");
    return list;
}
void print_list (struct delete* my_list ) {
    struct delete * p ;
    // printf("starting the printing\n");
    for ( p = my_list ; p; p = p -> next ) {
        printf ("%c ", p -> word ) ;
    }
    printf("\n");
}
//prints ll backwards
void print_backwards(struct delete* my_list){
    struct delete* p;
    //corner case if ll is null
    if (my_list == NULL){
        printf("\n");
        return;
    }
    //stop when next is NULL so we can iterate backwards
    for (p = my_list; p->next != NULL; p = p->next){} //reach end
    for(; p!= NULL; p = p->prev){
        printf ("%c ", p -> word ) ;
    }
    printf("\n");
}
void dispose_list ( struct delete * my_list ) {
    struct delete * nextelem ;
    while ( my_list != NULL ) {
        nextelem = my_list -> next ;
        free ( my_list ) ;
        my_list = nextelem ;
    }
}

int main(int argc, const char * argv[]) {
    int x;
    char c;
    struct delete* ptr = NULL;
    int cont = 1;
    while (cont == 1){
        scanf(" %d", &x);

        switch(x){
            case 1:
                scanf(" %c", &c);
                ptr = push_front(ptr, c);
                break;
            case 2:
                scanf(" %c", &c);
                ptr = delete(ptr, c);
                break;
            case 3:
                print_list(ptr);
                break;
            case 4:
                print_backwards(ptr);
                break;
            case 5:
                dispose_list(ptr);
                cont = 0;
                break;
            default:
                printf("not a valid command\n");
                break;
                
                
        }

    }
    return 0;
}