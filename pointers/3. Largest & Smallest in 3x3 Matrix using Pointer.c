// 3_max_min_pointer.c
#include <stdio.h>
#define N 3

int main() {
    int matrix[N][N];
    int *ptr = &matrix[0][0];

    printf("Enter 3x3 matrix:\n");
    for(int i = 0; i < N*N; i++)
        scanf("%d", (ptr + i));

    int max = *ptr, min = *ptr;

    for(int i = 1; i < N*N; i++) {
        if(*(ptr + i) > max) max = *(ptr + i);
        if(*(ptr + i) < min) min = *(ptr + i);
    }

    printf("Largest number: %d\n", max);
    printf("Smallest number: %d\n", min);

    return 0;
}
