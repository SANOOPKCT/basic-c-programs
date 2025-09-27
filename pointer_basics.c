#include <stdio.h>

int main() {
    int num = 10;
    int *ptr = &num;

    printf("Basic Pointer Operations:\n");
    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", (void*)&num);
    printf("Value of ptr: %p\n", (void*)ptr);
    printf("Value pointed by ptr: %d\n", *ptr);

    // Modify value through pointer
    *ptr = 20;
    printf("\nAfter modifying through pointer:\n");
    printf("Value of num: %d\n", num);
    printf("Value pointed by ptr: %d\n", *ptr);

    // Array and pointers
    int arr[5] = {1, 2, 3, 4, 5};
    int *arrPtr = arr;

    printf("\nArray elements using pointers:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d, *(arrPtr + %d) = %d\n", 
               i, arr[i], i, *(arrPtr + i));
    }

    return 0;
}