//Write a program using recursion to calculate the nth element of the Fibonacci series.

#include<stdio.h>

// Function prototype
int fibonacci(int n);

// Function definition
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        // Recursively calculate the nth Fibonacci number
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;

    // Input the value of n
    printf("Enter the value of n to find the nth Fibonacci number: ");
    scanf("%d", &n);

    // Check if the input is non-negative
    if (n < 0) {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 1; // Exit with an error code
    }

    // Call the recursive function to calculate the nth Fibonacci number
    int result = fibonacci(n);

    // Display the result
    printf("The %dth element of the Fibonacci series is: %d\n", n, result);

    return 0;
}
