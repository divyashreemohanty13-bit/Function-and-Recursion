#include <stdio.h>

int num = 100;   // Global variable

void display() {
    int num = 50;   // Local variable (shadows global)
    printf("Inside display() - Local num = %d\n", num);

    // Access global variable using extern
    extern int num;
    printf("Inside display() - Global num = %d\n", num);
}

int main() {
    int num = 20;   // Local variable (shadows global)
    printf("Inside main() - Local num = %d\n", num);

    // Access global variable by declaring extern inside main
    {
        extern int num;
        printf("Inside main() - Global num = %d\n", num);
    }

    display();  // Call function

    return 0;
}













