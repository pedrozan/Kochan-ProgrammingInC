#include <stdio.h>

int example2(void)
{
    int n, triangularNumber;

    triangularNumber = 0;

    n = 0;
    while(n <= 200) {
        triangularNumber = triangularNumber + n;
        n = n + 1;
    }

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

    n = 0;
    while(n <= 10){
        triangularNumber = triangularNumber + n;
        printf("%2i       %i\n", n, triangularNumber);
        n = n + 1;
    }

    return 0;
}

int example4(void)
{
    int n, number, triangularNumber;

    printf("What triangular number do you want? ");
    scanf("%i", &number);

    triangularNumber = 0;

    n = 0;
    while (n <= number){
        triangularNumber += n;
        ++n;
    }

    printf("Triangular number %i is %i\n", number, triangularNumber);

    return 0;
}

int example5(void)
{
    int n, number, triangularNumber, counter;

    counter = 1;
    while (counter <= 5) {
        printf("What triangular number do you want? ");
        scanf("%i", &number);

        triangularNumber = 0;

        n = 1;
        while (n <= number) {
            triangularNumber += n;
            ++n;
        }

        printf("Triangular number %i is %i\n\n", number, triangularNumber);
        ++counter;
    }

    return 0;
}

int main(void)
{
    example2();
    example3();
    example4();
    example5();

    return 0;
}
