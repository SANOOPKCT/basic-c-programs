#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], str3[200];
    int len, i;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0; // Remove newline

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0; // Remove newline

    // String length
    len = strlen(str1);
    printf("Length of first string: %d\n", len);

    // String concatenation
    strcpy(str3, str1);
    strcat(str3, str2);
    printf("Concatenated string: %s\n", str3);

    // String comparison
    if (strcmp(str1, str2) == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

    // String copy
    strcpy(str3, str1);
    printf("Copied string: %s\n", str3);

    // String reverse
    printf("Reversed first string: ");
    for (i = len - 1; i >= 0; i--) {
        printf("%c", str1[i]);
    }
    printf("\n");

    return 0;
}