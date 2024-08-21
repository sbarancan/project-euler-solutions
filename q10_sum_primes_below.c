#include <stdio.h> 
#include <math.h>



int isPrime(long long num) 
{
    long long limit = sqrt(num);
    for (long long i = 2; i <= limit; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return num >= 2;
}

int main(void) 
{
    long long count = 0;
    long long sum_prime = 0;
    long long which_prime = 2000000;

    while(1)
    {
        if (isPrime(count)){
            sum_prime += count;
        }
        if (count == which_prime)
            break;

        count++;
    }

    printf("%lld is sum of primes below %lld", sum_prime, count);
}