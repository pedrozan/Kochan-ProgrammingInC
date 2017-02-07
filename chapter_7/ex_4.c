#include <stdio.h>

int main(void) {
    float values[10] = { 1.0, 2.0, 3.5, 4.0, 5.6,
                    8.0, 7.9, 8.9, 9.1, 5.5 };
    float sum = 0;

    for ( int i = 0; i < 10; i++ )
        sum += values[i];

    printf("The average is %.2f\n", sum / 10);

    return 0;
}
