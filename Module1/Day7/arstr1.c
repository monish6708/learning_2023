#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void parseString(const char* input, struct Student* students, int numStudents) {
    char temp[100];  
    int i = 0;       
    int j = 0;       
    int studentIndex = 0;  

    while (input[i] != '\0' && studentIndex < numStudents) {
        if (input[i] != ' ') {
            temp[j] = input[i];
            j++;
        } else {
            temp[j] = '\0';  
            j = 0;          

            
            switch (studentIndex % 3) {
                case 0:
                    students[studentIndex / 3].rollno = atoi(temp);
                    break;
                case 1:
                    strncpy(students[studentIndex / 3].name, temp, 20);
                    break;
                case 2:
                    students[studentIndex / 3].marks = atof(temp);
                    break;
            }

            studentIndex++;
        }

        i++;
    }

    
    if (studentIndex % 3 == 2) {
        temp[j] = '\0';
        students[studentIndex / 3].marks = atof(temp);
    }
}

int main() {
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);
    getchar();  

    struct Student* students = (struct Student*)malloc(numStudents * sizeof(struct Student));

    printf("Enter the input string: ");
    char input[100];
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';  

    parseString(input, students, numStudents);

    
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n\n", students[i].marks);
    }

    free(students);

    return 0;
}
