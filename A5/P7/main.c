/*
CH-230-A
concat_str.c
Oscar Echeverria
oecheverri@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char string1[100];
    fgets(string1,sizeof(string1),stdin);
    string1[strlen(string1)-1]='\0';//getting rid of the \n

    char string2[100];
    fgets(string2,sizeof(string2),stdin);
    string2[strlen(string2)-1]='\0';//getting rid of the \n


    char *conctstr = malloc(sizeof(char)*((strlen(string1))+(strlen(string2))));
    //calls the dynamic array and makes the size of it the result of the size of both strings
    if(conctstr == NULL){
        exit(1);
    }

    conctstr = strcat(string1,string2); //does the concatenation and puts it in the new string
    printf("Result of concatenation: %s\n",conctstr);



    return 0;
}
