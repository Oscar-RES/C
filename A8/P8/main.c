/*
CH-230-A
8.8.c
Oscar Echeverria 
oecheverri@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//defines end of words 
int islim (char acter){
    char lims[8] = "\n .\t?!\r";
    for (int i = 0; i < 8;i++){
        if (lims[i] == acter)
            return 1;
    }
    return 0;
}

int main() {
    char fname1 [80];
printf("enter name of file 1 (no need to put.txt)\n");
scanf("%s",fname1);
strcat(fname1,".txt");
FILE* fptr; //creates a pointer for second txt file
fptr = fopen ( fname1, "r"); //declaring it as read
if (fptr == NULL) {
    printf ("Some error occurred!\n") ;
    exit (1) ;
}
char acter = fgetc(fptr);
int count = 0;
char prev = acter;

while(acter != EOF){ //while it isnt in end of file
    if(islim(acter) && !islim(prev)){ //uses the lims function
            count++; //adds to word character
        }
        prev = acter; 
        acter = fgetc(fptr); //goes to next

    }
    printf("The file contains %d words\n", count);
    fclose(fptr);
    return 0;
}


