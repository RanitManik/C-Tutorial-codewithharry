//Write a function to convert Celcius temperature into Fahrenheit.

#include<stdio.h>

// Function prototype
double celsiusToFahrenheit(double celsius);

// Function definition
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    double celsius;

    // Input temperature in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%lf", &celsius);

    // Call the function to convert Celsius to Fahrenheit
    double fahrenheit = celsiusToFahrenheit(celsius);

    // Display the result
    printf("%.2f Celsius is equal to %.2f Fahrenheit\n", celsius, fahrenheit);

    return 0;
}
