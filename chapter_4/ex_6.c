#include <stdio.h>

int main(void)
{
    float x = 2.55;

    /* up to this point the book has not introduced loops, hence the naive implementation of potencies */
    printf("3x^3 - 5x^2 + 6 = %f\n", (3*x*x*x) - (5*x*x) + 6);

    return 0;
}
