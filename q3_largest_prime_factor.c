#include <stdio.h>
#include <math.h>

int isPrime(long long num)
{
    for (int i = 2; i<=sqrt(num); i++)
    { 
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    long long number = 600851475143;
    long long largestFactor = 0;

    for (long long i=3; i<=sqrt(number); i=i+2)
    {
        if(isPrime(i) && (number%i ==0))
            largestFactor = i;
    }

    printf("The largest factor of %lld is %lld\n", number, largestFactor);
    return 0;
}

