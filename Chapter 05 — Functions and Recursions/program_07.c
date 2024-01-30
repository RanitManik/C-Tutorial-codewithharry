//Write a program using functions to print the following pattern(first n lines):

#include<stdio.h>

// Function prototype
void printPattern(int n);

// Function definition
void printPattern(int n) {
    for (int i = 1; i <= n; i++) {
        // Print spaces before the stars
        for (int space = 1; space <= n - i; space++) {
            printf(" ");
        }

        // Print stars
        for (int star = 1; star <= 2 * i - 1; star++) {
            printf("*");
        }

        // Move to the next line
        printf("\n");
    }
}

int main() {
    int n;

    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Check if the input is non-negative
    if (n < 0) {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 1; // Exit with an error code
    }

    // Call the function to print the pattern
    printPattern(n);

    return 0;
}
