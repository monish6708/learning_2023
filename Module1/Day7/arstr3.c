#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    
    char name[20];
    float marks;
};

void displayStudents(const struct Student* students, int numStudents) {
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n\n", students[i].marks);
    }
}

int main() {
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);
    getchar();  

    struct Student* students = (struct Student*)malloc(numStudents * sizeof(struct Student));

    

    displayStudents(students, numStudents);

    free(students);

    return 0;
}
