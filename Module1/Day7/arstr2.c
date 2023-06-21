#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {

    char name[20];
    float marks;
};

void initializeStudents(struct Student* students, int numStudents) {
    for (int i = 0; i < numStudents; i++) {
        
        strcpy(students[i].name, "monish");
        students[i].marks = 67;
    }
}

int main() {
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    struct Student* students = (struct Student*)malloc(numStudents * sizeof(struct Student));

    initializeStudents(students, numStudents);

    
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d\n", i + 1);
    
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n\n", students[i].marks);
    }

    free(students);

    return 0;
}
