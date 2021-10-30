#include <stdio.h>
void get_time(float BYTE, float speed, float size);

int main(void) {
    const float BYTE = 8;
    float speed, size;
    printf("Download speed, Mbps:\n>>> ");
    if (scanf("%f", &speed)) {
        printf("File size, MB:\n>>> ");
        if (scanf("%f", &size)) {
            get_time(BYTE, speed, size);
        } else {
            printf("Input is not an integer\n");
        }
    } else {
        printf("Input is not an integer\n");
    }
}

void get_time(float BYTE, float speed, float size) {
    printf("Download speed: %.2f Mbps\nFile size: %.2fMB\nEstimated download time: %.2f seconds",
           speed, size, size * BYTE / speed);
}
