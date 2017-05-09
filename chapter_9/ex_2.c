#include <stdio.h>

struct date
{
    int day;
    int month;
    int year;
};

int f(int year, int month)
{
    if (month <= 2) {
        return year - 1;
    }
    return year;
}

int g(int month)
{
    if (month <= 2) {
        return month + 13;
    }
    return month + 1;
}

float N(int year, int month, int day)
{
    int f_ret = f(year, month);
    int g_ret = g(month);

    return (1461.0 * (float)f_ret / 4.0) + (153.0 * (float)g_ret / 5.0) + day;
}

int dayBetween(struct date firstDate, struct date secondDate)
{
    float N_1 = N((int)firstDate.year, (int)firstDate.month, (int)firstDate.year);
    float N_2 = N((int)secondDate.year, (int)secondDate.month, (int)secondDate.year);

    return N_2 - N_1;
}

int main (void)
{
    struct date firstDate;
    struct date secondDate;

    printf ("Lets calculate how many days exist between two dates\n");
    printf ("enter first date (dd/mm/yyyy)\n");
    scanf ("%i/%i/%i", &(firstDate.day), &(firstDate.month), &(firstDate.year));

    printf ("enter second date (dd/mm/yyyy)\n");
    scanf ("%i/%i/%i", &(secondDate.day), &(secondDate.month), &(secondDate.year));

    printf ("The number of days between %i/%i/%i and %i/%i/%i is\n", (int)firstDate.day, (int)firstDate.month,
            (int)firstDate.year, (int)secondDate.day, (int)secondDate.month, (int)secondDate.year);
    printf ("%i\n", dayBetween(firstDate, secondDate));

    return 0;
}
