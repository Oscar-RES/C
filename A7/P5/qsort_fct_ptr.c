/*
CH-230-A
qsort_fct_ptr.c
Oscar Echeverria
oecheverri@jacobs-university.de
*/

//sorts in ascending order
int ascendingsort(const void *va, const void *vb) { 
    const int* a = (const int*) va;
    const int* b = (const int*) vb;
    if (*a < *b) return -1;
    else if (*a > *b) return 1;
    else return 0;

}
//sorts in descending order
int descendingsort(const void *va, const void *vb) { 
    const int* a = (const int*) va;
    const int* b = (const int*) vb;
    if (*a > *b) return -1;
    else if (*a < *b) return 1;
    else return 0;

}


#include <stdio.h>
#include <stdlib.h>


int main(){
    //size of array
    int n;
    scanf("%d",&n);
    int array [n];
    //creating array
    for(int i = 0; i < n; i++){
        scanf("%d",&array[i]);
    }
    //function pointer
    int (*fct)(const void*, const void*);


    int i = 1;//constant(for the while)

    while(i == 1){
            char action;
            scanf("%c",&action);
        switch (action){
            case 'a':
            fct = &ascendingsort; // <--assigns pointer to that function
            qsort(array, n, sizeof(array[0]), fct);
            for (int i = 0; i < n; i++){
            printf("%d ",array[i]);
            }
            printf("\n");
            break;
            case 'd':
            fct = &descendingsort; // <-- assigns pointer to that function 
            qsort(array, n, sizeof(array[0]), descendingsort);
                for (int i = 0; i < n; i++){
                printf("%d ",array[i]);
             }
            printf("\n");
            break;
            case 'e':
            i = 0; //changes the constant to exit the loop
            break;
        }
    }
return 0;

}
