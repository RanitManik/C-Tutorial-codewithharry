// 2. Use the array in Problem 1 to store 6 integers entered by the user.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // declaring the memory dynamically for the array
    int *dynamicArray = (int *)malloc(6 * sizeof(int));

    // checking if memory allocation is successful
    if (dynamicArray == NULL)
    {
        printf("Memory allocation failed. Exiting...\n");
        return 1; // Return an error code
    }

    // linking the array element to the specified memory
    for (int i = 0; i < 6; i++)
    {
        printf("Enter the %d element of the array: ", i);
        scanf("%d", &dynamicArray[i]);
    }

    // printing the elements of the array
    for (int i = 0; i < 6; i++)
    {
        printf("The %d element of the array is %d\n", i, dynamicArray[i]);
    }

    // Don't forget to free the dynamically allocated memory when done.
    free(dynamicArray);

    return 0;
}
