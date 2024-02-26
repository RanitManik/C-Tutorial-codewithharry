#include <stdio.h>

int main() {
    // Print the multiplication table in reversed order
    for (int i = 10; i >= 1; --i) {
        printf("10 x %d = %d\n", i, 10 * i);
    }

    return 0;
}
