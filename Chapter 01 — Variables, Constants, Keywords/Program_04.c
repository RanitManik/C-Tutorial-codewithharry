#include <stdio.h>

int main() {
    // Declare variables
    double principal, rate, time, simpleInterest;

    // Get user input for principal amount
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    // Get user input for rate of interest
    printf("Enter the rate of interest: ");
    scanf("%lf", &rate);

    // Get user input for time in years
    printf("Enter the time in years: ");
    scanf("%lf", &time);

    // Calculate simple interest
    simpleInterest = (principal * rate * time) / 100;

    // Display the result
    printf("Simple Interest: %lf\n", simpleInterest);

    return 0;
}
