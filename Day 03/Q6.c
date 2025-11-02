//Write a program to swap two numbers using a third variable.

#include <stdio.h>
int main() {
    int a, b, temp;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Swap using a third variable
    temp = a;
    a = b;
    b = temp;

    // Display result
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
