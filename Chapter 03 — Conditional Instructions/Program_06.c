#include <stdio.h>

int main() {
    int num1, num2, num3, num4;

    // Get user input for four numbers
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    // Find the greatest among the four numbers
    int greatest = num1;

    if (num2 > greatest) {
        greatest = num2;
    }

    if (num3 > greatest) {
        greatest = num3;
    }

    if (num4 > greatest) {
        greatest = num4;
    }

    // Display the result
    printf("The greatest number is: %d\n", greatest);

    return 0;
}
