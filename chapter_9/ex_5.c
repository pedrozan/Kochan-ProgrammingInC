#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

struct dateAndTime {
    int year;
    int month;
    int day;
    int hour;
    int minute;
    int second;
};

bool isMidnight(struct dateAndTime moment)
{
    if (moment.hour == 24 && moment.minute == 60 && moment.second == 60)
        return true;
    else
        return false;
}

struct dateAndTime timeUpdate(struct dateAndTime moment)
{
    if (moment.second == 60) {
        moment.second = 0;
        if (moment.minute == 60) {
            moment.minute = 0;
            if (moment.hour == 24) {
                moment.hour = 0;
            } else {
                moment.hour++;
            }
        } else {
            moment.minute++;
        }
    } else {
        moment.second++;
    }

    return moment;
}

struct dateAndTime dateUpdate(struct dateAndTime moment)
{
    int daysPerMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    if (moment.day == daysPerMonth[moment.month -1]) {
        moment.day = 1;
        if (moment.month == 12) {
            moment.month = 1;
            moment.year++;
        } else {
            moment.month++;
        }
    } else {
        moment.day++;
    }

    return moment;
}

struct dateAndTime clockKeeper(struct dateAndTime moment)
{
    moment = timeUpdate(moment);
    
    if (isMidnight(moment))
        dateUpdate(moment);

    return moment;
}

int main()
{
    struct dateAndTime moment;
    moment.year = 1900;
    moment.month = 1;
    moment.day = 1;
    moment.hour = 0;
    moment.minute = 0;
    moment.second = 0;

    while (true) {
        moment = clockKeeper(moment);
        
        printf ("\r%02i/%02i/%04i %02i:%02i:%02i", moment.day, moment.month,
                moment.year, moment.hour, moment.minute, moment.second);
       
        fflush(stdout); 
        sleep(1);
    }

    return 0;
}
