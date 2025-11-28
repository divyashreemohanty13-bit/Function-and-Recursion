#include <stdio.h>

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2, result;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    //calling the add function
    result = add(num1, num2);

    //Printing the result
    printf("The sum is:%d\n", result);

    return 0;
}