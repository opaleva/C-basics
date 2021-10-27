#include <stdio.h>
void buildPyramid(int number);

int main(void) {
    int number;
    printf("Number of blocks in half of the bottom row:\n>>> ");
    if (scanf("%d", &number))
        buildPyramid(number);
    else
        printf("Input is not an integer");

    return 0;
}

void buildPyramid(int number) {
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
