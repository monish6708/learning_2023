#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int computeTotalSeconds(const char *timeString)
{
    char *token;
    char *delimiter = ":";
    unsigned int totalSeconds = 0;

    
    char *hoursStr = strtok(strdup(timeString), delimiter);
    char *minutesStr = strtok(NULL, delimiter);
    char *secondsStr = strtok(NULL, delimiter);

    
    unsigned int hours = strtoul(hoursStr, NULL, 10);
    unsigned int minutes = strtoul(minutesStr, NULL, 10);
    unsigned int seconds = strtoul(secondsStr, NULL, 10);

    
    totalSeconds = (hours * 3600) + (minutes * 60) + seconds;

    return totalSeconds;
}

int main()
{
    char timeString[9];
    printf("Enter the time in format hh:mm:ss: ");
    scanf("%8s", timeString);

    unsigned int totalSeconds = computeTotalSeconds(timeString);

    printf("Total seconds: %u\n", totalSeconds);

    return 0;
}
