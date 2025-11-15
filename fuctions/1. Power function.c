
#include <stdio.h>

double power(double a, int b) {
    double result = 1.0;
    if (b >= 0) {
        for(int i = 0; i < b; i++)
            result *= a;
    } else {
        for(int i = 0; i < -b; i++)
            result /= a;
    }
    return result;
}

int main() {
    double base;
    int exp;
    printf("Enter base and exponent: ");
    scanf("%lf %d", &base, &exp);
    printf("%.2f raised to %d = %.2f\n", base, exp, power(base, exp));
    return 0;
}
