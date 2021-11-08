#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "sorting.h"


void sort_merge(int * arr1, int * arr2, int s1, int s2) {
    qsort(arr1, s1, sizeof(int), comparison);
    qsort(arr2, s2, sizeof(int), comparison);
    int sum = s1 + s2;
    int third_array[sum];
    int i = 0, j = 0, k = 0;

    clock_t start = clock();
    while (i < s1 && j < s2) {
        if (arr1[i] < arr2[j])
            third_array[k++] = arr1[i++];
        else
            third_array[k++] = arr2[j++];
    }
    // Adding the remaining elements:
    while (i < s1) {
        third_array[k++] = arr1[i++];
    }
    while (j < s2) {
        third_array[k++] = arr2[j++];
    }
    clock_t end = clock();

    printf("Merge with sort:\n");
    for (i = 0; i < sum; i++)
        printf("%d ", third_array[i]);
    printf("\n");
    printf("Time of completion: %lf\n", (double)(end - start) / CLOCKS_PER_SEC);
}

void bubble_sort(const int * arr1, const int * arr2, int s1, int s2) {
    clock_t start = clock();

    int sum = s1 + s2;
    int third_array[sum];
    int k = 0;

    for (int i = 0; i < s1; i++, k++)
        third_array[k] = arr1[i];
    for (int i = 0; i < s2; i++, k++)
        third_array[k] = arr2[i];

    for (int i = 0; i < sum; i++) {
        int temporary;
        for (int j = i + 1; j < sum; j++) {
            if (third_array[i] > third_array[j]) {
                temporary = third_array[i];
                third_array[i] = third_array[j];
                third_array[j] = temporary;
            }
        }
    }
    clock_t end = clock();

    printf("Bubble sort:\n");
    for (int i = 0; i < sum; i++)
        printf("%d ", third_array[i]);
    printf("\n");
    printf("Time of completion: %lf\n", (double)(end - start) / CLOCKS_PER_SEC);
}


void quick_sort(const int * arr1, const int * arr2, int s1, int s2) {
    clock_t start = clock();
    int sum = s1 + s2;
    int third_array[sum];
    int k = 0;
    for (int i = 0; i < s1; i++, k++)
        third_array[k] = arr1[i];
    for (int i = 0; i < s2; i++, k++)
        third_array[k] = arr2[i];

    qsort(third_array, sum, sizeof(int), comparison);
    clock_t end = clock();

    printf("Quick sort:\n");
    for (int i = 0; i < sum; i++)
        printf("%d ", third_array[i]);
    printf("\n");
    printf("Time of completion: %lf\n", (double)(end - start) / CLOCKS_PER_SEC);
}

int comparison(const void * a, const void * b) {
    const int * i_a = (const int *) a;
    const int * i_b = (const int *) b;
    if (*i_a < *i_b)
        return -1;
    else if (*i_a == *i_b)
        return 0;
    else
        return 1;
}