//Write a recursive function to calculate the sum of first n natural numbers.

#include<stdio.h>

// Function prototype
int sumOfNaturalNumbers(int n);

// Function definition
int sumOfNaturalNumbers(int n) {
    if (n == 0) {
        return 0;
    } else {
        // Recursive call to calculate the sum
        return n + sumOfNaturalNumbers(n - 1);
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

    // Call the recursive function to calculate the sum
    int result = sumOfNaturalNumbers(n);

    // Display the result
    printf("The sum of the first %d natural numbers is: %d\n", n, result);

    return 0;
}
