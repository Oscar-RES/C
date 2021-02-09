/*
CH-230-A
simple_fct_ptr.c
Oscar Echeverria
oecheverri@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

//prints the string in all uppercase using toupper()
void upperprint(char* string, int n){
    for(int i = 0; i < n; i++){
        printf("%c",toupper(string[i]));
    }
}

//prints the string in all lowercase using tolwer()
void lowerprint(char* string, int n){
    for(int i = 0; i < n; i++){
        printf("%c",tolower(string[i]));
    }
}
/*switches uppercase with lowercases and vise versa, using
toupper() and tolower() to determine when to print what, prints 
just the character on a default case */
void switcheroo(char* string, int n){
    for(int i = 0; i < n; i++){
        if(tolower(string[i]) == string[i]){
            printf("%c",toupper(string[i]));
        } else if(toupper(string[i]) == string[i]) {
            printf("%c",tolower(string[i]));

        } else {
            printf("%c",string[i]);
        }
    }
}
/*kills program and frees array
(while the int n is useless here, it has to have the same arguments)*/
void exitprogram(char* string, int n){
    free(string);
    exit(0);
}


int main(){
//dynamically allocates a string 
char* string = (char*) malloc(sizeof(char) * 100);
if (string == NULL){
    exit (1);
}
fgets(string, 50, stdin);

int func;//this is the int from the input 

//calls an array of function pointers
void(*func_array[5])(char*,int);
func_array[1] = upperprint; //sets index 1 to upperprint
func_array[2] = lowerprint; //sets index 2 to lowerprint
func_array[3] = switcheroo; //sets index 3 to switcheroo
func_array[4] = exitprogram;//sets index 3 to exitprogram

while (1){//infinite loop
//scanf to determine the index
scanf("%d",&func);
//calls the function inside the index
func_array[func](string,strlen(string));
}
return 0;
}