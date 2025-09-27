#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    float marks[3];
    float average;
};

int main() {
    struct Student students[5];
    int n, i, j;

    printf("Enter number of students (max 5): ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &students[i].id);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Enter marks for 3 subjects: ");
        float sum = 0;
        for (j = 0; j < 3; j++) {
            scanf("%f", &students[i].marks[j]);
            sum += students[i].marks[j];
        }
        students[i].average = sum / 3;
    }

    printf("\n--- Student Records ---\n");
    for (i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("ID: %d\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f, %.2f, %.2f\n", 
               students[i].marks[0], students[i].marks[1], students[i].marks[2]);
        printf("Average: %.2f\n", students[i].average);
    }

    return 0;
}