#include <stdio.h>

#define PI 3.14159

int main() {
    // Declare variables
    double radius, height;

    // Area of a circle
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    // Calculate area of the circle
    double circleArea = PI * radius * radius;
    printf("Area of the circle: %lf\n", circleArea);

    // Volume of a cylinder
    printf("Enter the radius of the cylinder: ");
    scanf("%lf", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%lf", &height);

    // Calculate volume of the cylinder
    double cylinderVolume = PI * radius * radius * height;
    printf("Volume of the cylinder: %lf\n", cylinderVolume);

    return 0;
}
