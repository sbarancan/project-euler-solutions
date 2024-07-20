#include <stdio.h>

#define ARRAY_SIZE 1000
#define UPPER_LIMIT 4000000

int main()
{
    int sum = 0;
    int fibonacci[ARRAY_SIZE];
    fibonacci[0] = 1;
    fibonacci[1] = 2;

    for (int i = 0; i < ARRAY_SIZE - 2; i++)
    {
        if (fibonacci[i] >= UPPER_LIMIT)
            break;
        if (fibonacci[i] % 2 == 0)
            sum += fibonacci[i];
        fibonacci[i + 2] = fibonacci[i] + fibonacci[i + 1];
    }

    printf("%d\n", sum);
    return 0;
}
