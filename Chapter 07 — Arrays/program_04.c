#include <stdio.h>

int main() {
    int table[10];

    // Get user input for the multiplication factor
    int factor;
    printf("Enter a number: ");
    scanf("%d", &factor);

    // Store the multiplication table based on user input
    for (int i = 0; i < 10; ++i) {
        table[i] = factor * (i + 1);
    }

    // Display the array
    for (int i = 0; i < 10; ++i) {
        printf("%d ", table[i]);
    }

    return 0;
}
