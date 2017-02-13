#include <stdio.h>

double  absoluteValue (double x)
{
    if ( x < 0 )
        x = -x;

    return x;
}

double  squareRoot (double x, double epsilon)
{
    float        guess   = 1.0;

    while ( absoluteValue (guess * guess) / x > 1 + epsilon || absoluteValue (guess * guess) / x < 1 - epsilon ){
        guess = ( x / guess + guess ) / 2.0;
        printf("guess: %f\n", guess);
    }

    return guess;
}

int main (void) {
    double squareRoot (double x, double epsilon), absoluteValue (double x);

    printf ("squareRoot (2.0) = %f\n", squareRoot (2.0, .0001));
    printf ("squareRoot (144.0) = %f\n", squareRoot (144.0, .01));
    printf ("squareRoot (17.5) = %f\n", squareRoot (17.5, .00001));

    return 0;
}
