//Write a program using functions to find the average of three numbers.

#include<stdio.h>

// function prototype
int takeInput(int i);

float averageThree(int num1, int num2, int num3);

// function definition
float averageThree(int num1, int num2, int num3) {
    return ((num1 + num2 + num3) / 3.00);
}

int takeInput(int i) {
    int num;
    printf("Enter the value of %d number: ", i);
    scanf("%d", &num);

    return num;
}

int main() {
    int num1, num2, num3;

    num1 = takeInput(1);
    num2 = takeInput(2);
    num3 = takeInput(3);

    printf("The average of given three numbers is %.2f", averageThree(num1, num2, num3));
    return 0;
}
