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

int example5(void)
{
    int n, number, triangularNumber, counter;

    for ( counter = 1; counter <= 5; ++counter) {
        printf("What triangular number do you want? ");
        scanf("%i", &number);

        triangularNumber = 0;

        for ( n = 1; n <= number; ++n) {
            triangularNumber += n;
        }

        printf("Triangular number %i is %i\n\n", number, triangularNumber);
    }

    return 0;
}

int example6(void)
{
    int count = 1;

    while ( count <= 5 ) {
        printf ("%i\n", count);
        ++count;
    }

    return 0;
}

int example7(void)
{
    int u, v, temp;

    printf("Please type in two nonnegative integers.\n");
    scanf("%i%i", &u, &v);

    while(v != 0) {
        temp = u % v;
        u = v;
        v = temp;
    }

    printf("Their greatest common divisor is %i\n", u);

    return 0;
}

int example8(void)
{
    int number, right_digit;

    printf("Enter your number.\n");
    scanf("%i", &number);

    while(number != 0) {
        right_digit = number % 10;
        printf("%i", right_digit);
        number = number / 10;
    }

    printf("\n");

    return 0;
}

int example9(void)
{
    int number, right_digit;

    printf("Enter your number.\n");
    scanf("%i", &number);

    do {
        right_digit = number % 10;
        printf("%i", right_digit);
        number = number / 10;
    }
    while(number != 0);

    printf("\n");

    return 0;
}

int main(void)
{
    example9();

    return 0;
}
