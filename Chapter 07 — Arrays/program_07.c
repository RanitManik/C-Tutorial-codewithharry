#include <stdio.h>

int main() {
    int tables[3][10];

    // Populate the array with multiplication tables
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 10; ++j) {
            tables[i][j] = (i + 2) * (j + 1);
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
