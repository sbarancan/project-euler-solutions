//Answer = Smallest number divisible by 1 to 20: 232792560
#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long lcm(long long a, int b) {
    return (a * b) / gcd(a, b);
}

int main(void) {
    int limit = 20;
    long long number = 1;

    for (int i = 1; i <= limit; i++) {
        number = lcm(number, i);
    }

    printf("Smallest number divisible by 1 to %d: %lld\n", limit, number);

    return 0;
}
