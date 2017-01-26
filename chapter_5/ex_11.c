#include <stdio.h>

int main(void)
{
    int number, res = 0;

    printf("What is the integer you want to sum the digits? ");
    scanf("%i", &number);

    while(number > 0) {
        res += number % 10;
        number /= 10;
    }

    printf("The sum is %i\n", res);

    return 0;
}
