/*
CH-230-A
pointer_arith.c
Oscar Echeverria
oecheverri@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

void generatematrix(int **arr, int ROW, int COL){

    for(int i = 0; i<ROW;i++)
        for(int j = 0; j< COL;j++){
            arr[i][j] = i * j;
            scanf("%d",&arr[i][j]);
            printf("assigning %d to row %d column %d\n",arr[i][j],i,j);
        }
}

void printmatrix(int **arr, int ROW, int COL){
    for(int i = 0; i < ROW; i++){
        for(int j = 0; j < COL; j++){
            printf("%d ", arr[i][j]);
        }printf("\n");
    }
}



int main() {
    int n;
    scanf("%d",&n);
    int m;
    scanf("%d",&m);
    int p;
    scanf("%d",&p);
    int **array;
    array = (int **) malloc(sizeof(int *) * n);
    if (array == NULL)
        exit (1);
    for (int i = 0; i < 3; i ++) {
        array[i] = (int *) malloc(sizeof(int) * m);
        if (array[i] == NULL)
            exit (1);
    }
    generatematrix(array,n, m);
    printmatrix(array,n, m);

    int **array2;
    array2 = (int **) malloc(sizeof(int *) * m);
    if (array2 == NULL)
        exit (1);
    for (int i = 0; i < 3; i ++) {
        array2[i] = (int *) malloc(sizeof(int) * p);
        if (array2[i] == NULL)
            exit (1);
    }
    generatematrix(array2,m, p);
    printmatrix(array2, m, p);



    return 0;
}
