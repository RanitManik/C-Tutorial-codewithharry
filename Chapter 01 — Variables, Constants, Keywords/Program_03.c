#include <stdio.h>

int main() {
    // Declare variables
    double celsius, fahrenheit;

    // Get user input for temperature in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%lf", &celsius);

    // Convert Celsius to Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // Display the result
    printf("Temperature in Fahrenheit: %lf\n", fahrenheit);

    return 0;
}
