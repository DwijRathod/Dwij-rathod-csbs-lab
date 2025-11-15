#include <stdio.h>

float add(float a, float b) { return a + b; }
float subtract(float a, float b) { return a - b; }
float multiply(float a, float b) { return a * b; }
float divide(float a, float b) {
    if(b != 0) return a / b;
    else {
        printf("Error: Division by zero!\n");
        return 0;
    }
}

int main() {
    float num1, num2;
    char op;

    printf("Enter expression (e.g., 5 + 3): ");
    scanf("%f %c %f", &num1, &op, &num2);

    switch(op) {
        case '+': printf("%.2f + %.2f = %.2f\n", num1, num2, add(num1, num2)); break;
        case '-': printf("%.2f - %.2f = %.2f\n", num1, num2, subtract(num1, num2)); break;
        case '*': printf("%.2f * %.2f = %.2f\n", num1, num2, multiply(num1, num2)); break;
        case '/': printf("%.2f / %.2f = %.2f\n", num1, num2, divide(num1, num2)); break;
        default: printf("Invalid operator!\n");
    }
    return 0;
}
