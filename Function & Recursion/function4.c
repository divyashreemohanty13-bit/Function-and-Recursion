include <stdio.h>

// Function to calculate and print square
void calculateSquare(int num) {
    int square = num * num;
    printf("Square of %d is %d\n", num, square);
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    calculateSquare(number);  // Calling the function

    return 0;
}