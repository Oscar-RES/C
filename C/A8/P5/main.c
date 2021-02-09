/*
CH-230-A
read_ch_write_int.c
Oscar Echeverria 
oecheverri@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
//this chunk of code opens chars.txt 
FILE* fptr, *newfptr; //creates a pointer for second txt file
fptr = fopen ("chars.txt" , "r") ;//declaring it as read
if (fptr == NULL) {
printf ("Some error occurred ! \n") ;
exit (1) ;
}

int a = getc(fptr); //getting char from file
int b = getc(fptr); //getting char from file

int sum = a + b; //adding chars

newfptr = fopen("codesum.txt", "w"); //creates new file and sets it to write
if(newfptr == NULL){
    exit (1);
}
fprintf(newfptr,"%d",sum); //prints into codesum.txt

//closing files to prevent data loss
fclose(fptr);
fclose(newfptr);

}
