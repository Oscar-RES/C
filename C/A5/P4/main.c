/*
CH-230-A
divide_input.c
Oscar Echeverria
oecheverri@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

void divideby5(float arr[],int size){
    float divided;
    for(int i = 0; i < size; i++){
        divided = arr[i]/5;
        arr[i] = divided;
        //divides all of the elements in the array by 5 with a loop
    }
}

int main() {
  float *array;
  int n;

  printf("Please insert size of the array:\n");
  scanf("%d",&n);

  array = malloc(sizeof(float)*n);
  if(array == NULL)
      exit (1);
//dynamically allocates an array of floats
  for(int i = 0;i<n;i++){
      printf("insert values:\n");
      scanf("%f",&array[i]);
      //loop to fill an array with user input
  }

    printf("Before:\n");
    for(int i = 0; i < n;i++){
        printf("%.3f ",array[i]);
    }
    printf("\n");

    divideby5(array,n); //calls the function

    printf("After:\n");
    for(int i = 0; i < n;i++){
        printf("%.3f ",array[i]);
    }
    printf("\n");

    free(array);//frees the array at the end
    return 0;
}
