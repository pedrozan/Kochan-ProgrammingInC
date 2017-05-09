#include <stdio.h>

struct time
{
    int hours;
    int minutes;
    int seconds;
};

int timeToSeconds(struct time timeToConvert)
{
    int seconds;

    seconds = timeToConvert.hours * 3600 +
	      timeToConvert.minutes * 60 +
	      timeToConvert.seconds;

    return seconds;
}

struct time elapsed_time(struct time time1, struct time time2)
{
    struct time elapsedTime;
    int time1Seconds,
	time2Seconds,
	elapsedSeconds;

    time1Seconds = timeToSeconds(time1);
    time2Seconds = timeToSeconds(time2);

    elapsedSeconds = time2Seconds - time1Seconds;

    elapsedTime.hours = elapsedSeconds / 3600;
    elapsedTime.minutes = (elapsedSeconds - elapsedTime.hours * 3600) / 60;
    elapsedTime.seconds = elapsedSeconds - (elapsedTime.hours * 3600) - (elapsedTime.minutes * 60);

    return elapsedTime;
}

int main (void)
{
    struct time elapsed_time(struct time time1, struct time time2);
    struct time time1;
    struct time time2;
    struct time elapsedTime;

    printf ("Lets calculate the elapside time between two times\n");
    printf ("enter first time (hh:mm:ss)\n");
    scanf ("%i:%i:%i", &(time1.hours), &(time1.minutes), &(time1.seconds));

    printf ("enter second time (hh:mm:ss)\n");
    scanf ("%i:%i:%i", &(time2.hours), &(time2.minutes), &(time2.seconds));

    elapsedTime = elapsed_time(time1, time2);

    printf ("Between %02i:%02i:%02i and %02i:%02i:%02i has passed %02i:%02i:%02i\n", (int)time1.hours, (int)time1.minutes,
            (int)time1.seconds, (int)time2.hours, (int)time2.minutes, (int)time2.seconds,
            (int)elapsedTime.hours, (int)elapsedTime.minutes, (int)elapsedTime.seconds);

    return 0;
}
