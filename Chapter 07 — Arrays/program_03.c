#include <stdio.h>

int main() {
    int table[10];

    // Store the multiplication table of 5
    for (int i = 0; i < 10; ++i) {
        table[i] = 5 * (i + 1);
    }

    // Display the array
    for (int i = 0; i < 10; ++i) {
        printf("%d ", table[i]);
    }

    return 0;
}
