#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *arr;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Dynamic memory allocation
    arr = (int*)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Elements entered: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Calculate sum
    int sum = 0;
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", (float)sum / n);

    // Free allocated memory
    free(arr);

    return 0;
}