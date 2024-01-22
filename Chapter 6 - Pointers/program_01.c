// Write a program to print the address of Variable. Use this address to get the value this variable

#include <stdio.h>

int main() {
    int a = 100;
    printf("The address of the given variable is: %u\n", &a);
    int *ptr = &a;
    printf("The value pointed by the pointer is %d\n", *ptr);
    return 0;
}