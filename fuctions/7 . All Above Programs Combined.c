#include <stdio.h>

double power(double a, int b) {
    double res = 1.0;
    if (b >= 0) for(int i = 0; i < b; i++) res *= a;
    else for(int i = 0; i < -b; i++) res /= a;
    return res;
}

int isLeapYear(int y) {
    return (y % 400 == 0) || (y % 4 == 0 && y % 100 != 0);
}

unsigned long long fact(int n) {
    if (n <= 1) return 1;
    return n * fact(n - 1);
}

void swapValue(int x, int y) {
    int t = x; x = y; y = t;
    printf("Inside swapValue: x=%d, y=%d\n", x, y);
}

void findMaxMin(int arr[], int n, int *mx, int *mn) {
    *mx = *mn = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > *mx) *mx = arr[i];
        if(arr[i] < *mn) *mn = arr[i];
    }
}

int main() {
    int choice;
    do {
        printf("\n\n=== MENU ===\n");
        printf("1. Power\n2. Leap Year\n3. Factorial\n");
        printf("4. Swap (Call by Value)\n5. Max-Min Array\n");
        printf("6. Calculator\n7. Exit\nChoice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: {
                double a; int b;
                printf("Base and exponent: "); scanf("%lf %d", &a, &b);
                printf("Result: %.2f\n", power(a, b));
                break;
            }
            case 2: {
                int y; printf("Year: "); scanf("%d", &y);
                printf("%d is %sLeap Year\n", y, isLeapYear(y) ? "" : "not ");
                break;
            }
            case 3: {
                int n; printf("Number: "); scanf("%d", &n);
                printf("Factorial = %llu\n", fact(n));
                break;
            }
            case 4: {
                int x=10, y=20;
                printf("Before: x=%d, y=%d\n", x, y);
                swapValue(x, y);
                printf("After: x=%d, y=%d\n", x, y);
                break;
            }
            case 5: {
                int n; printf("Size: "); scanf("%d", &n);
                int arr[100];
                printf("Elements: ");
                for(int i=0; i<n; i++) scanf("%d", &arr[i]);
                int mx, mn;
                findMaxMin(arr, n, &mx, &mn);
                printf("Max=%d, Min=%d\n", mx, mn);
                break;
            }
            case 6: {
                float a, b; char op;
                printf("Expr: "); scanf("%f %c %f", &a, &op, &b);
                if(op=='+') printf("%.2f\n", a+b);
                else if(op=='-') printf("%.2f\n", a-b);
                else if(op=='*') printf("%.2f\n", a*b);
                else if(op=='/') printf("%.2f\n", b!=0 ? a/b : 0);
                break;
            }
        }
    } while(choice != 7);
    printf("Goodbye!\n");
    return 0;
}
