#include <stdio.h>

int main() {
    int num, factorial = 1;

    // Get user input for the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate factorial using a for loop
    for (int i = 1; i <= num; ++i) {
        factorial *= i;
    }

    // Display the result
    printf("Factorial of %d: %d\n", num, factorial);

    return 0;
}
