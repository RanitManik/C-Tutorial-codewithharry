// 6. Attempt problem 4 using calloc().
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *dynamicArray = (int *)malloc(6 * sizeof(int));
    int *newArray = (int *)realloc(dynamicArray, 5 * sizeof(int));
    return 0;
}