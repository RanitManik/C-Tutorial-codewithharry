#include <stdio.h>

int main() {
    int i = 1, sum = 0;

    // Calculate the sum using a while loop
    while (i <= 10) {
        sum += i;
        ++i;
    }

    // Display the result
    printf("Sum of the first ten natural numbers: %d\n", sum);

    return 0;
}
