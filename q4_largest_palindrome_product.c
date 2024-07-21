#include <stdio.h>
#include <math.h>

int isPalindrome(int num) {
    int original = num;
    int reversed = 0;

    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return original == reversed;
}

int main(){
    int largestPalindrome = 0;

    for (int i = 999; i >= 100; i--) {
        for (int j = i; j >= 100; j--) {
            int product = i * j;
            if (product <= largestPalindrome) {
                break; // Since products will decrease, no need to check further
            }
            if (isPalindrome(product)) {
                largestPalindrome = product;
            }
        }
    }

    printf("Largest palindrome from the product of two 3-digit numbers: %d\n", largestPalindrome);

    return 0;
}