#include <stdio.h>
#include <stdbool.h>

struct date
{
    int day;
    int month;
    int year;
};

int f(year, month)
{
    if (month < 3) {
        return year - 1;
    }
    return year;
}

int g(month)
{
    if (month < 3) {
        return month + 13;
    }
    return month + 1;
}

int N(year, month, day)
{
    return 1461 * f(year, month) / 4 + 153 * g(month) / 5 + day;
}

int dayBetween(struct date firstDate, struct date secondDate)
{
    int N_1 = N(firstDate.year, firstDate.month, firstDate.year);
    int N_2 = N(secondDate.year, secondDate.month, secondDate.year);

    return N_1 - N_2;
}

int main (void)
{
    struct date firstDate;
    struct date secondDate;

    printf ("Lets calculate how many days exist between two dates\n");
    printf ("enter first date (day/month/year");
    scanf ("%i/%i/%i", &firstDate.day, &firstDate.month, &firstDate.year);

    printf ("enter first date (day/month/year");
    scanf ("%i/%i/%i", &secondDate.day, &secondDate.month, &secondDate.year);

    printf ("The number of days between %i/%i/%i and %i/%i/%i is\n", &firstDate.day, &firstDate.month,
            &firstDate.year, &secondDate.day, &secondDate.month, &secondDate.year);
    printf ("%i", dayBetween(firstDate, secondDate));

    return 0;
}
