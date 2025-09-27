#include <stdio.h>

// Recursive function declarations
int factorial_recursive(int n);
int fibonacci_recursive(int n);
int gcd_recursive(int a, int b);
void tower_of_hanoi(int n, char from, char to, char aux);

int main() {
    int choice, num, num2;

    printf("Recursion Examples Menu:\n");
    printf("1. Factorial (Recursive)\n");
    printf("2. Fibonacci (Recursive)\n");
    printf("3. GCD (Recursive)\n");
    printf("4. Tower of Hanoi\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter a number: ");
            scanf("%d", &num);
            printf("Factorial: %d\n", factorial_recursive(num));
            break;
        case 2:
            printf("Enter a number: ");
            scanf("%d", &num);
            printf("Fibonacci: %d\n", fibonacci_recursive(num));
            break;
        case 3:
            printf("Enter two numbers: ");
            scanf("%d %d", &num, &num2);
            printf("GCD: %d\n", gcd_recursive(num, num2));
            break;
        case 4:
            printf("Enter number of disks: ");
            scanf("%d", &num);
            printf("Tower of Hanoi solution:\n");
            tower_of_hanoi(num, 'A', 'C', 'B');
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}

int factorial_recursive(int n) {
    if (n <= 1)
        return 1;
    return n * factorial_recursive(n - 1);
}

int fibonacci_recursive(int n) {
    if (n <= 1)
        return n;
    return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}

int gcd_recursive(int a, int b) {
    if (b == 0)
        return a;
    return gcd_recursive(b, a % b);
}

void tower_of_hanoi(int n, char from, char to, char aux) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", from, to);
        return;
    }
    tower_of_hanoi(n - 1, from, aux, to);
    printf("Move disk %d from %c to %c\n", n, from, to);
    tower_of_hanoi(n - 1, aux, to, from);
}