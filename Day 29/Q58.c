//Find the maximum and minimum element in an array.
#include <stdio.h>
int main() {
    int n, max, min;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    max = min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }

    printf("Maximum = %d, Minimum = %d", max, min);
    return 0;
}
