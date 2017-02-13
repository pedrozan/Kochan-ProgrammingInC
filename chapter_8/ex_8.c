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

double x_to_the_n(double x, int n)
{
    double res;
    int      i;

    res = x;

    for ( i = 1; i < n; i++){
        res *= res;
    }
    return res;
}

void quadratic_roots( double a, double b, double c, double x[] )
{
    float delta = x_to_the_n(b, 2) - 4 * a * c;

    if(delta < 0) {
        printf("The roots are complex\n");
        return;
    }

    x[0] = (b + delta) / (2 * a);
    x[1] = (b - delta) / (2 * a);

    return;
}

int main(void)
{
    void quadratic_roots( double a, double b, double c, double x[] );

    double x[2];
    double a, b, c;

    printf("Enter values for a, b and c\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    quadratic_roots(a, b, c, x);

    printf("the roots are: %lf and %lf\n", x[0], x[1]);
    return 0;
}
