/*
CH-230-A
conditional_pre_processing.c
Oscar Echeverria
oecheverri@jacobs-university.de
*/


#include <stdio.h>
#include <stdlib.h>
#define INTERMEDIATE

void ScalarProduct(int vect1[], int vect2[], int n ) {
    #ifdef INTERMEDIATE
        printf("The intermediate product values are: \n");
    #endif
    int scalarProd = 0;
    for(int idx = 0; idx < n; idx++){
        //if INTERMEDIATE is defined it will print values
    #ifdef INTERMEDIATE
        printf("%d\n",vect1[idx] * vect2[idx]);
    #endif
        //calculates the scalar product
    scalarProd = scalarProd + (vect1[idx] * vect2[idx]);
    }
    //prints the scalar product
    printf("The scalar product: %d\n", scalarProd);

}

int main() {
    int *dym_array;
    int *dym_array2;
    int how_many;

    printf("insert how big the array will be\n");
    scanf("%d",&how_many); //how big the array will be

    dym_array =((int *)malloc(sizeof(int )*how_many));
    if(dym_array == NULL) //checks for NULL
        exit (1);

    for(int i = 0; i < how_many; i++){  //fills in the array
        printf("input number\n");
        scanf("%d", &dym_array[i]);
    }

    dym_array2 =((int *)malloc(sizeof(int )*how_many));
    if(dym_array2 == NULL) //checks for NULL
        exit (1);

    for(int i = 0; i < how_many; i++){  //fills in the array
        printf("input number\n");
        scanf("%d", &dym_array2[i]);
    }

    ScalarProduct(dym_array,dym_array2,how_many);

    //Frees the arrays
    free(dym_array2);
    free(dym_array);


    return 0;
}
