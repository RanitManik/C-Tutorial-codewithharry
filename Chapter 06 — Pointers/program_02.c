// Write a program having a variable i. Print the address of i. Pass this variable to a function and print its address. Are these addresses same? Why?

#include <stdio.h>

// Declare the function before using it
void randomFunction(int variable);

int main()
{
    int i = 0;
    printf("address of the variable in memory is: %u\n", &i);
    randomFunction(i);
    return 0;
}

void randomFunction(int variable)
{
    printf("address of the variable in memory is: %u", &variable);
}

// ans ==> No they are not the same as in case of call by value main and all the other functions have their own set of memory where they put their variable ==> means they are not same in memory address although they are same in value