#include <stdio.h>

int main() {
    int number;

    // Get user input for the number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is divisible by 97
    if (number % 97 == 0) {
        printf("%d is divisible by 97.\n", number);
    } else {
        printf("%d is not divisible by 97.\n", number);
    }

    return 0;
}
