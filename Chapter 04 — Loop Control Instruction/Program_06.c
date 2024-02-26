#include <stdio.h>

int main() {
    int sum = 0;

    // Using a for loop to sum the first ten natural numbers
    for (int i = 1; i <= 10; ++i) {
        sum += i;
    }
    printf("Sum using for loop: %d\n", sum);

    sum = 0; // Reset sum for the do-while loop

    // Using a do-while loop to sum the first ten natural numbers
    int j = 1;
    do {
        sum += j;
        ++j;
    } while (j <= 10);
    printf("Sum using do-while loop: %d\n", sum);

    return 0;
}
