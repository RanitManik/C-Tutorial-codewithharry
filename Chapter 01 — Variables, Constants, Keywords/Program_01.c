#include <stdio.h>

int main() {
    // Declare variables
    int length, width;

    // Get user input for length
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);

    // Get user input for width
    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);

    // Calculate area
    int area = length * width;

    // Display the result
    printf("Area of the rectangle: %d\n", area);

    return 0;
}
