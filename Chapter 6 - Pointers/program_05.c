// Write a program to print the value of a variable i by using the "pointer to pointer" type of variable.

#include <stdio.h>

int main()
{
    int i = 3;
    int *ptr = &i;
    int **ptr_ptr = &ptr;
    printf("The value of the variable is %d", **ptr_ptr);
    return 0;
}