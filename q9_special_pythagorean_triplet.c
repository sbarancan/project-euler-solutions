// a < b < c
// a^2 + b^2 = c^2 and a+b+c = 1000
#include <stdio.h>

int main(void) 
{
    int a, b, c;
    int result;

    for (a = 1; a < 1000 / 3; a++) {
        for (b = a + 1; b < 1000 / 2; b++) {
            c = 1000 - a - b;
            if (a * a + b * b == c * c) {
                result = a * b * c;
                printf("a = %d, b = %d, c = %d, abc = %d\n", a, b, c, result);
                return 0;
            }
        }
    }

    return 0;
}
