#include <stdio.h>
#include <stdbool.h>

void example1 (void)
{
    struct date
    {
        int month;
        int day;
        int year;
    };

    struct date today;

    today.month = 9;
    today.day = 25;
    today.year = 2004;

    printf ("Today's date is %i/%i/%.2i.\n", today.month, today.day, today.year % 100);
}

void example2 (void)
{
    struct date
    {
        int month;
        int day;
        int year;
    };

    struct date today, tomorrow;

    const int daysPerMonth[12] = { 31, 28, 31, 30, 31, 30,
                                   31, 31, 30, 31, 30, 31 };

    printf ("Enter today's date (mm dd yyyy): ");
    scanf ("%i%i%i", &today.month, &today.day, &today.year);

    if ( today.day != daysPerMonth[today.month - 1] ) {
        tomorrow.day = today.day + 1;
        tomorrow.month = today.month;
        tomorrow.year = today.year;
    }
    else if ( today.month == 12 ) {
        // end of year
        tomorrow.day = 1;
        tomorrow.month = 1;
        tomorrow.year = today.year + 1;
    }
    else {
        // end of month
        tomorrow.day = 1;
        tomorrow.month = today.month + 1;
        tomorrow.year = today.year;
    }

    printf ("Tomorrow's date is %i/%i/%.2i.\n", tomorrow.month, tomorrow.day, tomorrow.year % 100);
}

/* example 3 */

struct date2
{
    int month;
    int day;
    int year;
};

void example3 (void)
{
    struct date2 today, tomorrow;
    int numberOfDays (struct date2 d);

    printf ("Enter today's date (mm dd yyyy): ");
    scanf ("%i%i%i", &today.month, &today.day, &today.year);

    if ( today.day != numberOfDays (today) ) {
        tomorrow.day = today.day + 1;
        tomorrow.month = today.month;
        tomorrow.year = today.year;
    }
    else if ( today.month == 12 ) {
        tomorrow.day = 1;
        tomorrow.month = 1;
        tomorrow.year = today.year + 1;
    }
    else {
        tomorrow.day = 1;
        tomorrow.month = today.month + 1;
        tomorrow.year = today.year;
    }

    printf ("Tomorrow's date is %i/%i/%.2i.\n",tomorrow.month, tomorrow.day, tomorrow.year % 100);

}

int numberOfDays (struct date2 d)
{
    int     days;
    bool    isLeapYear (struct date2 d);
    const   int daysPerMonth[12] =
            { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    if ( isLeapYear (d) == true && d.month == 2 )
        days = 29;
    else
        days = daysPerMonth[d.month - 1];

    return days;
}

bool isLeapYear (struct date2 d)
{
    bool leapYearFlag;

    if ( (d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0 )
        leapYearFlag = true;
    else
        leapYearFlag = false;

    return leapYearFlag;
}

/* example4 */

struct date2 dateUpdate (struct date2 today)
{
    struct date2 tomorrow;
    int numberOfDays2 (struct date2 d);

    if ( today.day != numberOfDays (today) ) {
        tomorrow.day = today.day + 1;
        tomorrow.month = today.month;
        tomorrow.year = today.year;
    }
    else if ( today.month == 12 ) {
        tomorrow.day = 1;
        tomorrow.month = 1;
        tomorrow.year = today.year + 1;
    }
    else {
        tomorrow.day = 1;
        tomorrow.month = today.month + 1;
        tomorrow.year = today.year;
    }

    return tomorrow;
}

int numberOfDays2(struct date2 d)
{
    int days;
    bool isLeapYear2 (struct date2 d);
    const int daysPerMonth[12] =
        { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    if ( isLeapYear2 && d.month == 2 )
        days = 29;
    else
        days = daysPerMonth[d.month - 1];

    return days;
}

bool isLeapYear2 (struct date2 d)
{
    bool leapYearFlag;

    if ( (d.year % 4 == 0 && d.year % 100) ||
            d.year % 400 == 0 )
        leapYearFlag = true;
    else
        leapYearFlag = false;

    return leapYearFlag;
}

void example4 (void)
{
    struct date2 dateUpdate (struct date2 today);
    struct date2 thisDay, nextDay;

    printf ("Enter today's date (mm dd yyyy): ");
    scanf ("%i%i%i", &thisDay.month, &thisDay.day,
            &thisDay.year);

    nextDay = dateUpdate (thisDay);

    printf ("Tomorrow's date is %i/%i/%.2i.\n",nextDay.month,
            nextDay.day, nextDay.year % 100);

}

/* example 5 */

struct time {
    int hour;
    int minutes;
    int seconds;
};

void example5 (void)
{
    struct time timeUpdate (struct time now);
    struct time currentTime, nextTime;

    printf ("Enter the time (hh:mm:ss): ");
    scanf ("%i:%i:%i", &currentTime.hour,
        &currentTime.minutes, &currentTime.seconds);

    nextTime = timeUpdate (currentTime);
    printf ("Updated time is %.2i:%.2i:%.2i\n", nextTime.hour,
        nextTime.minutes, nextTime.seconds );
}

struct time timeUpdate (struct time now)
{
    ++now.seconds;

    if ( now.seconds == 60 ){
        now.seconds = 0;
        ++now.minutes;

        if ( now.minutes == 60 ) {
            now.minutes = 0;
            ++now.hour;

            if ( now.hour == 24 )
                now.hour = 0;
        }
    }

    return now;
}

/* example 6 */

void example6(void)
{
    struct time timeUpdate (struct time now);
    struct time testTimes[5] =
        { { 11, 59, 59 }, { 12, 0, 0 }, { 1, 29, 59 },
          { 23, 59, 59 }, { 19, 12, 27 }};
    int i;

    for ( i = 0; i < 5; ++i ) {
        printf ("Time is %.2i:%.2i:%.2i", testTimes[i].hour,
            testTimes[i].minutes, testTimes[i].seconds);

        testTimes[i] = timeUpdate (testTimes[i]);

        printf (" ...one second later it's %.2i:%.2i:%.2i\n",
            testTimes[i].hour, testTimes[i].minutes, testTimes[i].seconds);
    }
}

/* example 7 */

void example7 (void)
{
    int i;

    struct month
    {
        int     numberOfDays;
        char    name[3];
    };

    const struct month months[12] =
        { { 31, {'J', 'a', 'n'} }, { 28, {'F', 'e', 'b'} },
          { 31, {'M', 'a', 'r'} }, { 30, {'A', 'p', 'r'} },
          { 31, {'M', 'a', 'y'} }, { 30, {'J', 'u', 'n'} },
          { 31, {'J', 'u', 'l'} }, { 31, {'A', 'u', 'g'} },
          { 30, {'S', 'e', 'p'} }, { 31, {'O', 'c', 't'} },
          { 30, {'N', 'o', 'v'} }, { 31, {'D', 'e', 'c'} } };

    printf("Month     Number of Days\n");
    printf("-----     --------------\n");

    for ( i = 0; i < 12; ++i )
        printf(" %c%c%c            %i\n",
            months[i].name[0], months[i].name[1],
            months[i].name[2], months[i].numberOfDays);
}

int main (void)
{
    example7();

    return 0;
}
