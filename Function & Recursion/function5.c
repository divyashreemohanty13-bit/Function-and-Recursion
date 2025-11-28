#include <stdio.h>

// Function to return the maximum of two numbers
int findMax(int n1, int n2) {
    if (n1 > n2)
        return n1;
    else
        return n2;
}

int main() {
    int a, b, c, max;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Call findMax twice to find maximum of three numbers
    max = findMax(findMax(a, b), c);

    printf("Maximum of the three numbers is: %d\n", max);

    return 0;
}