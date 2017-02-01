#include <stdio.h>

int main(void) {
    int p, d;
    _Bool isPrime;

    for ( p = 2; p <= 50; ++p ) {
        isPrime = 1;
        if (p % 2 == 0)
            continue;
        for ( d = 2; d < p; ++d ) {
            if (isPrime == 0)
                break;
            if ( p % d == 0 )
                isPrime = 0;
        }

            if ( isPrime != 0 )
                printf ("%i ", p);
    }
    printf ("\n");

    return 0;
}
