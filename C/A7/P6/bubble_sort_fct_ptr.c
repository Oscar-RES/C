/*
CH-230-A
bubble_sort_fct_ptr.c
Oscar Echeverria
oecheverri@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person { 
    char name[30]; 
    int age;
};

int acompare(const struct person*, const struct person*);
//compare function with names
int ncompare(const struct person* a, const struct person* b){
    int result = strcmp(a->name, b->name);
    if (result < 0){
        return -1;
    } else if (result > 0){
    return 1;
} else {
    return acompare(a,b);
}
}
//compare function with age 
int acompare(const struct person* a, const struct person* b){
    if (a->age < b->age){
        return -1;
    } else if(a->age > b->age){
        return 1;

    } else {
        return ncompare(a,b);
    }
}
//implementation
void bubblesort(struct person* base, size_t n, int (*compare) (const struct person*a, const struct person* b)){
    int swapped;
    struct person temp;
    for(int i = 0; i < n - 1; i++){
        swapped = 0;
        for (int j = 0; j < n - i - 1; j++){
            if (compare (&base[j], &base[j + 1]) > 0){
                temp = base[j];
                base[j] = base[j + i];
                base[j + 1] = temp;
                swapped = 1;
            }
        }
            if(swapped == 0){
                 break;
    }
 }

}


int main (){
    int n;
    scanf("%d", &n);
    getchar();
    
    struct person* array;
    array = (struct person*) malloc(sizeof(struct person) * n);
    if(array == NULL){
        exit (1);
    }
    for(int i = 0; i< n; i++){
        fgets(array[i].name, sizeof(array[i].name), stdin);
        //gets rid of the \n
        (array[i].name)[strlen(array[i].name) - 1] = '\0';
        scanf("%d", &array[i].age);
        getchar();

    }
    bubblesort(array, n, ncompare);
    for(int i = 0; i < n; i++){
        printf("{%s, %d}; ", array[i].name, array[i].age);
    }
    printf("\n");

    bubblesort(array ,n, acompare);
    for (int i = 0; i < n; i++) {
        printf("{%s, %d}; ", array[i].name, array[i].age);
    }
    printf("\n");
    return 0;
}

