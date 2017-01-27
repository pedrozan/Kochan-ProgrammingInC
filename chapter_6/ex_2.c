#include <stdio.h>

int main(void) {
    int x, y;

    printf("Please, enter two integers ");
    scanf("%i %i", &x, &y);

    if (y == 0) {
        printf("The second number can not be zero\n");
    } else if (x % y) {
        printf("%i is not divisile by %i\n", x, y);
    } else {
        printf("%i is divisile by %i\n", x, y);
    }
}
