//Write a program to swap the first and last digit of a number.

#include <stdio.h>
#include <math.h>

int main() {
    int n, first, last, digits, swapped;
    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10;
    digits = log10(n);
    first = n / pow(10, digits);
    swapped = last * pow(10, digits) + (n % (int)pow(10, digits) - last + first);

    printf("Number after swapping first and last digit: %d", swapped);
    return 0;
}
