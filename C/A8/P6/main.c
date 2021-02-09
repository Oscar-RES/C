/*
CH-230-A
read_write_doubles.c
Oscar Echeverria 
oecheverri@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

//just calling an array of chars of max size 80 as file names
char fname1 [80];
printf("enter name of file 1 (no need to put.txt)\n");
scanf("%s",fname1);
strcat(fname1,".txt"); //makes it more user friendly(no need for .txt)
char fname2 [80];
printf("enter name of file 2 (no need to put .txt)\n");
scanf("%s",fname2);
strcat(fname2,".txt");

FILE* fptr, *fptr2, *newfptr; //creates a pointer for second txt file
fptr = fopen ( fname1, "r"); //declaring it as read
if (fptr == NULL) {
    printf ("Some error occurred!\n") ;
    exit (1) ;
}
fptr2 = fopen(fname2, "r");
if (fptr2 == NULL){
    printf("Some error occurred!\n");
    exit (1);
}

double a , b;
//getting double from files
fscanf(fptr,"%lf", &a);
fscanf(fptr2,"%lf", &b);

//all the calculations
double sum = a + b;
double diff = a - b;
double prod = a * b;
double quot = a / b;

//creating new file 
newfptr = fopen("results.txt", "w");
if (newfptr == NULL){
    printf("some error occured!\n");
}
//printing results 
fprintf(newfptr,"%lf\n",sum);
fprintf(newfptr,"%lf\n",diff);
fprintf(newfptr,"%lf\n",prod);
fprintf(newfptr,"%lf\n",quot);

//closing files
fclose(fptr);
fclose(fptr2);
fclose(newfptr);

return 0;

}