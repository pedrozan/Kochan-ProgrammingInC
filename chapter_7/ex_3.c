#include <stdio.h>

int main(void) {
    int i, response, responseNumber;

    printf("How many responses do you want to enter?\n");
    scanf("%i", &responseNumber);

    int ratingCounters[responseNumber];

    for ( i = 1; i < responseNumber; ++i )
        ratingCounters[i] = 0;

    printf("Enter your responses\n");

    for ( i = 1; i <= responseNumber; ++i ) {
        scanf ("%i", &response);

        if ( response == 999 ) {
            responseNumber = i-1;
            break;
        }

        if ( response < 1 || response > 10 )
            printf("Bad Response: %i\n", response);
        else
            ++ratingCounters[response];
    }

    printf("\n\nRating    Number of Responses\n");
    printf("-----------  ----------------------\n");

    for ( i = 1; i <= responseNumber; i++)
        printf("%4i%14i\n", i, ratingCounters[i]);

    return 0;
}
