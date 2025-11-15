#include <stdio.h>

void printAscending(int n) {
    if (n < 1) return;
    printAscending(n - 1);
    printf("%d ", n);
}

void printDescending(int n) {
    if (n < 1) return;
    printf("%d ", n);
    printDescending(n - 1);
}

int sumNatural(int n) {
    if (n == 0) return 0;
    return n + sumNatural(n - 1);
}

void printReverseNumber(int num) {
    if (num == 0) return;
    printf("%d", num % 10);
    printReverseNumber(num / 10);
}

int main() {
    printf("Ascending: "); printAscending(10); printf("\n");
    printf("Descending: "); printDescending(10); printf("\n");
    printf("Sum 1 to 10: %d\n", sumNatural(10));

    int num = 12345;
    printf("Reverse of %d: ", num);
    printReverseNumber(num);
    printf("\n");

    return 0;
}
