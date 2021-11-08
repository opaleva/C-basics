#include <stdio.h>
#include <stdlib.h>
#include "utils/sorting.h"


int main(void) {
    int first_size, second_size;

    printf("First array size:\n>>> ");
    if (!scanf("%d", &first_size) || first_size <= 0) {
        printf("Input is not a positive integer\n");
        exit(EXIT_FAILURE);
    }
    int first_array[first_size];
    printf("%d integers separated by whitespace:\n>>> ", first_size);
    for (int i = 0; i < first_size; i++)
        if(!scanf("%d", &first_array[i])) {
            printf("Input is not an integer\n");
            exit(EXIT_FAILURE);
        }

    printf("Second array size:\n>>> ");
    if (!scanf("%d", &second_size) || second_size <= 0) {
        printf("Input is not a positive integer\n");
        exit(EXIT_FAILURE);
    }
    int second_array[second_size];
    printf("%d integers separated by whitespace:\n>>> ", second_size);
    for (int i = 0; i < second_size; i++)
        if(!scanf("%d", &second_array[i])) {
            printf("Input is not an integer\n");
            exit(EXIT_FAILURE);
        }

    simple_sort(first_array, second_array, first_size, second_size);
    quick_sort(first_array, second_array, first_size, second_size);
}
