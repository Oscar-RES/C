/*
CH-230-A
read_keyboard.c
Oscar Echeverria
oecheverri@jacobs-university.de
*/

#include <stdio.h>

int main(){
    double inputd1;
    double inputd2;
    int inputi1;
    int inputi2;
    char inputc1;
    char inputc2;
    scanf("%lf", &inputd1);
    scanf("%lf", &inputd2);
    scanf("%d", &inputi1);
    scanf("%d", &inputi2);
    getchar();
    scanf("%c", &inputc1);
    getchar();
    scanf("%c", &inputc2);
    double sum = inputd1+inputd2;
    printf("sum of doubles=%lf\n",sum);
    double difference = inputd1-inputd2;
    printf("difference of doubles=%lf\n", difference);
    double square= inputd1*inputd1;
    printf("square=%lf\n",square);
    int sumi = inputi1+inputi2;
    printf("sum of integers=%d\n", sumi);
    int producti = inputi1*inputi2;
    printf("product of integers=%d\n", producti);
    int sumc = inputc1+inputc2;
    printf("sum of chars=%d\n", sumc);
    int productc = inputc1*inputc2;
    printf("product of chars=%d\n", productc);
    int sumc2 = inputc1+inputc2;
    printf("sum of chars=%c\n", sumc2);
    printf("product of chars=%c\n",productc);



    return 0;


}

