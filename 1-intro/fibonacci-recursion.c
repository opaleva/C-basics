#include <stdio.h>
int sequence(int n);

int main(void) {
    int amount, i;
    for (; ; ) {
        printf("Amount of numbers in the sequence (from 1 to 46):\n>>> ");
        if (scanf("%d", &amount)) {
            if (amount < 0 || amount > 46) {
                printf("Input must be from 1 to 46\n");
                continue;
            } else {
                printf("First %d numbers of the Fibonacci sequence are:\n", amount);
                for (i = 1; i <= amount; i++) {
                    printf("%d ", sequence(i));
                    if (i % 10 == 0)
                        printf("\n");
                }
                break;
            }
        } else {
            printf("Input is not an integer\n");
            break;
        }
    }
}

int sequence(int n) {
    if (n < 2) {
        return n;
    }
    return sequence(n - 2) + sequence(n - 1);
}
