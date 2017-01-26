#include <stdio.h>

int main(void)
{
    float celsius, farenheit;

    farenheit = 47;
    celsius = (farenheit - 32) / 1.8;

    printf("%.2fº farenheit equals %.2fº celsius\n", farenheit, celsius);

    return 0;
}
