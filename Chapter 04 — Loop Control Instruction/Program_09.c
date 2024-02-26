#include <stdio.h>

int main() {
    int num, factorial = 1, i = 1;

    // Get user input for the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate factorial using a while loop
    while (i <= num) {
        factorial *= i;
        ++i;
    }

    // Display the result
    printf("Factorial of %d: %d\n", num, factorial);

    return 0;
}
