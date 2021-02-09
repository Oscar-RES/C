/*
CH-230-A
comp_scalar.c
Oscar Echeverria
oecheverri@jacobs-university.de
*/


#include <stdio.h>
//function festival yet again
double ScalarProduct(double vect1[], double vect2[], int n ){
    double sproduct = 0;
    int idx = 0;
    for(idx=0;idx<n;idx++){
        sproduct += (vect1[idx]*vect2[idx]);
        /* makes sproduct equal to the multiplication of each index and adds them
         * that way the formula for the scalar product is met
         * by using the += I ensure that the value won't just simply be replaced
         * it will be added */
    }
    return sproduct;
}

void smallest(double vect[], int n){
    double smol=vect[0];
    int idx;
    for(idx=0; idx < n;idx++){
        if(smol > vect[idx]){
            smol = vect[idx];
            /*same thing as before, assigns small to the smallest
             * value by finding which is bigger and making the smaller
             * one into smol*/
        }
    }
    printf("The smallest = %lf\n",smol);

    for(idx=0; idx < n;idx++){
        if(smol == vect[idx]){
            printf("Position of smallest = %d\n",idx);
            break;
            /* When the program finds where the index of the smallest
             * is it prints that number, break; to ensure that the loop
             * stops once the condition has been met.*/
        }
    }
}

void largest(double vect[], int n){
    double big=vect[0];
    int idx;
    for(idx=0; idx < n;idx++){
        if(big < vect[idx]){
            big = vect[idx];
            /*finds the biggest value by assigning big to the first element of the array
             * and moving looking if big is smaller than the next position, basically
             * finding the largest one by looking for smaller ones */
        }
    }
    printf("The largest = %lf\n",big);
    for(idx=0; idx < n;idx++){
        if(big == vect[idx]){
            printf("Position of largest = %d\n",idx);
            break;
            /* When the program finds where the index of the smallest
            * is it prints that number, break; to ensure that the loop
            * stops once the condition has been met.*/
        }
    }
}



int main() {
    int n;
    scanf("%d",&n);

    double vector1[n];
    for(int i = 0; i < n; i++){
       scanf("%lf",&vector1[i]);
    }

    double vector2[n];
    for(int i = 0; i<n;i++){
        scanf("%lf",&vector2[i]);
    }

 /*   for(int i = 0;i<n;i++){
        printf("%lf ",vector1[i]);
    }
    printf("\n");
    for(int i = 0;i<n;i++){
        printf("%lf ",vector2[i]);
    }
    printf("\n");
    this code was just checking if the arrays were properly made
    not sure if next time I should comment it out or just delete it */

    printf("Scalar product=%lf\n",ScalarProduct(vector1,vector2,n));

    smallest(vector1,n); //calling functions for vector 1
    largest(vector1,n);

    smallest(vector2,n); //calling functions for vector 2
    largest(vector2,n);


    return 0;
}
