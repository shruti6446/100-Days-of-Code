//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>

int main() {
    float a, b;
    char op;

    printf("Enter expression (a operator b): ");
    scanf("%f %c %f", &a, &op, &b);

    switch(op) {
        case '+': printf("Result = %.2f\n", a + b); break;
        case '-': printf("Result = %.2f\n", a - b); break;
        case '*': printf("Result = %.2f\n", a * b); break;
        case '/':
            if (b != 0)
                printf("Result = %.2f\n", a / b);
            else
                printf("Division by zero not allowed.\n");
            break;
        case '%':
            if ((int)b != 0)
                printf("Result = %d\n", (int)a % (int)b);
            else
                printf("Division by zero not allowed.\n");
            break;
        default: printf("Invalid operator!\n");
    }

    return 0;
}
