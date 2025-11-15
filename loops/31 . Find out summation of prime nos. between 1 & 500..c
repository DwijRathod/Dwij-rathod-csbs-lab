#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) return 0;
    if (num == 2) return 1;
    if (num % 2 == 0) return 0;

    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int sum = 0;

    printf("Prime numbers between 1 and 500 are:\n");

    for (int i = 2; i <= 500; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
            sum += i;
        }
    }

    printf("\n\nSum of prime numbers between 1 and 500 = %d\n", sum);

    return 0;
}
