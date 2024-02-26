#include <stdio.h>

int main() {
    int tables[3][10];

    // Get user input for multiplication factors
    int factors[3];
    for (int i = 0; i < 3; ++i) {
        printf("Enter a number for Table %d: ", i + 2);
        scanf("%d", &factors[i]);
    }

    // Populate the array with custom multiplication tables
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 10; ++j) {
            tables[i][j] = factors[i] * (j + 1);
        }
    }

    // Display the array
    for (int i = 0; i < 3; ++i) {
        printf("Table %d: ", i + 2);
        for (int j = 0; j < 10; ++j) {
            printf("%d ", tables[i][j]);
        }
        printf("\n");
    }

    return 0;
}
