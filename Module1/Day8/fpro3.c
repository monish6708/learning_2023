#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ENTRIES 100
#define MAX_SENSOR_NAME_LENGTH 10
#define MAX_TIME_LENGTH 10


typedef struct {
    int entryNo;
    char sensorNo[MAX_SENSOR_NAME_LENGTH];
    float temperature;
    int humidity;
    int light;
    char time[MAX_TIME_LENGTH];
} LogEntry;


int extractLogEntries(const char* filename, LogEntry* logEntries) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        printf("Failed to open the file: %s\n", filename);
        return 0;
    }

    char line[100];
    int entryCount = 0;


    fgets(line, sizeof(line), file);

    
    while (fgets(line, sizeof(line), file) != NULL && entryCount < MAX_ENTRIES) {
        
        char* token = strtok(line, ",");
        logEntries[entryCount].entryNo = atoi(token);

        token = strtok(NULL, ",");
        strncpy(logEntries[entryCount].sensorNo, token, MAX_SENSOR_NAME_LENGTH);

        token = strtok(NULL, ",");
        logEntries[entryCount].temperature = atof(token);

        token = strtok(NULL, ",");
        logEntries[entryCount].humidity = atoi(token);

        token = strtok(NULL, ",");
        logEntries[entryCount].light = atoi(token);

        token = strtok(NULL, ",");
        strncpy(logEntries[entryCount].time, token, MAX_TIME_LENGTH);

        entryCount++;
    }

    fclose(file);

    return entryCount;
}


void displayLogEntries(const LogEntry* logEntries, int entryCount) {
    printf("EntryNo\tSensorNo\tTemperature\tHumidity\tLight\tTime\n");
    for (int i = 0; i < entryCount; i++) {
        printf("%d\t%s\t\t%.1f\t\t%d\t\t%d\t%s\n",
               logEntries[i].entryNo,
               logEntries[i].sensorNo,
               logEntries[i].temperature,
               logEntries[i].humidity,
               logEntries[i].light,
               logEntries[i].time);
    }
}

int main() {
    LogEntry logEntries[MAX_ENTRIES];
    int entryCount = extractLogEntries("data.csv", logEntries);

    if (entryCount > 0) {
        displayLogEntries(logEntries, entryCount);
    } else {
        printf("No log entries found.\n");
    }

    return 0;
}
