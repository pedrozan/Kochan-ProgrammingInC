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

int N(int year, int month, int day)
{
    int f_ret = f(year, month);
    int g_ret = g(month);

    return 1461 * (f_ret / 4) + 153 * (g_ret / 5) + day;
}

const char* weekDay(struct date dayToConvert)
{
    static char weekDays[7][10] = {
			"sunday",
			"monday",
			"tuesday",
			"wednesday",
			"thursday",
			"friday",
			"saturday"
			};

    int day_n = N(dayToConvert.year, dayToConvert.month, dayToConvert.day) - 621049;
    return weekDays[(day_n % 7)];
}

int main (void)
{
    struct date longDate;

    printf ("Enter a date (dd/mm/yy)\n");
    scanf ("%i/%i/%i", &(longDate.day), &(longDate.month), &(longDate.year));

    printf ("That day was a %s\n", weekDay(longDate)); 

    return 0;
}
