#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j, k;

    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Error! Matrix multiplication not possible.\n");
        return 1;
    }

    int first[r1][c1], second[r2][c2], result[r1][c2];

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < r1; ++i) {
        for (j = 0; j < c1; ++j) {
            scanf("%d", &first[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < r2; ++i) {
        for (j = 0; j < c2; ++j) {
            scanf("%d", &second[i][j]);
        }
    }

    // Matrix multiplication
    for (i = 0; i < r1; ++i) {
        for (j = 0; j < c2; ++j) {
            result[i][j] = 0;
            for (k = 0; k < c1; ++k) {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }

    printf("Result matrix:\n");
    for (i = 0; i < r1; ++i) {
        for (j = 0; j < c2; ++j) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}