#include <stdio.h>

int main(void) {
    long int x_to_the_n(int x, int n);

    printf("result: %li\n", x_to_the_n(5, 2));

    return 0;
}

long int x_to_the_n(int x, int n)
{
    long int res;
    int      i;

    res = x;

    for ( i = 1; i < n; i++){
        res *= res;
    }
    return res;
}
