#include <stdio.h>

// Recursive function to find factorial
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;            // Base case
    else
        return n * factorial(n - 1);  // Recursive call
}

int main() {
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = factorial(num);   // Calling the recursive function

    printf("Factorial of %d is %d\n", num, result);

    return 0;
}