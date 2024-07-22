#include <stdio.h>
#include <math.h>

int isPrime(long long num)
{
    for (int i = 2; i<=sqrt(num); i++)
    { 
        if (num % i == 0)
            return 0;
    }
    return num >= 2;
}

int main(void) 
{
    long long count = 0;
    int count_prime = 0;
    int which_prime = 10001;
    long long prime;
    while(1)
    {
        if (isPrime(count)){
            prime = count;
            count_prime += 1;
        }
        if (count_prime == which_prime)
            break;

        count++;
    }

    printf("%d st prime: %d", count_prime, prime);
}
