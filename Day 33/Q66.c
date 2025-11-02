//Insert an element in a sorted array at the appropriate position.

#include <stdio.h>
int main() {
    int n, key, i, j;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[100];

    printf("Enter sorted elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to insert: ");
    scanf("%d", &key);

    for (i = n - 1; i >= 0 && arr[i] > key; i--)
        arr[i + 1] = arr[i];
    arr[i + 1] = key;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
