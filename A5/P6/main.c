/*
CH-230-A
pointer_arith.c
Oscar Echeverria
oecheverri@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

   int how_many;
   scanf("%d",&how_many);
   float *dym_array;
   int *posbefore;

    dym_array =((float *)malloc(sizeof(float )*how_many));
    if(dym_array == NULL) //checks for NULL
        exit (1);

    for(int i = 0; i < how_many; i++){  //fills in the array
        printf("input number\n");
        scanf("%f", &dym_array[i]);
    }

    for(int i = 0; i < how_many;i++){
        if(dym_array[i] < 0){
            posbefore = &i;
            break;
            //assigns i to the posbefore pointer when the value is found
        }
    }
    printf("Before the first negative value: %d elements\n",*posbefore);

    return 0;
}
