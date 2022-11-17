#include <stdio.h>

int main() {
    // Write a program for euclid's algorithm to find the gcd of two numbers.
    int a = 0, b = 0;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int gcd = 1;
    for (int i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }
    printf("GCD of %d and %d is %d\n", a, b, gcd);
    return 0;
}