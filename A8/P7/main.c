/*
CH-230-A
read_write_doubles.c
Oscar Echeverria 
oecheverri@jacobs-university.de
*/


#include <stdio.h>
#include <stdlib.h>

int main() {

FILE* fptr, *fptr2, *newfptr; //creates a pointer for second txt file
fptr = fopen("text1.txt", "r"); //declaring it as read
if (fptr == NULL) {
    printf ("Some error occurred!\n") ;
    exit (1) ;
}
fptr2 = fopen("text2.txt", "r");
if (fptr2 == NULL){
    printf("Some error occurred!\n");
    exit (1);
}
newfptr = fopen("merge12.txt", "w");
if (newfptr == NULL){
    printf("Some error occurred!\n");
    exit (1);
}

char str[800];
while (fgets(str,800,fptr) != NULL){ //uses fgets to get the strings from lines
    fprintf(newfptr,"%s",str); //adds them to new file
}

while (fgets(str,800,fptr2) != NULL){
    fprintf(newfptr,"%s",str);
}
//frees files
free(fptr);
free(fptr2);
free(newfptr);
return 0;
}
