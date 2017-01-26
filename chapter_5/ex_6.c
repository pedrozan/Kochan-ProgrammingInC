#include <stdio.h>

int main(void)
{
    int n, triangularNumber;

    printf("TABLE OF TRIANGULAR NUMBERS\n\n");
    printf(" n     Sum from 1 to n\n");
    printf("---   -----------------\n");

    triangularNumber = 0;

    for ( n = 0; n <= 10; n = n + 1) {
        triangularNumber = triangularNumber + n;
        printf("%-2i       %i\n", n, triangularNumber);
    }

    return 0;
}
