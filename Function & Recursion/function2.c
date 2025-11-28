#include <stdio.h>

// Function to check if a number is even 
int isEven(int num) {
    if (num % 2 == 0)
    return 1; //Even
else
return 0; //Odd
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d" , &number);

    //Using isEven(number))
    if(isEven(number))
    printf("%d is Even.\n", number);
    else
    printf("%d is Odd.\n", number);

    return 0;
}