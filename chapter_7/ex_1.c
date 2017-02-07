#include <stdio.h>
#include <stdbool.h>

int example_1(void)
{
    int values[10];
    int index;

    values[0] = 197;
    values[2] = -100;
    values[5] = 350;
    values[3] = values[0] + values[5];
    values[9] = values[5] / 10;
    --values[2];

    for ( index = 0; index < 10; ++index )
        printf("values[%i] = %i\n", index, values[index]);

    return 0;
}

int example_2(void)
{
    int ratingCounters[11], i, response;

    for ( i = 1; i < 10; ++i )
        ratingCounters[i] = 0;

    printf("Enter your responses\n");

    for ( i = 1; i <= 20; ++i ) {
        scanf ("%i", &response);

        if ( response < 1 || response > 10 )
            printf("Bad Response: %i\n", response);
        else
            ++ratingCounters[response];
    }

    printf("\n\nRating    Number of Responses\n");
    printf("-----------  ----------------------\n");

    for ( i = 1; i <= 10; i++)
        printf("%4i%14i\n", i, ratingCounters[i]);

    return 0;
}

int example_3(void)
{
    int Fibonacci[15], i;

    Fibonacci[0] = 0;
    Fibonacci[1] = 1;

    for ( i = 2; i < 15; ++i )
        Fibonacci[i] = Fibonacci[i - 2] + Fibonacci[i - 1];

    for ( i = 0; i < 15; ++i )
        printf("%i\n", Fibonacci[i]);

    return 0;
}

int example_4(void)
{
    int p, i, primes[50], primeIndex = 2;
    bool isPrime;

    primes[0] = 2;
    primes[1] = 3;

    for ( p = 5; p <= 50; p = p + 2 ) {
        isPrime = true;

        for ( i = 1; isPrime && p / primes[i] >= primes[i]; ++i )
            if ( p % primes[i] == 0 )
                isPrime = false;

        if ( isPrime == true ) {
            primes[primeIndex] = p;
            ++primeIndex;
        }
    }

    for ( i = 0; i < primeIndex; ++i )
        printf ("%i ", primes[i]);

    printf ("\n");

    return 0;
}

int example_5(void)
{
    int array_values[10] = { 0, 1, 4, 9, 16 };
    int i;

    for ( i = 5; i < 10; ++i )
        array_values[i] = i * i;

    for ( i = 0; i < 10; ++i )
        printf ("array_values[%i] = %i\n", i, array_values[i]);

    return 0;
}

int example_6(void)
{
    char word[] = { 'H', 'e', 'l', 'l', 'o', '!' };
    int i;

    for ( i = 0; i < 6; ++i )
        printf ("%c", word[i]);

    printf ("\n");

    return 0;
}

int example_7(void)
{
    const char baseDigits[16] = {
        '0', '1', '2', '3', '4', '5', '6', '7',
        '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };
    int convertedNumber[64];
    long int numberToConvert;
    int nextDigit, base, index = 0;

    printf ("Number to be converted? ");
    scanf ("%ld", &numberToConvert);
    printf ("Base? ");
    scanf ("%i", &base);

    do {
        convertedNumber[index] = numberToConvert % base;
        ++index;
        numberToConvert = numberToConvert / base;
    } while ( numberToConvert != 0 );

    printf ("Converted number = ");

    for (--index; index >= 0; --index ) {
        nextDigit = convertedNumber[index];
        printf ("%c", baseDigits[nextDigit]);
    }

    printf ("\n");

    return 0;
}

int example_8(void)
{
    int i, numFibs;

    printf ("How many Fibonacci numbers do you want (between 1 and 75)? ");
    scanf ("%i", &numFibs);

    if (numFibs < 1 || numFibs > 75) {
        printf ("Bad number, sorry!\n");
        return 1;
    }

    unsigned long long int Fibonacci[numFibs];

    Fibonacci[0] = 0;
    Fibonacci[1] = 1;

    for ( i = 2; i < numFibs; ++i )
        Fibonacci[i] = Fibonacci[i-2] + Fibonacci[i-1];

    for ( i = 0; i < numFibs; ++i )
        printf ("%llu ", Fibonacci[i]);

    printf ("\n");

    return 0;
}

int main (void)
{
    example_8();

    return 0;
}
