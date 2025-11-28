#include <stdio.h>

// Recursive function to calculate base^exp
double power(double base, int exp) {
    if (exp == 0)
        return 1;                   // Base case

    if (exp > 0)
        return base * power(base, exp - 1);   // Positive exponent

    // For negative exponents
    return 1 / power(base, -exp);
}

int main() {
    double base;
    int exp;

    printf("Enter base: ");
    scanf("%lf", &base);

    printf("Enter exponent: ");
    scanf("%d", &exp);

    printf("%.2lf^%d = %.5lf\n", base, exp, power(base, exp));

    return 0;
}