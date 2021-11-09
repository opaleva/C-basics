#include <stdio.h>
#include "grid.h"
#define LINE for (int i = 0; i < 13; i++) printf("-");
#define NL printf("\n");

char sign(int idx) {
    switch(idx) {
        case -1:
            return 'x';
        case 0:
            return ' ';
        case 1:
            return 'o';
        default:
            printf("NaN");
            return 1;
    }
}

void start_grid(void) {
    LINE
    NL
    int row, column, number = 1;
    for(row = 0; row < 3; row++) {
        for(column = 0; column < 3; column++) {
            printf("| %d ", number);
            number++;
        }
        printf("|\n");
        LINE
        NL
    }
}

void basic_grid(int position[9]) {
    LINE
    NL
    printf("| %c | %c | %c |\n", sign(position[0]), sign(position[1]), sign(position[2]));
    LINE
    NL
    printf("| %c | %c | %c |\n", sign(position[3]), sign(position[4]), sign(position[5]));
    LINE
    NL
    printf("| %c | %c | %c |\n", sign(position[6]), sign(position[7]), sign(position[8]));
    LINE
    NL
}


