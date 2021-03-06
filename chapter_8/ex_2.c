#include <stdio.h>

int calculateTriangularNumber (int n)
{
    int i, triangularNumber = 0;

    for ( i = 1;  i <= n;  ++i )
        triangularNumber += i;

    return triangularNumber;
}

int main (void) {
    int calculateTriangularNumber (int n);
    int n, number, counter;

    for ( counter = 1; counter <= 5; ++counter) {
        printf("What triangular number do you want? ");
        scanf("%i", &number);

        printf("Triangular number %i is %i\n\n", number, calculateTriangularNumber(number));
    }

    return 0;
}
