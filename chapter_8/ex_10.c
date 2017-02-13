#include <stdio.h>

int main(void)
{
    int gcd(int u, int v), prime(int p);
    int p;

    printf("Please enter an integer\n");
    scanf("%i", &p);

    if(prime(p))
        printf("%i is prime\n", p);
    else
        printf("%i is not prime\n", p);

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

int prime(int p)
{
    for(int i = 2; i*i <= p; i++)
    {
        if(gcd(i, p) != 1)
            return 0;
    }
    return 1;
}
