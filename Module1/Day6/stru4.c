#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    
    float marks;
};

int main() {
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student* students = (struct Student*)malloc(n * sizeof(struct Student));

    if (students == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);

        printf("Enter name: ");
        scanf("%s", students[i].name);


        printf("Enter marks: ");
        scanf("%f", &(students[i].marks));
    }

    
    printf("\nStudent Details:\n");
    for (int i = 0; i < n; i++) {
        printf("\nDetails of student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
       
        printf("Marks: %.2f\n", students[i].marks);
    }

    
    free(students);

    return 0;
}
