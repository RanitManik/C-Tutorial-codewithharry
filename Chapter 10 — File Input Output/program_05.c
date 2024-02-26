#include <stdio.h>

int main() {
    FILE *file;
    int oldValue, newValue;

    // Open the file in read mode
    file = fopen("files/integer_data.txt", "r");

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;  // Return with an error code
    }

    // Read the old value from the file
    fscanf(file, "%d", &oldValue);

    // Close the file before reopening it for writing
    fclose(file);

    // Double the old value to get the new value
    newValue = oldValue * 2;

    // Open the file in write mode
    file = fopen("files/integer_data.txt", "w");

    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;  // Return with an error code
    }

    // Write the new value back to the file
    fprintf(file, "%d\n", newValue);

    // Close the file
    fclose(file);

    printf("File modified successfully. The new value is %d.\n", newValue);

    return 0;
}
