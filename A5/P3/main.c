/*
CH-230-A
det_lowercase.c
Oscar Echeverria
oecheverri@jacobs-university.de
*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int count_lower(char* str){
    int counter = 0;

    for(*str = str[0];*str != '\0';str++){
        /* Assigns pointer to char in the string as long as there is a char
         to assign to. Moves up until there's no chars left*/
        if(*str >= 'a' && *str <='z'){
            counter++;
            /*checks whether the any value inside the pointer of the string
             is within the range of 'a' and 'z', in order to determine how many
             lowercase characters are in the string*/
        }
    }
    return counter;
}

int main() {
    char string[50];
    while(1){ //makes program run until user inputs '\n'(enter)
        fgets(string, sizeof(string), stdin);
        if(string[0] == '\n'){
            break;
            //stops code if empty string is entered
        } else{
            printf("There are %d lowercase letters\n",count_lower(&string[0]));
        }
    }
    return 0;
}
