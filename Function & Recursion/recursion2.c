#include <stdio.h>

// Recursive function to find Nth Fibonacci number
int fibonacci(int n) {
    if (n == 0)
        return 0;          // Base case
    else if (n == 1)
        return 1;          // Base case
    else
        return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive step
}

int main() {
    int n;

    printf("Enter N: ");
    scanf("%d", &n);

    printf("Fibonacci number at position %d is %d\n", n, fibonacci(n));

    return 0;
}