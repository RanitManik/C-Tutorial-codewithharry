#include <stdio.h>

int main() {
    int sum = 0;

    // Calculate the sum of the numbers in the multiplication table of 8
    for (int i = 1; i <= 10; ++i) {
        sum += 8 * i;
    }

    // Display the result
    printf("Sum of the numbers in the multiplication table of 8: %d\n", sum);

    return 0;
}
