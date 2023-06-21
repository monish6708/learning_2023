#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 50
#define MAX_STUDENTS 100

struct Student {
    char name[MAX_NAME_LENGTH];
    int age;
    float gpa;
};

int searchStudentByName(struct Student students[], int numStudents, const char* searchName) {
    for (int i = 0; i < numStudents; i++) {
        if (strcmp(students[i].name, searchName) == 0) {
            return i;  // Found the student, return the index
        }
    }
    return -1;  // Student not found
}

int main() {
    struct Student students[MAX_STUDENTS];

    // Populate the array of structures with some data
    strcpy(students[0].name, "John");
    students[0].age = 20;
    students[0].gpa = 3.5;

    strcpy(students[1].name, "Alice");
    students[1].age = 19;
    students[1].gpa = 3.8;

    strcpy(students[2].name, "Bob");
    students[2].age = 21;
    students[2].gpa = 3.2;

    // Perform a search operation
    const char* searchName = "Alice";
    int index = searchStudentByName(students, 3, searchName);
    if (index != -1) {
        printf("Student found at index %d\n", index);
        printf("Name: %s\n", students[index].name);
        printf("Age: %d\n", students[index].age);
        printf("GPA: %.2f\n", students[index].gpa);
    } else {
        printf("Student not found\n");
    }

    return 0;
}
