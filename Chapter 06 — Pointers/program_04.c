// Write a program using a function that calculates the sum and average of two numbers. Use pointers and print the values of sum and average in main().

#include <stdio.h>

void sumAndAverage(int number1, int number2, int *address_sum, float *address_avg);

void sumAndAverage(int number1, int number2, int *address_sum, float *address_avg)
{
    *address_sum = number1 + number2;
    *address_avg = *address_sum / 2.00;
}

int main()
{
    int num1 = 1, num2 = 10;
    int sum;
    float average;
    sumAndAverage(num1, num2, &sum, &average);
    printf("The sum of the numbers is %d\nThe average of the numbers is %f", sum, average);
    return 0;
}
