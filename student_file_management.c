#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

void writeStudent() {
    FILE *file = fopen("students.txt", "a");
    struct Student s;

    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("Enter student ID: ");
    scanf("%d", &s.id);
    printf("Enter student name: ");
    scanf("%s", s.name);
    printf("Enter marks: ");
    scanf("%f", &s.marks);

    fprintf(file, "%d %s %.2f\n", s.id, s.name, s.marks);
    fclose(file);

    printf("Student record added successfully!\n");
}

void readStudents() {
    FILE *file = fopen("students.txt", "r");
    struct Student s;

    if (file == NULL) {
        printf("No student records found!\n");
        return;
    }

    printf("\n--- Student Records ---\n");
    printf("ID\tName\t\tMarks\n");
    printf("-------------------------\n");

    while (fscanf(file, "%d %s %f", &s.id, s.name, &s.marks) == 3) {
        printf("%d\t%s\t\t%.2f\n", s.id, s.name, s.marks);
    }

    fclose(file);
}

int main() {
    int choice;

    while (1) {
        printf("\nStudent File Management System\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                writeStudent();
                break;
            case 2:
                readStudents();
                break;
            case 3:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}