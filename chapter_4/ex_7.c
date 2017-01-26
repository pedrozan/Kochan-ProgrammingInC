#include <stdio.h>

int main(void)
{
    printf("(3.31 x 10^-8 x 2.01 x 10^-7 ) / (7.16 x 10^-6 + 2.01 x 10^-8) = %lg\n",
        (3.31 * 10e-8 * 2.01 * 10e-7 ) / (7.16 * 10e-6 + 2.01 * 10e-8));

    return 0;
}
