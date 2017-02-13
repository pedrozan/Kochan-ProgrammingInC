#include <stdio.h>

int main(void)
{
    int gcd(int u, int v), lcm(int u, int v);

    int u, v;

    printf("Please enter two positive integers\n");
    scanf("%i%i", &u, &v);

    printf("The LCM of %i and %i is %i\n", u, v, lcm(u, v));

    return 0;
}

int gcd (int u, int v)
{
    int  temp;

    while ( v != 0 ) {
        temp = u % v;
        u = v;
        v = temp;
    }

    return u;
}

int lcm(int u, int v)
{
    return u * v / gcd(u, v);
}
