

#include <stdio.h>

int i = 2; //globally declared i
int isItPrime (int num) {

    if(num==1)
        return 0; //corner case
    if(i==num)
        return 1; // corner case 2
    if(num%i==0)
        return 0;
    else
    {
        i++; //goes to next divisor
        return isItPrime(num); //recursion
    }
}

int main() {
    int num;
    scanf("%d",&num);
    int isprime = isItPrime(num);
    if (isprime == 1){
        printf("%d is prime\n",num);
    } else{
        printf("%d is not prime\n",num);
    }
    return 0;
}
