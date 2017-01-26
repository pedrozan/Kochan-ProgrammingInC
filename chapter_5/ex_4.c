#include <stdio.h>

int main(void)
{
    int i, temp = 1;

    printf("Table of factorials\n");
    printf(" n      n!\n");
    printf("---  -------\n");

    for(i = 1; i < 11; i++) {
        temp *= i;
        printf("%2i  %8i\n", i, temp);
    }

    return 0;
}
