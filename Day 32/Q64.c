//Find the digit that occurs the most times in an integer number.

#include <stdio.h>
int main() {
    long n;
    int count[10] = {0}, digit, max = 0, result = 0;
    printf("Enter an integer: ");
    scanf("%ld", &n);

    if (n < 0) n = -n;

    while (n > 0) {
        digit = n % 10;
        count[digit]++;
        n /= 10;
    }

    for (int i = 0; i < 10; i++) {
        if (count[i] > max) {
            max = count[i];
            result = i;
        }
    }

    printf("Most frequent digit: %d (appears %d times)", result, max);
    return 0;
}


