#include <stdio.h>
#include <math.h>

int main(void)
{
    int limit = 20; //1 to 20
    int number = 20;

    for (int i = limit; i > 0; i--) {
        number += number*i;
    }

}