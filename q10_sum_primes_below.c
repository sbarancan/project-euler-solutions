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
    long long count = 5;
    long long sum = 5;  //assume 2 + 3,  and go 2 steps in loop
    long long limit = 2000000;

    while(1)
    {
        if (isPrime(count)){
            sum += count;
        }
        if (count >= limit)
            break;

        count += 2;
    }

    printf("%lld is sum of primes below %lld", sum, count);
}