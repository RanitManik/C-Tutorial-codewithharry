// 3. Solve problem 1 using calloc().

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // declaring the memory dynamically for the array
    int *dynamicArray = calloc(6, sizeof(int));

    // printing the elements of the array
    for (int i = 0; i < 6; i++)
    {
        printf("The %d element of the array is %d\n", i, dynamicArray[i]);
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
