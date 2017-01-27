#include <stdio.h>

int main(void) {
    int x, y;

    printf("Please, enter two integers ");
    scanf("%i %i", &x, &y);

    if (y == 0)
        printf("The second number can not be zero\n");
    else
        printf("%i / %i = %.3f\n", x, y, (float) x / y);

    return 0;
}
