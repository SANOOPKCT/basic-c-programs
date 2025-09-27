#include <stdio.h>

int main() {
    FILE *file;
    char filename[100], content[1000];
    int choice;

    printf("File Operations Menu:\n");
    printf("1. Write to file\n");
    printf("2. Read from file\n");
    printf("3. Append to file\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter filename: ");
    scanf("%s", filename);

    switch(choice) {
        case 1:
            file = fopen(filename, "w");
            if (file == NULL) {
                printf("Error opening file!\n");
                return 1;
            }

            printf("Enter content to write: ");
            getchar(); // Clear buffer
            fgets(content, sizeof(content), stdin);

            fprintf(file, "%s", content);
            fclose(file);
            printf("Content written to file successfully!\n");
            break;

        case 2:
            file = fopen(filename, "r");
            if (file == NULL) {
                printf("Error opening file or file doesn't exist!\n");
                return 1;
            }

            printf("File content:\n");
            while (fgets(content, sizeof(content), file) != NULL) {
                printf("%s", content);
            }
            fclose(file);
            break;

        case 3:
            file = fopen(filename, "a");
            if (file == NULL) {
                printf("Error opening file!\n");
                return 1;
            }

            printf("Enter content to append: ");
            getchar(); // Clear buffer
            fgets(content, sizeof(content), stdin);

            fprintf(file, "%s", content);
            fclose(file);
            printf("Content appended to file successfully!\n");
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}