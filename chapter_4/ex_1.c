#include <stdio.h>

int example1(void)
{
    int     integerVar = 100;
    float   floatingVar = 331.79;
    double  doubleVar = 8.44e+11;
    char    charVar = 'w';

    _Bool   boolVar = 0;

    printf("integerVar = %i\n", integerVar);
    printf("floatingVar = %f\n", floatingVar);
    printf("doubleVar = %e\n", doubleVar);
    printf("charVar = %c\n", charVar);

    printf("boolVar = %i\n", boolVar);

    return 0;
}

int example2(void)
{
    int a = 100;
    int b = 2;
    int c = 25;
    int d = 4;
    int result;

    result = a - b;
    printf("a - b = %i\n", result);

    result = b * c;
    printf("b * c = %i\n", result);

    result = a / c;
    printf("a / c = %i\n", result);

    result = a + b * c;
    printf("a + b * c = %i\n", result);

    printf("a * b + c * d = %i\n", a * b + c * d);

    return 0;
}

int example3(void)
{
    int a = 25;
    int b = 2;

    float c = 25.0;
    float d = 2.0;

    printf("6 + a / 5 * b = %i\n", 6 + a / 5 * b);
    printf("a / b * b = %i\n", a / b * b);
    printf("c / d * d = %f\n", c / d * d);
    printf("-a = %i\n", -a);

    return 0;
}

int example4(void)
{
    int a = 25, b = 5, c = 10, d = 7;

    printf("a %% b = %i\n", a % b);
    printf("a %% c = %i\n", a % c);
    printf("a %% d = %i\n", a % d);
    printf("a / d * d + a %% d = %i\n",
            a / d * d + a % d);

    return 0;
}

int example5(void)
{
    float f1 = 123.125, f2;
    int i1, i2 = -150;
    char c = 'a';

    i1 = f1;
    printf("%f assigned to an int produces %i\n", f1, i1);

    f1 = i2;
    printf("%i assigned to a float produces %f\n", i2, f1);

    f1 = i2 / 100;
    printf("%i divided by 100 produces %f\n", i2, f1);

    f2 = (float) i2 / 100;
    printf ("(float) %i divided by 100 produces %f\n", i2, f2);

    return 0;
}

int main(void)
{
    example5();
    return 0;
}
