//Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>
int main() {
    int n, binary = 0, base = 1, rem;
    printf("Enter a number: ");
    scanf("%d", &n);

    int num = n;
    while (n > 0) {
        rem = n % 2;
        binary = binary + rem * base;
        base = base * 10;
        n = n / 2;
    }

    printf("Binary representation of %d is %d", num, binary);
    return 0;
}
