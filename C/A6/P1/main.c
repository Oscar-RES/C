/*
CH-230-A
swap_2_var.c
Oscar Echeverria
oecheverri@jacobs-university.de
*/


#include <stdio.h>
#define swap(type, a,b) {type temp=a; \
                a=b;                   \
                b = temp;}
/*macro swaps a and b in the preprocessor, assigns the temp to a, makes a = b (the swap
 * and then makes b = temp, it has to be in this order, if not the b would've been
 * completely ignored in my code */
int main() {
    int n1,n2;
    scanf("%d",&n1);
    scanf("%d",&n2);

    double d1,d2;
    scanf("%lf",&d1);
    scanf("%lf",&d2);

    swap(int, n1,n2);
    swap(double, d1,d2)
    printf("After swapping:\n");
    printf("%d\n",n1);
    printf("%d\n",n2);
    printf("%.6lf\n",d1);
    printf("%.6lf\n",d2);




    return 0;
}
