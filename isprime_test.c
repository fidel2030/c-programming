#include <stdlib.h>
#include <stdio.h>
#include "isprime.h"

int main()
{
    bool isPrime;
    int N = 7;
    isPrime = isPrime(N);

    if(isPrime == 0)
        printf("Number %i: is not prime", N);
    else
        printf("Number %i: is prime", N);
    return 0;
}

