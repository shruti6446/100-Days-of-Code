//Rotate an array to the right by k positions.

#include <stdio.h>
int main() {
    int n, k, temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter number of positions to rotate: ");
    scanf("%d", &k);
    k = k % n;

    for (int r = 0; r < k; r++) {
        temp = arr[n - 1];
        for (int i = n - 1; i > 0; i--)
            arr[i] = arr[i - 1];
        arr[0] = temp;
    }

    printf("Array after rotation:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
