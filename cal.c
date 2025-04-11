#include <stdio.h>
#include <math.h>  // Added

int main() {
    double a, b;
    char op;

    printf("Enter first number: ");
    scanf("%lf", &a);

    printf("Enter operator (+, -, *, /, ^): ");  // Updated prompt
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%lf", &b);

    switch(op) {
        case '+': printf("Result: %.2lf\n", a + b); break;
        case '-': printf("Result: %.2lf\n", a - b); break;
        case '*': printf("Result: %.2lf\n", a * b); break;
        case '/':
            if (b != 0) printf("Result: %.2lf\n", a / b);
            else printf("Error: Division by zero\n");
            break;
        case '^': printf("Result: %.2lf\n", pow(a, b)); break;  // New case
        default: printf("Invalid operator\n");
    }

    return 0;
}
