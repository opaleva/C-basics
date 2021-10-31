#include <stdio.h>
float get_time(float BYTE, float speed, float size);

int main(void) {
    const float BYTE = 8;
    float speed, size;
    printf("Download speed, Mbps:\n>>> ");
    if (scanf("%f", &speed)) {
        printf("File size, MB:\n>>> ");
        if (scanf("%f", &size)) {
            printf("Download speed: %.2f Mbps\nFile size: %.2fMB\nEstimated download time: %.2f seconds",
                   speed, size, get_time(BYTE, speed, size));
        } else {
            printf("Input is not a number\n");
        }
    } else {
        printf("Input is not a number\n");
    }
}

float get_time(float BYTE, float speed, float size) {
    return size * BYTE / speed;
}
