#include <stdio.h>
void build_pyramid(int number);

int main(void) {
    int number;
    for ( ; ; ) {
        printf("Number of blocks in half of the bottom row (from 1 to 150):\n>>> ");
            if (scanf("%d", &number)) {
                if (number < 1 || number > 150) {
                    printf("Input must be from 1 to 150\n");
                    continue;
                } else {
                    build_pyramid(number);
                    break;
                }
            } else {
                printf("Input is not an integer\n");
                break;
            }
    }

    return 0;
}

void build_pyramid(int number) {
    int i, j, k;
    for (i = 1; i <= number; i++) {
        for (k = 0; k < number - i; ++k) {
            printf(" ");
        }
        printf("▟");
        for (j = 0; j < i - 1; ++j)
            printf("█");
        for (j = i; j < 2 * i - 1; ++j)
            printf("▒");

        printf("▙\n");
    }
    for (int x = 0; x < number * 2; x++)
        printf("▔");
}
