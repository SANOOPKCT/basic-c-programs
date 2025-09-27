#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int i, wordCount = 0, charCount = 0, inWord = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        charCount++;

        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
            if (!inWord) {
                wordCount++;
                inWord = 1;
            }
        } else {
            inWord = 0;
        }
    }

    printf("Number of characters: %d\n", charCount - 1); // Subtract newline
    printf("Number of words: %d\n", wordCount);

    return 0;
}