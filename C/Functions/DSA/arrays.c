#include <stdio.h>

int main() {
    int m, n;
    printf("Enter rows and columns of matrix: ");
    scanf("%d %d", &m, &n);

    int mat[m * n], trans[n * m];

    printf("Enter elements of matrix:\n");
    for (int i = 0; i < m * n; i++) {
        scanf("%d", &mat[i]);
    }

    // Transpose
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            trans[j * m + i] = mat[i * n + j];
        }
    }

    printf("\nTranspose of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", trans[i * m + j]);
        }
        printf("\n");
    }

    return 0;
}
