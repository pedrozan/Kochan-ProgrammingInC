#include <stdio.h>

int example1(void)
{
    int triangularNumber;

    triangularNumber = 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8;

    printf("The eigth triangular number is %i\n", triangularNumber);

    return 0;
}

int example2(void)
{
    int n, triangularNumber;

    triangularNumber = 0;

    for ( n = 0; n <= 200; n = n + 1)
        triangularNumber = triangularNumber + n;

    printf("The 200th triangular number is %i\n", triangularNumber);

    return 0;
}

int example3(void)
{
    int n, triangularNumber;

    printf("TABLE OF TRIANGULAR NUMBERS\n\n");
    printf(" n     Sum from 1 to n\n");
    printf("---   -----------------\n");

    triangularNumber = 0;

    for ( n = 0; n <= 10; n = n + 1) {
        triangularNumber = triangularNumber + n;
        printf("%2i       %i\n", n, triangularNumber);
    }

    return 0;
}

int example4(void)
{
    int n, number, triangularNumber;

    printf("What triangular number do you want? ");
    scanf("%i", &number);

    triangularNumber = 0;

    for ( n = 0; n <= number; ++n) {
        triangularNumber += n;
    }

    printf("Triangular number %i is %i\n", number, triangularNumber);

    return 0;
}

int main(void)
{
    example4();

    return 0;
}
