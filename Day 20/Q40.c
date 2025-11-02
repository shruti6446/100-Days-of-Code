//Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>
int main() {
    long long bin;
    printf("Enter a binary number: ");
    scanf("%lld", &bin);

    long long onesComp = 0, base = 1, rem;

    while (bin > 0) {
        rem = bin % 10;
        onesComp += ((rem == 0) ? 1 : 0) * base;
        bin /= 10;
        base *= 10;
    }

    printf("1's Complement = %lld", onesComp);
    return 0;
}
