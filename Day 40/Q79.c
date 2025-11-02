//Perform diagonal traversal of a matrix.

#include <stdio.h>
int main() {
    int n, m, i, j;
    printf("Enter rows and columns: ");
    scanf("%d%d", &n, &m);

    int a[n][m];
    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            scanf("%d", &a[i][j]);

    printf("Diagonal traversal:\n");

    // Traverse from first row
    for (int col = 0; col < m; col++) {
        i = 0;
        j = col;
        while (i < n && j >= 0) {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    // Traverse from last column to last row
    for (int row = 1; row < n; row++) {
        i = row;
        j = m - 1;
        while (i < n && j >= 0) {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    return 0;
}
