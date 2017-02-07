#include <stdio.h>

int main(void) {
    int f0 = 0, f1 = 1, f2 = 0, i;

    printf("%i %i ", f0, f1);
    for ( i = 2; i < 15; ++i ){
        f2 = f0 + f1;
        f0 = f1;
        f1 = f2;
        printf("%i ", f2);
    }

    printf("\n");

    return 0;
}
