//Write a function to calculate the force of attraction on a body of mass m exerted by earth. (g=9.8m/S2)

#include<stdio.h>

// Function prototype
double calculateAttractionForce(double mass);

// Function definition
double calculateAttractionForce(double mass) {
    // Gravitational acceleration
    const double g = 9.8;

    // Calculate the force using the formula: force = mass * gravity
    double force = mass * g;

    return force;
}

int main() {
    double mass;

    // Input the mass of the body
    printf("Enter the mass of the body (in kilograms): ");
    scanf("%lf", &mass);

    // Call the function to calculate the attraction force
    double attractionForce = calculateAttractionForce(mass);

    // Display the result
    printf("The force of attraction on a body of %.2f kg mass exerted by Earth is %.2f Newtons.\n", mass,
           attractionForce);

    return 0;
}
