#include <stdio.h>
#include <math.h>
#include <string.h>

int isHex(char *s) {
    return (strlen(s) > 2 && s[0] == '0' && (s[1] == 'x' || s[1] == 'X'));
}

int main() {
    char strA[20], strB[20];
    double a, b;
    char op;

    printf("Enter first number (prefix 0x for hex): ");
    scanf("%s", strA);

    printf("Enter operator (+, -, *, /, ^): ");
    scanf(" %c", &op);

    printf("Enter second number (prefix 0x for hex): ");
    scanf("%s", strB);

    // Convert inputs
    if (isHex(strA))
        sscanf(strA, "%x", (int *)&a);
    else
        sscanf(strA, "%lf", &a);

    if (isHex(strB))
        sscanf(strB, "%x", (int *)&b);
    else
        sscanf(strB, "%lf", &b);

    switch(op) {
        case '+': printf("Result: %.2lf\n", a + b); break;
        case '-': printf("Result: %.2lf\n", a - b); break;
        case '*': printf("Result: %.2lf\n", a * b); break;
        case '/':
            if (b != 0) printf("Result: %.2lf\n", a / b);
            else printf("Error: Division by zero\n");
            break;
        case '^': printf("Result: %.2lf\n", pow(a, b)); break;
        default: printf("Invalid operator\n");
    }

    return 0;
}


//check check chck
