// 1_matrix_operations.c
#include <stdio.h>
#define ROW 3
#define COL 3

void addMatrices(int *a, int *b, int *result) {
    for(int i = 0; i < ROW * COL; i++) {
        *(result + i) = *(a + i) + *(b + i);
    }
}

void subtractMatrices(int *a, int *b, int *result) {
    for(int i = 0; i < ROW * COL; i++) {
        *(result + i) = *(a + i) - *(b + i);
    }
}

void multiplyMatrices(int *a, int *b, int *result) {
    for(int i = 0; i < ROW; i++) {
        for(int j = 0; j < COL; j++) {
            *(result + i*COL + j) = 0;
            for(int k = 0; k < COL; k++) {
                *(result + i*COL + j) += *(a + i*COL + k) * *(b + k*COL + j);
            }
        }
    }
}

void printMatrix(int *mat) {
    for(int i = 0; i < ROW; i++) {
        for(int j = 0; j < COL; j++) {
            printf("%4d ", *(mat + i*COL + j));
        }
        printf("\n");
    }
}

int main() {
    int mat1[ROW][COL], mat2[ROW][COL], result[ROW][COL];

    printf("Enter elements of Matrix 1 (%dx%d):\n", ROW, COL);
    for(int i = 0; i < ROW; i++)
        for(int j = 0; j < COL; j++)
            scanf("%d", &mat1[i][j]);

    printf("Enter elements of Matrix 2 (%dx%d):\n", ROW, COL);
    for(int i = 0; i < ROW; i++)
        for(int j = 0; j < COL; j++)
            scanf("%d", &mat2[i][j]);

    printf("\nMatrix Addition:\n");
    addMatrices((int*)mat1, (int*)mat2, (int*)result);
    printMatrix((int*)result);

    printf("\nMatrix Subtraction:\n");
    subtractMatrices((int*)mat1, (int*)mat2, (int*)result);
    printMatrix((int*)result);

    printf("\nMatrix Multiplication:\n");
    multiplyMatrices((int*)mat1, (int*)mat2, (int*)result);
    printMatrix((int*)result);

    return 0;
}
