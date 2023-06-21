#include <stdio.h>

#define MAX_STUDENTS 100


struct Student {
    char name[50];
    int marks;
};


void readStudent(struct Student *student) {
    printf("Enter student name: ");
    scanf("%s", student->name);

    printf("Enter student marks: ");
    scanf("%d", &student->marks);
}


void writeStudent(struct Student *student) {
    printf("Name: %s\n", student->name);
    printf("Marks: %d\n", student->marks);
}


float computeAverage(struct Student students[], int numStudents) {
    int totalMarks = 0;

    for (int i = 0; i < numStudents; i++) {
        totalMarks += students[i].marks;
    }

    return (float) totalMarks / numStudents;
}


void printStudentsAboveBelowAverage(struct Student students[], int numStudents, float averageMarks) {
    printf("\nStudents above average marks:\n");
    for (int i = 0; i < numStudents; i++) {
        if (students[i].marks > averageMarks) {
            writeStudent(&students[i]);
        }
    }

    printf("\nStudents below average marks:\n");
    for (int i = 0; i < numStudents; i++) {
        if (students[i].marks < averageMarks) {
            writeStudent(&students[i]);
        }
    }
}

int main() {
    struct Student students[MAX_STUDENTS];
    int numStudents;
    float averageMarks;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    
    for (int i = 0; i < numStudents; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        readStudent(&students[i]);
    }

    
    averageMarks = computeAverage(students, numStudents);
    printf("\nAverage marks: %.2f\n", averageMarks);

    
    printStudentsAboveBelowAverage(students, numStudents, averageMarks);

    return 0;
}
