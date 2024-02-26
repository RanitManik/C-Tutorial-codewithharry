#include <stdio.h>

int main() {
    int num, isPrime = 1, i = 2;  // Assuming the number is prime initially

    // Get user input for the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check for prime using a while loop
    while (i <= num / 2) {
        if (num % i == 0) {
            isPrime = 0;  // Set isPrime to 0 if the number is divisible
            break;
        }
        ++i;
    }

    // Display the result
    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
