// 1. Write a program to dynamically create an array of size 6 capable of storing 6 integers.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // declaring the array
    int array[6];

    // declaring the memory dynamically for the array
    int *dynamicArray = (int *)malloc(6 * sizeof(int));

    // linking the array element to the specified memory
    for (int i = 0; i < 6; i++)
    {
        array[i] = dynamicArray[i];
    }

    // Don't forget to free the dynamically allocated memory when done.
    free(dynamicArray);

    return 0;
}
