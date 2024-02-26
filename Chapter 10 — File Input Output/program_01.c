#include <stdio.h>

int main() {
    FILE *file;
    int numbers[3];

    // Assuming the integers are stored in a file named 'integers.txt'
    file = fopen("files/integers.txt", "r");

    if (file != NULL) {
        for (int i = 0; i < 3; i++) {
            if (fscanf(file, "%d", &numbers[i]) != 1) {
                // Check if fscanf successfully read an integer
                printf("Error reading integer from file.\n");
                fclose(file);
                return 1;  // Return with an error code
            }
        }
        fclose(file);

        printf("Read integers: %d, %d, %d\n", numbers[0], numbers[1], numbers[2]);
    } else {
        printf("Error opening file.\n");
    }

    return 0;
}
