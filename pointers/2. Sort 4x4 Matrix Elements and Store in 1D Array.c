// 2_sort_matrix_to_1d.c
#include <stdio.h>
#define SIZE 4

void sortMatrix(int mat[SIZE][SIZE], int sorted[]) {
    int index = 0;
    // Copy all elements to 1D array
    for(int i = 0; i < SIZE; i++)
        for(int j = 0; j < SIZE; j++)
            sorted[index++] = mat[i][j];

    // Bubble sort
    for(int i = 0; i < SIZE*SIZE-1; i++) {
        for(int j = 0; j < SIZE*SIZE-i-1; j++) {
            if(sorted[j] > sorted[j+1]) {
                int temp = sorted[j];
                sorted[j] = sorted[j+1];
                sorted[j+1] = temp;
            }
        }
    }
}

int main() {
    int matrix[SIZE][SIZE], sorted[SIZE*SIZE];

    printf("Enter 4x4 matrix elements:\n");
    for(int i = 0; i < SIZE; i++)
        for(int j = 0; j < SIZE; j++)
            scanf("%d", &matrix[i][j]);

    sortMatrix(matrix, sorted);

    printf("\nSorted elements in 1D array:\n");
    for(int i = 0; i < SIZE*SIZE; i++)
        printf("%d ", sorted[i]);
    printf("\n");

    return 0;
}
