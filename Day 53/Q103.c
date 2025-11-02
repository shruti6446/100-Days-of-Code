#include <stdio.h>
int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n], sum = 0, leftSum = 0;

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    for (int i = 0; i < n; i++) {
        if (leftSum == sum - leftSum - arr[i]) {
            printf("Pivot index = %d\n", i);
            return 0;
        }
        leftSum += arr[i];
    }

    printf("Pivot index = -1\n");
    return 0;
}
