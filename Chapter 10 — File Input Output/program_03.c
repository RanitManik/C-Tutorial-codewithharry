#include <stdio.h>

int main() {
    FILE *inputFile, *outputFile;
    char character;

    // Open the input file in read mode
    inputFile = fopen("files/input.txt", "r");

    if (inputFile == NULL) {
        printf("Error opening input file.\n");
        return 1;  // Return with an error code
    }

    // Open the output file in write mode
    outputFile = fopen("files/output.txt", "w");

    if (outputFile == NULL) {
        printf("Error opening output file.\n");
        fclose(inputFile);  // Close the input file before returning
        return 1;           // Return with an error code
    }

    // Read character by character from the input file and write it twice to the output file
    while ((character = fgetc(inputFile)) != EOF) {
        fputc(character, outputFile);
        fputc(character, outputFile);
    }

    // Close both files
    fclose(inputFile);
    fclose(outputFile);

    printf("Content copied successfully.\n");

    return 0;
}
