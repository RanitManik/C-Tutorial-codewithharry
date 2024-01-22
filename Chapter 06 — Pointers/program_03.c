// Write a program to change the value of a variable to ten times its current value. Write a function and pass the value by reference.

#include <stdio.h>

// Function declaration
void changeTheValueByTenTimes(int *ptr);

int main()
{
    int number = 15;
    changeTheValueByTenTimes(&number);
    return 0;
}

// Function definition
void changeTheValueByTenTimes(int *ptr)
{
    int changedNumber = (*ptr * 10);
    printf("The ten times changed Value of the passed number is %d", changedNumber);
}
