/*
CH-230-A
cat_char.c
Oscar Echeverria
oecheverri@jacobs-university.de
*/

#include <stdio.h>

int main() {
    char c;
    scanf("%c", &c);
    if((c>='a' && c<='z') || (c>='A' && c<='Z')){
        printf("%c is a letter\n",c);
/* this first statement checks whether c is greater than 'a' and less than 'z' or
 or greater than 'A' and less than 'Z' to check if it's a character*/
    } else if (c>='0' && c<='9'){
        printf("%c is a digit\n", c);
/*if it isn't a character, this second statement checks whether the char is
 in between 0 and 9 to determine if it's a digit*/
    } else {
        printf("%c is some other symbol\n",c);
        /*if both conditions fail program prints that c is some other symbol*/
    }
    return 0;
}
