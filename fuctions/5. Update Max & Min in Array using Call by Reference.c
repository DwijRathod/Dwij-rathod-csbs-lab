#include <stdio.h>
#include <stdlib.h>

int* getMinMax(int arr[], int low, int high) {
    static int result[2];

    // Base case: single element
    if (low == high) {
        result[0] = arr[low];
        result[1] = arr[low];
        return result;
    }

    // Base case: two elements
    if (high == low + 1) {
        if (arr[low] < arr[high]) {
            result[0] = arr[low];
            result[1] = arr[high];
        } else {
            result[0] = arr[high];
            result[1] = arr[low];
        }
        return result;
    }

    int mid = (low + high) / 2;

    // Recurse on left half
    int* left = getMinMax(arr, low, mid);

    // Recurse on right half
    int* right = getMinMax(arr, mid + 1, high);

    // Combine min
    result[0] = left[0] < right[0] ? left[0] : right[0];

    // Combine max
    result[1] = left[1] > right[1] ? left[1] : right[1];

    return result;
}

int* findMinMax(int arr[], int n) {
    return getMinMax(arr, 0, n - 1);
}

int main() {
    int arr[] = {3, 5, 4, 1, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int* result = findMinMax(arr, n);
    printf("%d %d\n", result[0], result[1]);
    return 0;
}
