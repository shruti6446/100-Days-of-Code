//Check if the elements on the diagonal of a matrix are distinct.

#include <stdio.h>
int main() {
    int n, i, j, k, flag = 1;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int a[n][n], diag[n];
    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < n; i++)
        diag[i] = a[i][i];

    for (i = 0; i < n; i++) {
        for (k = i + 1; k < n; k++) {
            if (diag[i] == diag[k]) {
                flag = 0;
                break;
            }
        }
    }

    if (flag)
        printf("Diagonal elements are distinct\n");
    else
        printf("Diagonal elements are not distinct\n");

    return 0;
}
