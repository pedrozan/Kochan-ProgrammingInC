#include <stdio.h>

int main(void) {
    int P[150], i, n = 150, j = 0;

    for ( i = 2; i <= n; i++)
        P[i] = 0;

    for ( i = 2; i <= n; i++){
        if(P[i] == 0)
            printf("%i ", i);

        for ( j = 0; j*i <= n; j++)
            P[i*j] = 1;
    }

    return 0;
}
