#include <stdio.h>

#define ARRAY_SIZE 10

// Function to perform a left shift
void leftShift(int arr[], int n_positions) {
    int temp_arr[ARRAY_SIZE];
    for (int i = 0; i < ARRAY_SIZE; i++) {
        if (i + n_positions < ARRAY_SIZE) {
            temp_arr[i] = arr[i + n_positions];
        } else {
            temp_arr[i] = 0; // Pad with zero
        }
    }
    for (int i = 0; i < ARRAY_SIZE; i++) {
        arr[i] = temp_arr[i];
    }
}

// Function to perform a right shift
void rightShift(int arr[], int n_positions) {
    int temp_arr[ARRAY_SIZE];
    for (int i = 0; i < ARRAY_SIZE; i++) {
        if (i - n_positions >= 0) {
            temp_arr[i] = arr[i - n_positions];
        } else {
            temp_arr[i] = 0; // Pad with zero
        }
    }
    for (int i = 0; i < ARRAY_SIZE; i++) {
        arr[i] = temp_arr[i];
    }
}

int main() {
    int arr[ARRAY_SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int choice, n;

    printf("Original array: ");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter 1 for left shift, 2 for right shift: ");
    scanf("%d", &choice);

    printf("Enter number of positions to shift: ");
    scanf("%d", &n);

    if (choice == 1) {
        leftShift(arr, n);
        printf("Array after left shift by %d positions: ", n);
    } else if (choice == 2) {
        rightShift(arr, n);
        printf("Array after right shift by %d positions: ", n);
    } else {
        printf("Invalid choice.\n");
        return 1;
    }

    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
