#include <stdio.h>

int main(void)
{
    for(int i = 5; i < 51; i += 5) {
        printf("The %ith triangular number is %i\n", i, i*(i+1)/2);
    }

    return 0;
}
