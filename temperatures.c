#include <stdio.h>
double fahrenheit(double celsius);
double kelvin(double celsius);

int main(void) {
    double celsius;
    char scale;

    printf("Degrees Celsius:\n>>> ");
    if (scanf("%lf", &celsius)) {
        printf("Convert to (k for Kelvin | f for Fahrenheit | b for both)\n>>> ");
        scanf(" %c", &scale);
        switch (scale) {
            case 'k':
                printf("%.16g°C = %.16gK", celsius, kelvin(celsius));
                break;
            case 'f':
                printf("%.16g°C = %.16g°F", celsius, fahrenheit(celsius));
                break;
            case 'b':
                printf("%.16g°C = %.15g°F = %.16gK", celsius, fahrenheit(celsius), kelvin(celsius));
                break;
            default:
                printf("Wrong character");
        }

    } else {
        printf("Input is not a number\n");
    }

    return 0;
}

double fahrenheit(double celsius) {
    return celsius * 1.8 + 32;
}

double kelvin(double celsius) {
    return celsius + 273.16;
}
