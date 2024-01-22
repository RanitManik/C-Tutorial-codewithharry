// Try problem 3 using call by value and verify that it doesn’t change the value of the said variable.

#include <stdio.h>

// Function declaration
void changeTheValueByTenTimes(int number);

int main()
{
    int number = 15;
    changeTheValueByTenTimes(number);
    printf("The original value remains same: %d", number);
    return 0;
}

// Function definition
void changeTheValueByTenTimes(int number)
{
    int changedNumber = (number * 10);
    printf("The ten times changed Value of the passed number is %d\n", changedNumber);
}
