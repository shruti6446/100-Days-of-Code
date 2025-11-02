//Write a program to check if a number is a palindrome.

#include <stdio.h>
int main() {
    int n, rev = 0, rem, temp;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;

    while (n > 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    if (rev == temp)
        printf("%d is a Palindrome number.", temp);
    else
        printf("%d is not a Palindrome number.", temp);

    return 0;
}
