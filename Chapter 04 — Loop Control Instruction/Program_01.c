#include <stdio.h>

int main() {
    int n;

    // Get user input for the number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Print the multiplication table
    for (int i = 1; i <= 10; ++i) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}
