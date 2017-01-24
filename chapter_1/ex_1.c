#include <stdio.h>

int example4(void)
{
    int sum;

    sum = 50 + 25;
    printf("The sum of 50 and 25 is %i\n", sum);

    return 0;
}

int example3(void)
{
    printf("Testing...\n..1\n...2\n....3\n");

    return 0;
}

int example2(void)
{
    printf("Programming is fun.\n");
    printf("Programming in C is even more fun\n");

    return 0;
}

int example1(void)
{
    printf("Programming is fun.\n");

    return 0;
}

int main(void) {
    example4();

    return 0;
}
