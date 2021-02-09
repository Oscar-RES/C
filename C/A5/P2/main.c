/*
CH-230-A
divide_cnst.c
Oscar Echeverria
oecheverri@jacobs-university.de
*/

#include <stdio.h>

void divideby5(float arr[],int size){
    float divided;
    for(int i = 0; i < size; i++){
        divided = arr[i]/5;
        arr[i] = divided;
    }
}
//function divides every element of an array by 5
int main() {

    float arr[] = {5.500,6.500,7.750,8.000,9.600,10.360};//makes array
    printf("Before:\n");
    for(int i = 0; i < 6;i++){
        printf("%.3f ",arr[i]);
    }
    printf("\n");
    divideby5(arr,6); //calls the function

    printf("After:\n");
    for(int i = 0; i < 6;i++){
        printf("%.3f ",arr[i]);
    }
    printf("\n");



    return 0;
}
