#include <stdio.h>

void generateMultiplicationTable(int number, const char *fileName) {
    FILE *file = fopen(fileName, "w");

    if (file != NULL) {
        for (int i = 1; i <= 10; i++) {
            fprintf(file, "%d x %d = %d\n", number, i, number * i);
        }
        fclose(file);
        printf("Multiplication table generated and saved to %s.\n", fileName);
    } else {
        printf("Error opening file.\n");
    }
}

int main() {
    int inputNumber;

    // Take input from the user for the number
    printf("Enter a number to generate its multiplication table: ");
    scanf("%d", &inputNumber);

    // Generate table and save to 'table_inputNumber.txt'
    char fileName[20];
    sprintf(fileName, "files/table_%d.txt", inputNumber);
    generateMultiplicationTable(inputNumber, fileName);

    return 0;
}
