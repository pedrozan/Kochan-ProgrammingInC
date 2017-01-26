#include <stdio.h>

int main(void)
{
    printf("Table on n and n^2 integers\n");
    printf(" n          n²\n");
    printf("---       -----\n");

    for (int n = 0; n < 11; n++) {
        printf("%2i         %3i\n", n, n*n);
    }

    return 0;
}
