//Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>
int main() {
    int a, b;
    int sum, diff, product, quotient;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Calculate operations
    sum = a + b;
    diff = a - b;
    product = a * b;

    // Handle division carefully
    if (b != 0)
        quotient = a / b;
    else {
        printf("Division by zero is not allowed.\n");
        return 0; // Exit early if division is invalid
    }

    // Display results
    printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n", sum, diff, product, quotient);

    return 0;
}
