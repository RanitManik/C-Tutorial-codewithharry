// 5. Create an array of the multiplication table of 7 up to 10 (7x10=70). Use realloc to make it store 15 numbers(from 7x1 to 7x15).

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Create an array for the multiplication table of 7 up to 10
    int *multiplicationTable = (int *)malloc(10 * sizeof(int));

    // Check if memory allocation is successful
    if (multiplicationTable == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    // Populate the array with the multiplication table
    for (int i = 0; i < 10; i++)
    {
        multiplicationTable[i] = 7 * (i + 1);
    }

    // Use realloc to extend the array to store 15 numbers
    int *extendedTable = (int *)realloc(multiplicationTable, 15 * sizeof(int));

    // Check if realloc was successful
    if (extendedTable == NULL)
    {
        fprintf(stderr, "Memory reallocation failed\n");
        free(multiplicationTable); // Free the original block if reallocation failed
        return 1;
    }

    // Populate the remaining elements in the extended array
    for (int i = 10; i < 15; i++)
    {
        extendedTable[i] = 7 * (i + 1);
    }

    // Print the multiplication table stored in the array
    for (int i = 0; i < 15; i++)
    {
        printf("The %d x %d = %d\n", 7, (i + 1), extendedTable[i]);
    }

    // Free the dynamically allocated memory
    free(extendedTable);

    return 0;
}
