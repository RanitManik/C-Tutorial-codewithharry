#include <stdio.h>

int main() {
    FILE *file;
    char name1[50], name2[50];
    int salary1, salary2;

    // Open the file in write mode
    file = fopen("files/employee_data.txt", "w");

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;  // Return with an error code
    }

    // Input details for the first employee
    printf("Enter name for employee 1: ");
    scanf("%s", name1);
    printf("Enter salary for employee 1: ");
    scanf("%d", &salary1);

    // Input details for the second employee
    printf("Enter name for employee 2: ");
    scanf("%s", name2);
    printf("Enter salary for employee 2: ");
    scanf("%d", &salary2);

    // Write data to the file in the specified format
    fprintf(file, "%s, %d\n", name1, salary1);
    fprintf(file, "%s, %d\n", name2, salary2);

    // Close the file
    fclose(file);

    printf("Employee data written to the file successfully.\n");

    return 0;
}
