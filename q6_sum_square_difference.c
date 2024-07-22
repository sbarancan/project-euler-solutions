#include <stdio.h>
#include <math.h>


int main(void)
{
    int until = 100;
    int sum;
    int sum_squares = 0;
    int squares_sum = 0;

    for (int i = 1; i <= until; i++)
    {
        sum_squares += pow(i, 2);
        sum += i; 
    }
    squares_sum = pow(sum, 2);

    printf("Sum of squares: %d and squares of the sum: %d\n", sum_squares, squares_sum);
    printf("Difference: %d", (squares_sum - sum_squares));
}