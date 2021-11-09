#include <stdio.h>
#include <math.h>
double calculate(char operator, double x, double y);

int main(void) {
    char operator;
    double x, y;
        printf("First number:\n>>> ");
        if (scanf("%lf", &x)) {
            printf("Operator:\n| + | - | * | / | ^ for pow | s for sqrt are available\n>>> ");
            scanf(" %c", &operator);
            if (operator == 's') {
                printf("√%.16g = %.16g", x, sqrt(x));
            } else {
                printf("Second number:\n>>> ");
                if (scanf("%lf", &y)) {
                    printf("%.16g %c %.16g = %.16g", x, operator, y, calculate(operator, x, y));
                } else {
                    printf("Input is not a number\n");
                }
            }
        } else {
            printf("Input is not a number\n");
        }

    return 0;
}

double calculate(char operator, double x, double y) {
    switch (operator) {
        case '+':
            return x + y;
        case '-':
            return x - y;
        case '*':
            return x * y;
        case '/':
            return x / y;
        case '^':
            return pow(x, y);
        default:
            printf("Operator is invalid");
    }
}
