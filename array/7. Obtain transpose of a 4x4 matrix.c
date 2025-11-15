#include <stdio.h>

int main() {
    int matrix[4][4];
    int transpose[4][4];
    int i, j;

    printf("Enter elements of the 4x4 matrix:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Enter element matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nOriginal Matrix:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
    printf("\nTransposed Matrix:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
