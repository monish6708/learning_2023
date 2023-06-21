#include <stdio.h>

struct Time
{
    int hour;
    int minute;
    int second;
};

struct Time calculateTimeDifference(struct Time start, struct Time end)
{
    struct Time diff;

    int startTimeSecond = start.hour * 3600 + start.minute * 60 + start.second;
    int endTimeSecond = end.hour * 3600 + end.minute * 60 + end.second;
    int diffSeconds = endTimeSecond - startTimeSecond;

    diff.hour = diffSeconds / 3600;
    diffSeconds %= 3600;
    diff.minute = diffSeconds / 60;
    diff.second = diffSeconds % 60;

    return diff;
}

int main()
{
    struct Time startTime, endTime, difference;

    printf("Enter the start time (hours minutes seconds): ");
    scanf("%d %d %d", &(startTime.hour), &(startTime.minute), &(startTime.second));

    printf("Enter the end time (hours minutes seconds): ");
    scanf("%d %d %d", &(endTime.hour), &(endTime.minute), &(endTime.second));

    difference = calculateTimeDifference(startTime, endTime);

    printf("\n");
    printf("Time difference: %02d:%02d:%02d\n", difference.hour, difference.minute, difference.second);

    return 0;
}
