#include <stdio.h>

// Function declarations
int add(int a, int b);
int factorial(int n);
int isPrime(int n);
void printTable(int n);

int main() {
    int choice, num1, num2;

    printf("Function Examples Menu:\n");
    printf("1. Addition\n");
    printf("2. Factorial\n");
    printf("3. Check Prime\n");
    printf("4. Multiplication Table\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            printf("Sum: %d\n", add(num1, num2));
            break;
        case 2:
            printf("Enter a number: ");
            scanf("%d", &num1);
            printf("Factorial: %d\n", factorial(num1));
            break;
        case 3:
            printf("Enter a number: ");
            scanf("%d", &num1);
            if (isPrime(num1))
                printf("%d is prime\n", num1);
            else
                printf("%d is not prime\n", num1);
            break;
        case 4:
            printf("Enter a number: ");
            scanf("%d", &num1);
            printTable(num1);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}

int add(int a, int b) {
    return a + b;
}

int factorial(int n) {
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

void printTable(int n) {
    printf("Multiplication table of %d:\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}